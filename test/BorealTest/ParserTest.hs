{-# LANGUAGE OverloadedLists #-}

module BorealTest.ParserTest where

import Data.ByteString qualified as BS
import Test.Tasty
import Test.Tasty.HUnit

import Boreal.Frontend.Syntax
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.Frontend.Types
import Utils

spec :: TestTree
spec =
  testGroup
    "Parser"
    [ testCase "Test function definition parser" testFunctionDefinitionParser
    , testCase "Test let-in bindings parser" testLetInBindingsParser
    , testCase "Test case expressions parser" testCaseExpressionParser
    ]

testFunctionDefinitionParser :: Assertion
testFunctionDefinitionParser = do
  input <- BS.readFile "./tree-sitter-boreal/function-definition.bor"
  result <- BS.useAsCStringLen input $ \(str, len) -> do
    runParser input (TreeSitter.parse str len)
  assertEqualExpr
    ( BorealNode
        "source"
        [ BorealNode "module_declaration" [BorealAtom "module", BorealIdent "Expressions", BorealAtom "where"]
        , BorealNode
            "top_level_declarations"
            [ BorealNode
                "function_declaration"
                [ BorealIdent "expr"
                , BorealNode "arguments" [BorealIdent "x"]
                , BorealAtom "="
                , BorealNode
                    "function_body"
                    [ BorealNode
                        "simple_expression"
                        [ BorealNode
                            "+"
                            [ BorealNode
                                "simple_expression"
                                [ BorealNode
                                    "*"
                                    [ BorealNode "simple_expression" [BorealIdent "x"]
                                    , BorealNode "simple_expression" [BorealAtom "2"]
                                    ]
                                ]
                            , BorealNode "simple_expression" [BorealAtom "3"]
                            ]
                        ]
                    ]
                ]
            ]
        ]
    )
    result

testLetInBindingsParser :: Assertion
testLetInBindingsParser = do
  input <- BS.readFile "./tree-sitter-boreal/let-in.bor"
  result <- BS.useAsCStringLen input $ \(str, len) -> do
    runParser input (TreeSitter.parse str len)
  assertEqualExpr
    ( BorealNode
        "source"
        [ BorealNode "module_declaration" [BorealAtom "module", BorealIdent "LetIn", BorealAtom "where"]
        , BorealNode
            "top_level_declarations"
            [ BorealNode
                "function_declaration"
                [ BorealIdent "function"
                , BorealNode "arguments" []
                , BorealAtom "="
                , BorealNode
                    "function_body"
                    [ BorealNode
                        "let_binding"
                        [ BorealNode
                            "x"
                            [ BorealNode "bound_expression" [BorealNode "simple_expression" [BorealAtom "3"]]
                            , BorealNode
                                "body"
                                [ BorealNode
                                    "simple_expression"
                                    [ BorealNode
                                        "+"
                                        [ BorealNode "simple_expression" [BorealIdent "x"]
                                        , BorealNode "simple_expression" [BorealAtom "1"]
                                        ]
                                    ]
                                ]
                            ]
                        ]
                    ]
                ]
            ]
        ]
    )
    result

testCaseExpressionParser :: Assertion
testCaseExpressionParser = do
  input <- BS.readFile "./tree-sitter-boreal/case_expression.bor"
  result <- BS.useAsCStringLen input $ \(str, len) -> do
    runParser input (TreeSitter.parse str len)
  assertEqualExpr
    ( BorealNode
        "source"
        [ BorealNode "module_declaration" [BorealAtom "module", BorealIdent "Expressions", BorealAtom "where"]
        , BorealNode
            "top_level_declarations"
            [ BorealNode
                "function_declaration"
                [ BorealIdent "expr"
                , BorealNode "arguments" [BorealIdent "x"]
                , BorealAtom "="
                , BorealNode
                    "function_body"
                    [ BorealNode
                        "case_expression"
                        [ BorealNode "alternative" [BorealIdent "True", BorealIdent "False"]
                        , BorealNode "alternative" [BorealIdent "False", BorealIdent "True"]
                        ]
                    ]
                ]
            ]
        ]
    )
    result
