module Main where

import Options.Applicative

import CLI.Types
import Driver qualified
import System.Directory qualified as Directory

main :: IO ()
main = do
  result <- execParser (parseCommand `withInfo` "Boreal Compiler")
  runOptions result

parseCommand :: Parser Command
parseCommand =
  subparser $
    command "build" (parseBuildCommand `withInfo` "Build a boreal file or project")
      <> command "clean" (parseCleanCommand `withInfo` "Clean the build_/ directory")

parseBuildCommand :: Parser Command
parseBuildCommand =
  pure (Build (BuildFlags O0))
    <*> argument str (metavar "FILE")

parseCleanCommand :: Parser Command
parseCleanCommand = pure Clean

runOptions :: Command -> IO ()
runOptions (Build _buildFlags filePath) = do
  Driver.buildModule "stdlib/Prelude.bor"
  Driver.buildModule filePath
runOptions Clean = Directory.removeDirectoryRecursive "build_"

withInfo :: Parser a -> String -> ParserInfo a
withInfo opts desc = info (helper <*> opts) $ progDesc desc
