module Driver where

import Data.ByteString qualified as BS
import Data.Text.IO qualified as Text
import System.Directory qualified as Directory
import System.FilePath ((<.>), (</>))
import System.FilePath qualified as FilePath

import Boreal.Backend.Lua qualified as Lua
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.IR.ANFCore qualified as ANFCore
import Boreal.IR.RawCore qualified as RawCore
import Boreal.IR.Types (Module (..), moduleNameToPath)
import Boreal.ScopeEnvironment

buildModule :: FilePath -> IO ()
buildModule filePath = do
  let libsDir = "./build_/libs"
  Directory.createDirectoryIfMissing True libsDir
  input <- BS.readFile filePath
  parsedResult <- TreeSitter.parse input
  rawModule <- RawCore.runRawCore $ RawCore.transformModule parsedResult
  let outputFile = moduleNameToPath rawModule.moduleName <.> ".lua"
  let outputPath = libsDir </> outputFile
  let moduleDir = FilePath.takeDirectory outputPath
  putStrLn $ "[+] Compiling " <> filePath <> " to " <> outputPath
  anfDecls <- traverse (ANFCore.runANFCore newScopeEnvironment) rawModule.topLevelDeclarations
  generated <- Lua.runLua libsDir rawModule{topLevelDeclarations = anfDecls}
  Directory.createDirectoryIfMissing True moduleDir
  Text.writeFile outputPath generated
