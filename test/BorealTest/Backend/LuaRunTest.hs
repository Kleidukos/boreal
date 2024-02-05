module BorealTest.Backend.LuaRunTest where

import Data.ByteString qualified as BS
import Data.ByteString.Lazy.Char8 qualified as BSL
import Data.Char (isSpace)
import Data.Text.IO qualified as Text
import System.Process.Typed
import Test.Tasty
import Test.Tasty.HUnit

import Boreal.Backend.Lua qualified as Lua
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.IR.ANFCore qualified as ANFCore
import Boreal.IR.RawCore qualified as RawCore
import Boreal.IR.Types
import Boreal.ScopeEnvironment
import Driver qualified
import Driver.BuildFlags
import Utils

spec :: TestTree
spec =
  testGroup
    "Lua run"
    [ testCase "Arithmetic expression returns correct result" testArithmeticExpression
    ]

testArithmeticExpression :: Assertion
testArithmeticExpression = do
  Driver.runBuildEffects $ do
    Driver.buildModule (BuildFlags O1) "stdlib/Prelude.bor" False
    Driver.buildModule (BuildFlags O1) "./test/run-test/boreal/arithmetic-expression.bor" False
  (_, result) <- readProcessStdout "lua -e 'print(require(\"build_/libs/Mod\").main())'"
  assertEqual
    "Expected result"
    "43"
    (BSL.dropWhileEnd isSpace result)
