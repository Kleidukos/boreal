module Main where

import Options.Applicative

import Boreal.Backend.Lua qualified as Lua
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.IR.ANFCore qualified as ANFCore
import Boreal.IR.RawCore qualified as RawCore
import Boreal.IR.Types (Module (..), moduleNameToPath)
import Boreal.ScopeEnvironment
import CLI.Types
import Data.ByteString qualified as BS
import Data.Text.IO qualified as Text
import System.Directory qualified as Directory
import System.FilePath ((<.>), (</>))
import System.Process.Typed qualified as Process

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
  input <- BS.readFile filePath
  parsedResult <- TreeSitter.parse input
  rawModule <- RawCore.runRawCore $ RawCore.transformModule parsedResult
  anfDecls <- traverse (ANFCore.runANFCore newScopeEnvironment) rawModule.topLevelDeclarations
  generated <- Lua.runLua "build_/libs" rawModule{topLevelDeclarations = anfDecls}
  Directory.createDirectoryIfMissing True "./build_/libs/"
  Process.runProcess "rsync -r --mkpath stdlib build_/libs/"
  Text.writeFile ("build_/libs/" </> moduleNameToPath rawModule.moduleName <.> ".lua") generated
runOptions Clean = do
  Directory.removeDirectoryRecursive "build_"

withInfo :: Parser a -> String -> ParserInfo a
withInfo opts desc = info (helper <*> opts) $ progDesc desc
