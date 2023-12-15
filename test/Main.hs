module Main (main) where

import Test.Tasty (TestTree, defaultMain, testGroup)

import BorealTest.LexerTest qualified as LexerTest
import BorealTest.ParserTest qualified as ParserTest

main :: IO ()
main = defaultMain . testGroup "Boréal Tests" $ specs

specs :: [TestTree]
specs =
  [ LexerTest.spec
  , ParserTest.spec
  ]
