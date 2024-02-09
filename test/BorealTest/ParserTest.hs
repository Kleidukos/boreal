{-# LANGUAGE OverloadedLists #-}

module BorealTest.ParserTest where

import Data.ByteString qualified as BS
import Test.Tasty
import Test.Tasty.HUnit

import Boreal.Frontend.Syntax
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Utils

spec :: TestTree
spec =
  testGroup
    "Parser"
    [ testCase "Test function definition parser" testFunctionDefinitionParser
    , testCase "Test let-in bindings parser" testLetInBindingsParser
    , testCase "Test case expressions parser" testCaseExpressionParser
    , testCase "Parentheses" testParentheses
    ]

testFunctionDefinitionParser :: Assertion
testFunctionDefinitionParser = do
  input <- BS.readFile "./tree-sitter-boreal/function-definition.bor"
  result <- TreeSitter.parse input
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
  result <- TreeSitter.parse input
  assertEqualExpr
    ( BorealNode
        "source"
        [ BorealNode "module_declaration" [BorealAtom "module", BorealIdent "LetIn", BorealAtom "where"]
        , BorealNode
            "top_level_declarations"
            [ BorealNode
                "function_declaration"
                [ BorealIdent "otherfunction"
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
  input <- BS.readFile "./tree-sitter-boreal/case-expression.bor"
  result <- TreeSitter.parse input
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
                        [ BorealIdent "x"
                        , BorealNode "alternative" [BorealIdent "True", BorealIdent "False"]
                        , BorealNode "alternative" [BorealIdent "False", BorealIdent "True"]
                        ]
                    ]
                ]
            ]
        ]
    )
    result

testParentheses :: Assertion
testParentheses = do
  input <- BS.readFile "./tree-sitter-boreal/parentheses.bor"
  result <- TreeSitter.parse input
  assertEqual
    ""
    ( BorealNode
        "source"
        [ BorealNode "module_declaration" [BorealAtom "module", BorealIdent "Module", BorealAtom "where"]
        , BorealNode
            "top_level_declarations"
            [ BorealNode
                "function_declaration"
                [ BorealIdent "main1"
                , BorealNode "arguments" []
                , BorealAtom "="
                , BorealNode
                    "function_body"
                    [ BorealNode
                        "simple_expression"
                        [ BorealNode
                            "-"
                            [ BorealNode "simple_expression" [BorealAtom "1"]
                            , BorealNode
                                "simple_expression"
                                [ BorealAtom "("
                                , BorealNode "simple_expression" [BorealNode "+" [BorealNode "simple_expression" [BorealAtom "2"], BorealNode "simple_expression" [BorealAtom "3"]]]
                                , BorealAtom ")"
                                ]
                            ]
                        ]
                    ]
                ]
            , BorealNode
                "function_declaration"
                [ BorealIdent "main2"
                , BorealNode "arguments" []
                , BorealAtom "="
                , BorealNode
                    "function_body"
                    [ BorealNode
                        "simple_expression"
                        [ BorealNode
                            "+"
                            [ BorealNode
                                "simple_expression"
                                [BorealNode "-" [BorealNode "simple_expression" [BorealAtom "1"], BorealNode "simple_expression" [BorealAtom "2"]]]
                            , BorealNode "simple_expression" [BorealAtom "3"]
                            ]
                        ]
                    ]
                ]
            ]
        ]
    )
    result
