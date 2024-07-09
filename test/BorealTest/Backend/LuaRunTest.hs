module BorealTest.Backend.LuaRunTest where

import Control.Monad.IO.Class
import Data.ByteString.Lazy.Char8 qualified as BSL
import Data.Char (isSpace)
import Effectful.FileSystem qualified as FileSystem
import System.FilePath ((</>))
import System.Process.Typed
import Test.Tasty
import Test.Tasty.HUnit

import Driver qualified

spec :: TestTree
spec =
  testGroup
    "Lua run"
    [ testCase "Arithmetic expression returns correct result" testArithmeticExpression
    ]

testArithmeticExpression :: Assertion
testArithmeticExpression = do
  Driver.runBuildEffects $ do
    currentDir <- FileSystem.getCurrentDirectory
    let buildDir = currentDir </> "_build" </> "libs"
    liftIO $ Driver.emitLua buildDir "stdlib/Prelude.bor"
    liftIO $ Driver.emitLua buildDir "./test/run-test/boreal/arithmetic-expression.bor"
  (_, result) <- readProcessStdout "lua -e 'print(require(\"_build/libs/Mod\").main())'"
  assertEqual
    "Expected result"
    "43"
    (BSL.dropWhileEnd isSpace result)
