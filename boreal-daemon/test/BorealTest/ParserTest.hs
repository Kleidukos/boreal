{-# LANGUAGE OverloadedLists #-}

module BorealTest.ParserTest where

import Data.ByteString qualified as BS
import Data.ByteString.Lazy (LazyByteString)
import Data.Text.Lazy.Encoding qualified as Text
import Test.Tasty
import Test.Tasty.Golden
import Text.Pretty.Simple

import Boreal.Frontend.TreeSitter qualified as TreeSitter

diffCmd :: String -> String -> [String]
diffCmd ref new = ["diff", "-u", ref, new]

spec :: TestTree
spec =
  testGroup
    "Parser Golden Tests"
    [ goldenVsStringDiff
        "Function definition"
        diffCmd
        "../test/golden/cst/function-definition.hs"
        testFunctionDefinitionParser
    , goldenVsStringDiff
        "Case expression"
        diffCmd
        "../test/golden/cst/case-expression.hs"
        testCaseExpressionParser
    , goldenVsStringDiff
        "Let binding"
        diffCmd
        "../test/golden/cst/let-binding.hs"
        testLetInBindingsParser
    , goldenVsStringDiff
        "Parenthesised expressions"
        diffCmd
        "../test/golden/cst/parentheses.hs"
        testParentheses
    , goldenVsStringDiff
        "Sum type declaration"
        diffCmd
        "../test/golden/cst/sum-type.hs"
        testSumParser
    , goldenVsStringDiff
        "Record type declaration"
        diffCmd
        "../test/golden/cst/record-type.hs"
        testRecordParser
    ]

testFunctionDefinitionParser :: IO LazyByteString
testFunctionDefinitionParser = do
  input <- BS.readFile "../examples/function-definition.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result

testCaseExpressionParser :: IO LazyByteString
testCaseExpressionParser = do
  input <- BS.readFile "../examples/case-expression.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result

testLetInBindingsParser :: IO LazyByteString
testLetInBindingsParser = do
  input <- BS.readFile "../examples/let-in.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result

testParentheses :: IO LazyByteString
testParentheses = do
  input <- BS.readFile "../examples/parentheses.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result

testSumParser :: IO LazyByteString
testSumParser = do
  input <- BS.readFile "../examples/datatype-declaration.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result

testRecordParser :: IO LazyByteString
testRecordParser = do
  input <- BS.readFile "../examples/record-declaration.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result
