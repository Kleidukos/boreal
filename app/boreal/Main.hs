module Main where

import Data.Function ((&))
import Effectful
import Effectful.FileSystem
import Effectful.FileSystem qualified as FileSystem
import Options.Applicative hiding (action)
import Sel

import CLI.Types
import Control.Monad (when)
import Driver qualified
import Driver.BuildFlags
import Driver.Cache (getCachePath)

main :: IO ()
main = secureMain $ do
  result <- execParser (parseCommand `withInfo` "Boreal Compiler")
  runOptions result

parseCommand :: Parser Command
parseCommand =
  subparser $
    command "build" (parseBuildCommand `withInfo` "Build a boreal file or project")
      <> command "clean" (parseCleanCommand `withInfo` "Clean the build_/ directory")
      <> command "purge" (parsePurgeCommand `withInfo` "Purge the user-wide cache")

parseBuildCommand :: Parser Command
parseBuildCommand =
  pure (Build (BuildFlags O0))
    <*> argument str (metavar "FILE")

parseCleanCommand :: Parser Command
parseCleanCommand = pure Clean

parsePurgeCommand :: Parser Command
parsePurgeCommand = pure Purge

runOptions :: Command -> IO ()
runOptions (Build _buildFlags filePath) = runBuildEffects $ do
  cachePath <- getCachePath
  FileSystem.createDirectoryIfMissing True cachePath
  Driver.buildModule (BuildFlags O1) "stdlib/Prelude.bor"
  Driver.buildModule (BuildFlags O1) filePath
runOptions Clean =
  runBuildEffects $ do
    buildDirExists <- FileSystem.doesDirectoryExist "build_"
    when buildDirExists $ do
      liftIO $ putStrLn "[+] Cleaning the project"
      FileSystem.removeDirectoryRecursive "build_"
runOptions Purge =
  runBuildEffects $ do
    cacheDirectory <- getCachePath
    cacheExists <- FileSystem.doesDirectoryExist cacheDirectory
    when cacheExists $ do
      liftIO $ putStrLn $ "[+] Purging " <> cacheDirectory
      FileSystem.removeDirectoryRecursive cacheDirectory

runBuildEffects :: Eff [FileSystem, IOE] a -> IO a
runBuildEffects action =
  action
    & FileSystem.runFileSystem
    & runEff

withInfo :: Parser a -> String -> ParserInfo a
withInfo opts desc = info (helper <*> opts) $ progDesc desc
