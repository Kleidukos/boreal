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

spec :: TestTree
spec =
  testGroup
    "Lua run"
    [ testCase "Arithmetic expression returns correct result" testArithmeticExpression
    ]

testArithmeticExpression :: Assertion
testArithmeticExpression = Driver.runBuildEffects $ do
  currentDir <- FileSystem.getCurrentDirectory
  let buildDir = currentDir </> ".." </> "_build" </> "libs"
  FileSystem.createDirectoryIfMissing True buildDir
  Driver.emitLua buildDir "../stdlib/Prelude.bor"
  Driver.emitLua buildDir "./test/run-test/boreal/arithmetic-expression.bor"
  (_, result) <- readProcessStdout $ shell $ "lua -e 'print(dofile(\"" <> buildDir <> "/Mod.lua\").main())'"
  liftIO $
    assertEqual
      "Expected result"
      "43"
      (BSL.dropWhileEnd isSpace result)
