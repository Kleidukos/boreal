module Main where

import CLI.Types
import Control.Monad (when)
import Driver qualified
import Driver.BuildFlags
import Driver.Cache (getCachePath)
import Driver.DebugFlags
import Effectful
import Effectful.FileSystem qualified as FileSystem
import Options.Applicative hiding (action)
import Sel
import System.FilePath ((</>))

main :: IO ()
main = secureMain $ do
  result <- execParser (parseCommand `withInfo` "Boreal Compiler")
  runOptions result

parseCommand :: Parser Command
parseCommand =
  subparser $
    command "build" (parseBuildCommand `withInfo` "Build a boreal file or project")
      <> command "clean" (parseCleanCommand `withInfo` "Clean the _build directory")
      <> command "purge" (parsePurgeCommand `withInfo` "Purge the user-wide cache")

parseBuildCommand :: Parser Command
parseBuildCommand =
  Build
    <$> parseDebugFlags
    <*> pure (BuildFlags O0)
    <*> argument str (metavar "FILE")

parseDebugFlags :: Parser DebugFlags
parseDebugFlags =
  DebugFlags
    <$> switch (long "dump-syntax" <> help "Dump the syntax representation ")
    <*> switch (long "dump-raw" <> help "Dump the Raw representation ")
    <*> switch (long "dump-anf" <> help "Dump the ANF representation ")

parseCleanCommand :: Parser Command
parseCleanCommand = pure Clean

parsePurgeCommand :: Parser Command
parsePurgeCommand = pure Purge

runOptions :: Command -> IO ()
runOptions (Build debugFlags buildFlags filePath) = do
  buildDir <- Driver.runBuildEffects $ do
    cachePath <- getCachePath
    FileSystem.createDirectoryIfMissing True cachePath
    currentDir <- FileSystem.getCurrentDirectory
    pure $ currentDir </> "_build" </> "libs"
  Driver.emitLua buildDir "stdlib/Prelude.bor"
  Driver.emitLua buildDir filePath
runOptions Clean =
  Driver.runBuildEffects $ do
    buildDirExists <- FileSystem.doesDirectoryExist "_build"
    when buildDirExists $ do
      liftIO $ putStrLn "[+] Cleaning the project"
      FileSystem.removeDirectoryRecursive "_build"
runOptions Purge =
  Driver.runBuildEffects $ do
    cacheDirectory <- getCachePath
    cacheExists <- FileSystem.doesDirectoryExist cacheDirectory
    when cacheExists $ do
      liftIO $ putStrLn $ "[+] Purging " <> cacheDirectory
      FileSystem.removeDirectoryRecursive cacheDirectory

withInfo :: Parser a -> String -> ParserInfo a
withInfo opts desc = info (helper <*> opts) $ progDesc desc
