module Main (main) where

import Test.Tasty (TestTree, defaultMain, testGroup)

import BorealTest.ParserTest qualified as ParserTest

main :: IO ()
main = defaultMain . testGroup "Boréal Tests" $ specs

specs :: [TestTree]
specs =
  [ ParserTest.spec
  ]
