{-# LANGUAGE OverloadedLists #-}

module BorealTest.RawCoreTest where

import Test.Tasty
import Test.Tasty.HUnit

import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.Frontend.Types (runParser)
import Boreal.IR.RawCore (CaseAlternative (..), Pattern (..), RawCore (..))
import Boreal.IR.RawCore qualified as RawCore
import Boreal.IR.Types
import Data.ByteString qualified as BS
import Utils

spec :: TestTree
spec =
  testGroup
    "RawCore"
    [ testCase "function definition syntax to RawCore" testFunctionDefinitionToRawCore
    , testCase "let-binding syntax to RawCore" testLetBindingToRawCore
    , testCase "case expression syntax to RawCore" testCaseExpressionToRawCore
    ]

testFunctionDefinitionToRawCore :: Assertion
testFunctionDefinitionToRawCore = do
  input <- BS.readFile "./tree-sitter-boreal/function-definition.bor"
  parsed <- BS.useAsCStringLen input $ \(str, len) -> runParser input (TreeSitter.parse str len)
  result <- RawCore.runRawCore $ RawCore.transformModule parsed

  assertEqual
    "Function definition is transformed from Syntax to RawCore"
    [ Fun
        "expr"
        ["x"]
        ( Call
            "+"
            [ Call "*" [Var "x", Literal 2]
            , Literal 3
            ]
        )
    ]
    result.topLevelDeclarations

testLetBindingToRawCore :: Assertion
testLetBindingToRawCore = do
  input <- BS.readFile "./tree-sitter-boreal/let-in.bor"
  parsed <- BS.useAsCStringLen input $ \(str, len) -> runParser input (TreeSitter.parse str len)
  result <- RawCore.runRawCore $ RawCore.transformModule parsed

  assertEqual
    "Let binding is transformed from Syntax to RawCore"
    [ Fun
        "function"
        []
        ( Let
            "x"
            (Literal 3)
            (Call "+" [Var "x", Literal 1])
        )
    ]
    result.topLevelDeclarations

testCaseExpressionToRawCore :: Assertion
testCaseExpressionToRawCore = do
  input <- BS.readFile "./tree-sitter-boreal/case-expression.bor"
  parsed <- BS.useAsCStringLen input $ \(str, len) -> runParser input (TreeSitter.parse str len)
  result <- RawCore.runRawCore $ RawCore.transformModule parsed

  assertEqualExpr
    [ Fun
        "expr"
        ["x"]
        ( Case
            (Var "x")
            [ CaseAlternative (Constructor "True") (Var "False")
            , CaseAlternative (Constructor "False") (Var "True")
            ]
        )
    ]
    result.topLevelDeclarations
