module Driver where

import Data.Text.Encoding qualified as Text
import Effectful
import Effectful.FileSystem (FileSystem)
import Effectful.FileSystem qualified as FileSystem
import Effectful.FileSystem.IO.ByteString qualified as EBS
import System.FilePath ((<.>), (</>))
import System.FilePath qualified as FilePath

import Boreal.Backend.Lua qualified as Lua
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.IR.ANFCore qualified as ANFCore
import Boreal.IR.RawCore qualified as RawCore
import Boreal.IR.Types (Module (..), moduleNameToPath)
import Boreal.ScopeEnvironment
import Driver.BuildFlags
import Driver.Cache qualified as Cache

buildModule
  :: (FileSystem :> es, IOE :> es)
  => BuildFlags
  -> FilePath
  -> Eff es ()
buildModule buildFlags filePath = do
  currentDir <- FileSystem.getCurrentDirectory
  let libsDir = currentDir </> "build_" </> "libs"
  FileSystem.createDirectoryIfMissing True libsDir
  input <- EBS.readFile filePath
  parsedResult <- liftIO $ TreeSitter.parse input
  rawModule <- liftIO $ RawCore.runRawCore $ RawCore.transformModule parsedResult
  mCacheEntry <- Cache.readCache buildFlags filePath
  case mCacheEntry of
    Just cacheEntry -> do
      liftIO $ putStrLn $ "[+] Using cache entry: " <> show cacheEntry
      let outputFile = moduleNameToPath rawModule.moduleName <.> ".lua"
      let outputPath = libsDir </> outputFile
      let moduleDir = FilePath.takeDirectory outputPath
      FileSystem.createDirectoryIfMissing True moduleDir
      FileSystem.copyFile cacheEntry outputPath
    Nothing -> do
      let outputFile = moduleNameToPath rawModule.moduleName <.> ".lua"
      let outputPath = libsDir </> outputFile
      let moduleDir = FilePath.takeDirectory outputPath
      liftIO $ putStrLn $ "[+] Compiling " <> filePath <> " to " <> outputPath
      anfDecls <- liftIO $ traverse (ANFCore.runANFCore newScopeEnvironment) rawModule.topLevelDeclarations
      generated <- liftIO $ Lua.runLua libsDir rawModule{topLevelDeclarations = anfDecls}
      FileSystem.createDirectoryIfMissing True moduleDir
      EBS.writeFile outputPath (Text.encodeUtf8 generated)
      Cache.writeCache buildFlags filePath (Text.encodeUtf8 generated)
