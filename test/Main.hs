module Main (main) where

import Test.Tasty (TestTree, defaultMain, testGroup)

import BorealTest.ANFTest qualified as ANFTest
import BorealTest.ParserTest qualified as ParserTest
import BorealTest.RawCoreTest qualified as RawCoreTest
import BorealTest.UXNTest qualified as UXNTest

main :: IO ()
main = defaultMain . testGroup "Boréal Tests" $ specs

specs :: [TestTree]
specs =
  [ ParserTest.spec
  , RawCoreTest.spec
  , ANFTest.spec
  , UXNTest.spec
  ]
