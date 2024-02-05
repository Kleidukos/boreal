module Main (main) where

import Sel
import Test.Tasty (TestTree, defaultMain, testGroup)

import BorealTest.ANFTest qualified as ANFTest
import BorealTest.ASMTest qualified as ASMTest
import BorealTest.LuaTest qualified as LuaTest
import BorealTest.ParserTest qualified as ParserTest
import BorealTest.RawCoreTest qualified as RawCoreTest

main :: IO ()
main = secureMain $ do
  defaultMain . testGroup "Boréal Tests" $ specs

specs :: [TestTree]
specs =
  [ ParserTest.spec
  , RawCoreTest.spec
  , ANFTest.spec
  , ASMTest.spec
  , LuaTest.spec
  ]
