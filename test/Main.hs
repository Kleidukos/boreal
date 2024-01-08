module Main (main) where

import Test.Tasty (TestTree, defaultMain, testGroup)

import BorealTest.ANFTest qualified as ANFTest
import BorealTest.ASMTest qualified as ASMTest
import BorealTest.ParserTest qualified as ParserTest
import BorealTest.RawCoreTest qualified as RawCoreTest

main :: IO ()
main = defaultMain . testGroup "Boréal Tests" $ specs

specs :: [TestTree]
specs =
  [ ParserTest.spec
  , RawCoreTest.spec
  , ANFTest.spec
  , ASMTest.spec
  ]
