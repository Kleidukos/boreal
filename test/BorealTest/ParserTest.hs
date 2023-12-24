{-# LANGUAGE OverloadedLists #-}

module BorealTest.ParserTest where

import Data.Text qualified as Text
import Data.Text.Display
import Test.Tasty
import Test.Tasty.HUnit

import Boreal.Frontend.TreeSitter qualified as TreeSitter

spec :: TestTree
spec =
  testGroup
    "Parser"
    [testCase "Parser Test" testParser]

testParser :: Assertion
testParser = do
  TreeSitter.main
