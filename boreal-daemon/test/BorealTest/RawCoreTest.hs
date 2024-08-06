{-# LANGUAGE OverloadedLists #-}

module BorealTest.RawCoreTest where

import Data.ByteString qualified as BS
import Test.Tasty
import Test.Tasty.HUnit
import Utils

import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.IR.RawCore (CaseAlternative (..), Pattern (..), RawCore (..))
import Boreal.IR.RawCore qualified as RawCore
import Boreal.IR.Types
import System.FilePath ((</>))

spec :: FilePath -> TestTree
spec topDir =
  testGroup
    "RawCore"
    [ testCase "Function definition syntax to RawCore" $ testFunctionDefinition topDir
    , testCase "Let-binding syntax to RawCore" $ testLetBinding topDir
    , testCase "Case expression syntax to RawCore" $ testCaseExpression topDir
    , testCase "Sum type declaration" $ testDatatypeDeclaration topDir
    , testCase "Module definition with dots" $ testModuleDefinitionWithDots topDir
    , testCase "Parenthesised expression" $ testParenthesisedExpression topDir
    , testCase "Record declaration" $ testRecordDeclaration topDir
    ]

testFunctionDefinition :: FilePath -> Assertion
testFunctionDefinition topDir = do
  input <- BS.readFile $ topDir </> "function-definition.bor"
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

testLetBinding :: FilePath -> Assertion
testLetBinding topDir = do
  input <- BS.readFile $ topDir </> "let-in.bor"
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

testCaseExpression :: FilePath -> Assertion
testCaseExpression topDir = do
  input <- BS.readFile $ topDir </> "case-expression.bor"
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

testDatatypeDeclaration :: FilePath -> Assertion
testDatatypeDeclaration topDir = do
  input <- BS.readFile $ topDir </> "datatype-declaration.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore $ RawCore.transformModule parsed

  assertEqualExpr
    [SumTypeDeclaration "Optimisation" ["O1", "O2"]]
    result.typeDeclarations

testModuleDefinitionWithDots :: FilePath -> Assertion
testModuleDefinitionWithDots topDir = do
  input <- BS.readFile $ ".." </> "stdlib/Prelude.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore $ RawCore.transformModule parsed

  assertEqualExpr
    "Stdlib.Prelude"
    result.moduleName

testParenthesisedExpression :: FilePath -> Assertion
testParenthesisedExpression topDir = do
  input <- BS.readFile $ topDir </> "parentheses.bor"
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

testRecordDeclaration :: FilePath -> Assertion
testRecordDeclaration topDir = do
  input <- BS.readFile $ topDir </> "record-declaration.bor"
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
