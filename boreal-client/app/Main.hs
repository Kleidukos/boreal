module Main where

import Control.Monad (when)
import Data.Function ((&))
import Effectful
import Effectful.Concurrent (Concurrent)
import Effectful.Concurrent qualified as Concurrent
import Effectful.FileSystem (FileSystem, XdgDirectory (..))
import Effectful.FileSystem qualified as Directory
import Effectful.FileSystem qualified as FileSystem
import Effectful.Process (Process)
import Effectful.Process qualified as Process
import Options.Applicative
import Sel
import System.FilePath ((</>))
import System.IO

import Boreal.Client qualified as Client
import Boreal.Protocol.BuildFlags
import Boreal.Protocol.DebugFlags

data CLICommand
  = Build DebugFlags BuildFlags FilePath
  | Clean
  | Purge
  deriving stock (Eq, Ord, Show)

main :: IO ()
main = secureMain $ do
  hSetBuffering stdout LineBuffering
  result <- execParser (parseCommand `withInfo` "Boreal Compiler")
  runOptions result

parseCommand :: Parser CLICommand
parseCommand =
  subparser $
    command "build" (parseBuildCommand `withInfo` "Build a boreal file or project")
      <> command "clean" (parseCleanCommand `withInfo` "Clean the _build directory")
      <> command "purge" (parsePurgeCommand `withInfo` "Purge the user-wide cache")

parseBuildCommand :: Parser CLICommand
parseBuildCommand =
  Build
    <$> parseDebugFlags
    <*> pure (BuildFlags O0)
    <*> argument str (metavar "FILE" <> action "file")

parseDebugFlags :: Parser DebugFlags
parseDebugFlags =
  DebugFlags
    <$> switch (long "dump-syntax" <> help "Dump the syntax representation ")
    <*> switch (long "dump-raw" <> help "Dump the Raw representation ")
    <*> switch (long "dump-anf" <> help "Dump the ANF representation ")

parseCleanCommand :: Parser CLICommand
parseCleanCommand = pure Clean

parsePurgeCommand :: Parser CLICommand
parsePurgeCommand = pure Purge

runOptions :: CLICommand -> IO ()
runOptions (Build _ _ relativeFilePath) = runBuild $ do
  checkForDaemon
  currentDir <- FileSystem.getCurrentDirectory
  filePath <- Directory.makeAbsolute relativeFilePath
  buildDir <- do
    liftIO $ putStrLn "Getting cache path"
    cachePath <- getCachePath
    liftIO $ putStrLn "Creating cache path if needed"
    FileSystem.createDirectoryIfMissing True cachePath
    liftIO $ putStrLn "Getting current directory"
    Directory.makeAbsolute (currentDir </> "_build" </> "libs")
  stdlibDir <- Directory.makeAbsolute "stdlib"
  Client.withSession $ \_ -> do
    liftIO $ putStrLn "Compiling Prelude"
    Client.compileToLua buildDir $ stdlibDir </> "Prelude.bor"
    liftIO $ putStrLn $ "Compiling " <> filePath
    Client.compileToLua buildDir filePath
runOptions Clean = runBuild $ do
  checkForDaemon
  liftIO $ putStrLn "Checking build directory exists"
  buildDirExists <- FileSystem.doesDirectoryExist "_build"
  when buildDirExists $
    Client.withSession $ \_ -> do
      liftIO $ putStrLn "[+] Cleaning the project"
      buildDir <- Directory.makeAbsolute "_build"
      Client.cleanProject buildDir
      liftIO $ putStrLn "Project cleaned"
runOptions Purge = runBuild $ do
  checkForDaemon
  cacheDirectory <- getCachePath
  cacheExists <- FileSystem.doesDirectoryExist cacheDirectory
  when cacheExists $ do
    Client.withSession $ \_ -> do
      liftIO $ putStrLn $ "[+] Purging " <> cacheDirectory
      Client.purgeCache cacheDirectory

withInfo :: Parser a -> String -> ParserInfo a
withInfo opts desc = info (helper <*> opts) $ progDesc desc

getCachePath :: (FileSystem :> es) => Eff es FilePath
getCachePath = do
  prefix <- FileSystem.getXdgDirectory XdgCache ""
  pure $ prefix </> "boreal/store"

runBuild :: Eff '[Concurrent, Process, FileSystem, IOE] a -> IO a
runBuild cliAction =
  cliAction
    & Concurrent.runConcurrent
    & Process.runProcess
    & FileSystem.runFileSystem
    & runEff

checkForDaemon
  :: ( Process :> es
     , FileSystem :> es
     , IOE :> es
     , Concurrent :> es
     )
  => Eff es ()
checkForDaemon = do
  lockExists <- FileSystem.doesFileExist "/tmp/boreald.lock"
  if lockExists
    then do
      liftIO $ putStrLn "boreald already started"
    else do
      liftIO $ putStrLn "Starting boreald…"
      Process.callProcess "boreald" ["--daemon"]
      Concurrent.threadDelay 3_000_000
      liftIO $ putStrLn "boreald started"
