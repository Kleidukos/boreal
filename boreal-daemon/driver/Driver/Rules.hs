{-# LANGUAGE GADTs #-}

module Driver.Rules
  ( rules
  , runBuild
  ) where

import System.FilePath ((<.>), (</>))
import Effectful
import Rock qualified
import System.FilePath qualified as FilePath
import Effectful.Log (Logger, Log, LogLevel (..))
import qualified Effectful.Log as Log
import Effectful.FileSystem (FileSystem)
import qualified Data.ByteString as BS
import qualified System.Directory as Directory
import qualified Effectful.FileSystem as FileSystem

import Boreal.Backend.Lua qualified as Lua
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.IR.ANFCore qualified as ANFCore
import Boreal.IR.RawCore qualified as RawCore
import Boreal.IR.Types (Module (..), moduleNameToPath)
import Boreal.ScopeEnvironment (newScopeEnvironment)
import Data.Function ((&))
import Data.Text.Encoding qualified as Text
import Driver.Query

rules
  :: Query a
  -> Rock.Task Query a
rules query = do
  liftIO $ putStrLn $ "Fetching " <> show query
  case query of
    ParseFile sourceFilePath -> do
      input <- liftIO $ BS.readFile sourceFilePath
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
    EmitLua sourceFilePath buildDir -> do
      anfModule <- Rock.fetch (CompileANF sourceFilePath)
      let outputFile = moduleNameToPath anfModule.moduleName <.> ".lua"
      let outputPath = buildDir </> outputFile
      liftIO $ putStrLn $ "Build artefact at: " <> outputPath
      let moduleDir = FilePath.takeDirectory outputPath
      generated <- liftIO $ Lua.runLua buildDir anfModule
      liftIO $ Directory.createDirectoryIfMissing True moduleDir
      liftIO $ BS.writeFile outputPath (Text.encodeUtf8 generated)
      pure outputPath
    CleanProject buildDir ->
      liftIO $ Directory.removeDirectoryRecursive buildDir
    PurgeCache cacheDirectory ->
      liftIO $ Directory.removeDirectoryRecursive cacheDirectory

runBuild :: Logger -> Eff [Log, FileSystem, IOE] a -> IO a
runBuild logger action =
  action
    & Log.runLog "" logger LogInfo 
    & FileSystem.runFileSystem
    & runEff
