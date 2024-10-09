module Driver where

import Control.Monad (void, when)
import Data.Function ((&))
import Data.Text (Text)
import Data.Text.Encoding qualified as Text
import Effectful
import Effectful.FileSystem (FileSystem)
import Effectful.FileSystem qualified as FileSystem
import Effectful.FileSystem.IO.ByteString qualified as EBS
import System.FilePath ((<.>), (</>))
import System.FilePath qualified as FilePath
import Text.Pretty.Simple
import qualified Rock

import Boreal.Backend.Lua qualified as Lua
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.IR.ANFCore qualified as ANFCore
import Boreal.IR.ANFCore.Types (ANFCore)
import Boreal.IR.RawCore.Types (RawCore)
import Boreal.IR.RawCore.Renamer qualified as RawCore
import Boreal.IR.Types (Module (..), moduleNameToPath)
import Boreal.Protocol.BuildFlags
import Boreal.Protocol.DebugFlags
import Boreal.ScopeEnvironment
import Driver.Cache qualified as Cache
import Driver.Query (Query (..))
import Driver.Rules (rules)

runQuery :: (IOE :> es) => Query a -> Eff es a
runQuery query = liftIO $ 
  Rock.runTask rules $ Rock.fetch query

parseFile
  :: (IOE :> es)
  => FilePath
  -> Eff es (Module RawCore, ScopeEnvironment)
parseFile sourceFilePath = do
  runQuery (ParseFile sourceFilePath)

compileANF
  :: (IOE :> es)
  => FilePath
  -> Eff es (Module ANFCore)
compileANF sourceFilePath = do
  runQuery (CompileANF sourceFilePath)

emitLua
  :: (IOE :> es)
  => FilePath
      -- ^ Source file path
  -> FilePath
      -- ^ Build dir
  -> Eff es FilePath
emitLua sourceFilePath buildDir  = do
  runQuery (EmitLua sourceFilePath buildDir )

cleanProject
  :: (IOE :> es)
  => FilePath
  -> Eff es ()
cleanProject buildDir = do
  runQuery (CleanProject buildDir)

purgeCache
  :: (IOE :> es)
  => FilePath
  -> Eff es ()
purgeCache cachePath = do
  runQuery (PurgeCache cachePath)

runBuildEffects :: Eff [FileSystem, IOE] a -> IO a
runBuildEffects action =
  action
    & FileSystem.runFileSystem
    & runEff

buildModule
  :: (FileSystem :> es, IOE :> es)
  => DebugFlags
  -> BuildFlags
  -> FilePath
  -> Bool
  -> Eff es ()
buildModule debugFlags buildFlags filePath withCache = do
  currentDir <- FileSystem.getCurrentDirectory
  let libsDir = currentDir </> "_build" </> "libs"
  FileSystem.createDirectoryIfMissing True libsDir
  input <- EBS.readFile filePath
  parsedResult <- liftIO $ TreeSitter.parse input
  when debugFlags.dumpSyntax $
    liftIO $
      pPrint parsedResult
  (rawModule, environment) <- liftIO $ RawCore.runRawCore newScopeEnvironment $ RawCore.transformModule parsedResult
  when debugFlags.dumpRawCore $
    liftIO $
      pPrint rawModule
  mCacheEntry <- Cache.readCache buildFlags filePath
  if withCache
    then case mCacheEntry of
      Just cacheEntry -> do
        liftIO $ putStrLn $ "[+] Using cache entry: " <> show cacheEntry
        let outputFile = moduleNameToPath rawModule.moduleName <.> ".lua"
        let outputPath = libsDir </> outputFile
        let moduleDir = FilePath.takeDirectory outputPath
        FileSystem.createDirectoryIfMissing True moduleDir
        FileSystem.copyFile cacheEntry outputPath
      Nothing -> do
        generated <- runCompilation debugFlags rawModule libsDir filePath
        Cache.writeCache buildFlags filePath (Text.encodeUtf8 generated)
    else void $ runCompilation debugFlags rawModule libsDir filePath

runCompilation
  :: (FileSystem :> es, IOE :> es)
  => DebugFlags
  -> Module RawCore
  -> FilePath
  -> FilePath
  -> Eff es Text
runCompilation debugFlags rawModule libsDir filePath = do
  let outputFile = moduleNameToPath rawModule.moduleName <.> ".lua"
  let outputPath = libsDir </> outputFile
  let moduleDir = FilePath.takeDirectory outputPath
  liftIO $ putStrLn $ "[+] Compiling " <> filePath <> " to " <> outputPath
  anfDecls <- liftIO $ traverse (ANFCore.runANFCore newScopeEnvironment) rawModule.topLevelFunctions
  let anfModule = rawModule{topLevelFunctions = anfDecls}
  when debugFlags.dumpANFCore $
    liftIO $
      pPrint anfModule
  generated <- liftIO $ Lua.runLua libsDir anfModule
  FileSystem.createDirectoryIfMissing True moduleDir
  EBS.writeFile outputPath (Text.encodeUtf8 generated)
  pure generated
