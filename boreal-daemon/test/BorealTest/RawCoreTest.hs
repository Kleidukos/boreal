{-# LANGUAGE OverloadedLists #-}

module BorealTest.RawCoreTest where

import Data.ByteString qualified as BS
import Test.Tasty
import Test.Tasty.HUnit
import Text.Pretty.Simple (pPrint)
import Utils

import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.IR.RawCore (CaseAlternative (..), Pattern (..), RawCore (..))
import Boreal.IR.RawCore qualified as RawCore
import Boreal.IR.Types

spec :: TestTree
spec =
  testGroup
    "RawCore"
    [ testCase "Function definition syntax to RawCore" testFunctionDefinition
    , testCase "Let-binding syntax to RawCore" testLetBinding
    , testCase "Case expression syntax to RawCore" testCaseExpression
    , testCase "Sum type declaration" testDatatypeDeclaration
    , testCase "Module definition with dots" testModuleDefinitionWithDots
    , testCase "Parenthesised expression" testParenthesisedExpression
    , testCase "Record declaration" testRecordDeclaration
    ]

testFunctionDefinition :: Assertion
testFunctionDefinition = do
  input <- BS.readFile "../examples/function-definition.bor"
  parsed <- TreeSitter.parse input
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
    result.topLevelFunctions

testLetBinding :: Assertion
testLetBinding = do
  input <- BS.readFile "../examples/let-in.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore $ RawCore.transformModule parsed

  assertEqual
    "Let binding is transformed from Syntax to RawCore"
    [ Fun
        "otherfunction"
        []
        ( Let
            "x"
            (Literal 3)
            ( Let "y" (Call "+" [Var "x", Literal 1]) (Call "*" [Var "y", Literal 3])
            )
        )
    ]
    result.topLevelFunctions

testCaseExpression :: Assertion
testCaseExpression = do
  input <- BS.readFile "../examples/case-expression.bor"
  parsed <- TreeSitter.parse input
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
    result.topLevelFunctions

testDatatypeDeclaration :: Assertion
testDatatypeDeclaration = do
  input <- BS.readFile "../examples/datatype-declaration.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore $ RawCore.transformModule parsed

  assertEqualExpr
    [SumTypeDeclaration "Optimisation" ["O1", "O2"]]
    result.typeDeclarations

testModuleDefinitionWithDots :: Assertion
testModuleDefinitionWithDots = do
  input <- BS.readFile "../stdlib/Prelude.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore $ RawCore.transformModule parsed

  assertEqualExpr
    "Stdlib.Prelude"
    result.moduleName

testParenthesisedExpression :: Assertion
testParenthesisedExpression = do
  input <- BS.readFile "../examples/parentheses.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore $ RawCore.transformModule parsed

  assertEqual
    "Function definition is transformed from Syntax to RawCore"
    [ Fun
        "main1"
        []
        (Call "-" [Literal 1, Call "+" [Literal 2, Literal 3]])
    , Fun
        "main2"
        []
        (Call "+" [Call "-" [Literal 1, Literal 2], Literal 3])
    ]
    result.topLevelFunctions

testRecordDeclaration :: Assertion
testRecordDeclaration = do
  input <- BS.readFile "../examples/record-declaration.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore $ RawCore.transformModule parsed

  assertEqual
    "Record declaration"
    [ RecordDeclaration
        "Point"
        [ RecordMember{memberName = "x", memberType = "Int"}
        , RecordMember{memberName = "y", memberType = "Int"}
        ]
    ]
    result.typeDeclarations
