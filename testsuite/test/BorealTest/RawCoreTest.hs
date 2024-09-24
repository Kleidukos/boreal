{-# LANGUAGE OverloadedLists #-}

module BorealTest.RawCoreTest where

import Data.ByteString qualified as BS
import Data.Vector qualified as Vector
import System.FilePath ((</>))
import Test.Tasty
import Test.Tasty.HUnit
import Utils

import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.IR.RawCore.Renamer qualified as RawCore
import Boreal.IR.RawCore.Types
import Boreal.IR.Types
import Boreal.PrimOps
import Boreal.ScopeEnvironment

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
    , testCase "Import statement" $ testImportStatement topDir
    ]

testFunctionDefinition :: FilePath -> Assertion
testFunctionDefinition topDir = do
  input <- BS.readFile $ topDir </> "function-definition.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore newScopeEnvironment $ RawCore.transformModule parsed

  assertEqual
    "Function definition is transformed from Syntax to RawCore"
    [ Fun
        (Name{moduleOrigin = "Expressions", name = "expr", unique = 2})
        [Name{moduleOrigin = "Expressions", name = "x", unique = 0}]
        ( Call
            (Name{moduleOrigin = "", name = "+", unique = 0})
            [ Call
                (Name{moduleOrigin = "", name = "*", unique = 0})
                [ Var (Name{moduleOrigin = "Expressions", name = "x", unique = 1})
                , Literal 2
                ]
            , Literal 3
            ]
        )
    ]
    result.topLevelFunctions

testLetBinding :: FilePath -> Assertion
testLetBinding topDir = do
  input <- BS.readFile $ topDir </> "let-in.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore newScopeEnvironment $ RawCore.transformModule parsed

  assertEqual
    "Let binding is transformed from Syntax to RawCore"
    [ Fun
        (Name{moduleOrigin = "LetIn", name = "otherfunction", unique = 2})
        []
        ( Let
            (Name{moduleOrigin = "LetIn", name = "x", unique = 0})
            (Literal 3)
            ( Let
                (Name{moduleOrigin = "LetIn", name = "y", unique = 1})
                ( Call
                    (Name{moduleOrigin = "", name = "+", unique = 0})
                    [Var (Name{moduleOrigin = "LetIn", name = "x", unique = 0}), Literal 1]
                )
                ( Call
                    (Name{moduleOrigin = "", name = "*", unique = 0})
                    [Var (Name{moduleOrigin = "LetIn", name = "y", unique = 1}), Literal 3]
                )
            )
        )
    ]
    result.topLevelFunctions

testCaseExpression :: FilePath -> Assertion
testCaseExpression topDir = do
  input <- BS.readFile $ topDir </> "case-expression.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore newScopeEnvironment $ RawCore.transformModule parsed

  assertEqualExpr
    []
    result.topLevelFunctions

testDatatypeDeclaration :: FilePath -> Assertion
testDatatypeDeclaration topDir = do
  input <- BS.readFile $ topDir </> "datatype-declaration.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore newScopeEnvironment $ RawCore.transformModule parsed

  assertEqualExpr
    ( Vector.fromList
        [ SumTypeDeclaration
            Name
              { moduleOrigin = ModuleName "Expressions"
              , name = "Optimisation"
              , unique = 0
              }
            ( Vector.fromList
                [
                  ( Name
                      { moduleOrigin = ModuleName "Expressions"
                      , name = "O1"
                      , unique = 1
                      }
                  , Vector.fromList []
                  )
                ,
                  ( Name
                      { moduleOrigin = ModuleName "Expressions"
                      , name = "O2"
                      , unique = 2
                      }
                  , Vector.fromList []
                  )
                ]
            )
        ]
    )
    result.typeDeclarations

testModuleDefinitionWithDots :: FilePath -> Assertion
testModuleDefinitionWithDots topDir = do
  input <- BS.readFile $ topDir </> ".." </> "stdlib/Prelude.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore newScopeEnvironment $ RawCore.transformModule parsed

  assertEqualExpr
    "Stdlib.Prelude"
    result.moduleName

testParenthesisedExpression :: FilePath -> Assertion
testParenthesisedExpression topDir = do
  input <- BS.readFile $ topDir </> "parentheses.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore newScopeEnvironment $ RawCore.transformModule parsed

  assertEqual
    "Function definition is transformed from Syntax to RawCore"
    [ Fun
        (Name{moduleOrigin = "Module", name = "main1", unique = 0})
        []
        ( Call
            (Name{moduleOrigin = "", name = "-", unique = 0})
            [ Literal 1
            , Call
                (Name{moduleOrigin = "", name = "+", unique = 0})
                [Literal 2, Literal 3]
            ]
        )
    , Fun
        (Name{moduleOrigin = "Module", name = "main2", unique = 1})
        []
        ( Call
            (Name{moduleOrigin = "", name = "+", unique = 0})
            [Call (Name{moduleOrigin = "", name = "-", unique = 0}) [Literal 1, Literal 2], Literal 3]
        )
    ]
    result.topLevelFunctions

testRecordDeclaration :: FilePath -> Assertion
testRecordDeclaration topDir = do
  input <- BS.readFile $ topDir </> "record-declaration.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore newScopeEnvironment $ RawCore.transformModule parsed

  assertEqual
    "Record declaration"
    []
    result.typeDeclarations

testImportStatement :: FilePath -> Assertion
testImportStatement topDir = do
  input <- BS.readFile $ topDir </> "import-statement.bor"
  parsed <- TreeSitter.parse input
  result <- RawCore.runRawCore newScopeEnvironment $ RawCore.transformModule parsed

  assertEqual
    "Import statement does not match"
    [ ImportStatement{importedModule = "Stdlib.Prelude"}
    , ImportStatement{importedModule = "Lol.Haha"}
    ]
    result.imports
