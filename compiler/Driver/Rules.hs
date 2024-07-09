{-# LANGUAGE GADTs #-}

module Driver.Rules
  ( rules
  , runBuild
  ) where

import Effectful.FileSystem qualified as FileSystem
import Effectful.FileSystem.IO.ByteString qualified as EBS
import System.FilePath ((<.>), (</>))

import Boreal.Backend.Lua qualified as Lua
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.IR.ANFCore qualified as ANFCore
import Boreal.IR.RawCore qualified as RawCore
import Boreal.IR.Types (Module (..), moduleNameToPath)
import Boreal.ScopeEnvironment (newScopeEnvironment)
import Data.Function ((&))
import Data.Text.Encoding qualified as Text
import Driver.Query
import Effectful
import Effectful.FileSystem (FileSystem)
import Rock qualified
import System.FilePath qualified as FilePath

rules
  :: FilePath
  -> Rock.Rules Query
rules buildDir query = do
  liftIO $ putStrLn $ "Fetching " <> show query
  case query of
    ParseFile sourceFilePath -> do
      input <- liftIO $ runBuild $ EBS.readFile sourceFilePath
      parsedResult <- liftIO $ TreeSitter.parse input
      liftIO $ RawCore.runRawCore $ RawCore.transformModule parsedResult
    CompileANF sourceFilePath -> do
      rawModule <- Rock.fetch (ParseFile sourceFilePath)
      anfDecls <-
        liftIO $
          traverse
            (ANFCore.runANFCore newScopeEnvironment)
            rawModule.topLevelFunctions
      pure $ rawModule{topLevelFunctions = anfDecls}
    EmitLua sourceFilePath -> do
      anfModule <- Rock.fetch (CompileANF sourceFilePath)
      let outputFile = moduleNameToPath anfModule.moduleName <.> ".lua"
      let outputPath = buildDir </> outputFile
      let moduleDir = FilePath.takeDirectory outputPath
      generated <- liftIO $ Lua.runLua buildDir anfModule
      liftIO $ runBuild $ do
        FileSystem.createDirectoryIfMissing True moduleDir
        EBS.writeFile outputPath (Text.encodeUtf8 generated)

runBuild :: Eff [FileSystem, IOE] a -> IO a
runBuild action =
  action
    & FileSystem.runFileSystem
    & runEff
