{-# LANGUAGE OverloadedLists #-}

module BorealTest.ParserTest where

import Data.ByteString qualified as BS
import Data.ByteString.Lazy (LazyByteString)
import Data.Text.Lazy.Encoding qualified as Text
import Test.Tasty
import Test.Tasty.Golden
import Text.Pretty.Simple

import Boreal.Frontend.TreeSitter qualified as TreeSitter
import System.FilePath ((</>))

diffCmd :: String -> String -> [String]
diffCmd ref new = ["diff", "-u", ref, new]

spec :: FilePath -> TestTree
spec topDir =
  testGroup
    "Parser Golden Tests"
    [ goldenVsStringDiff
        "Function definition"
        diffCmd
        "test/golden/cst/function-definition.hs"
        (testFunctionDefinitionParser topDir)
    , goldenVsStringDiff
        "Case expression"
        diffCmd
        "test/golden/cst/case-expression.hs"
        (testCaseExpressionParser topDir)
    , goldenVsStringDiff
        "Let binding"
        diffCmd
        "test/golden/cst/let-binding.hs"
        (testLetInBindingsParser topDir)
    , goldenVsStringDiff
        "Parenthesised expressions"
        diffCmd
        "test/golden/cst/parentheses.hs"
        (testParentheses topDir)
    , goldenVsStringDiff
        "Sum type declaration"
        diffCmd
        "test/golden/cst/sum-type.hs"
        (testSumParser topDir)
    , goldenVsStringDiff
        "Record type declaration"
        diffCmd
        "test/golden/cst/record-type.hs"
        (testRecordParser topDir)
    , goldenVsStringDiff
        "Import statement declaration"
        diffCmd
        "test/golden/cst/import-statement.hs"
        (testImportParser topDir)
    ]

testFunctionDefinitionParser :: FilePath -> IO LazyByteString
testFunctionDefinitionParser topDir = do
  input <- BS.readFile $ topDir </> "function-definition.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result

testCaseExpressionParser :: FilePath -> IO LazyByteString
testCaseExpressionParser topDir = do
  input <- BS.readFile $ topDir </> "case-expression.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result

testLetInBindingsParser :: FilePath -> IO LazyByteString
testLetInBindingsParser topDir = do
  input <- BS.readFile $ topDir </> "let-in.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result

testParentheses :: FilePath -> IO LazyByteString
testParentheses topDir = do
  input <- BS.readFile $ topDir </> "parentheses.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result

testSumParser :: FilePath -> IO LazyByteString
testSumParser topDir = do
  input <- BS.readFile $ topDir </> "datatype-declaration.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result

testRecordParser :: FilePath -> IO LazyByteString
testRecordParser topDir = do
  input <- BS.readFile $ topDir </> "record-declaration.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result

testImportParser :: FilePath -> IO LazyByteString
testImportParser topDir = do
  input <- BS.readFile $ topDir </> "import-statement.bor"
  result <- TreeSitter.parse input
  pure . Text.encodeUtf8 $ pShowNoColor result
