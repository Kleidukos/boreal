module BorealTest.Backend.LuaRunTest where

import Data.ByteString.Lazy.Char8 qualified as BSL
import Data.Char (isSpace)
import Effectful.FileSystem qualified as FileSystem
import System.FilePath ((</>))
import System.Process.Typed
import Test.Tasty
import Test.Tasty.HUnit

import Control.Monad.IO.Class (liftIO)
import Driver qualified

spec :: FilePath -> TestTree
spec topDir =
  testGroup
    "Lua run"
    [ testCase "Arithmetic expression returns correct result" $ testArithmeticExpression topDir
    ]

testArithmeticExpression :: FilePath -> Assertion
testArithmeticExpression topDir = Driver.runBuildEffects $ do
  currentDir <- FileSystem.getCurrentDirectory
  sourceFilePath <- FileSystem.makeAbsolute "run-test/boreal/arithmetic-expression.bor"
  let buildDir = currentDir </> ".." </> "_build" </> "libs"
  FileSystem.createDirectoryIfMissing True buildDir
  Driver.emitLua (topDir </> "../stdlib/Prelude.bor") buildDir
  Driver.emitLua sourceFilePath buildDir
  (_, result) <- readProcessStdout $ shell $ "lua -e 'print(dofile(\"" <> buildDir <> "/Mod.lua\").main())'"
  liftIO $
    assertEqual
      "Expected result"
      "43"
      (BSL.dropWhileEnd isSpace result)
