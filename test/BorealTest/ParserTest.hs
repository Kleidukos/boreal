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
    , testCase "Summ parsing" testSumParser
    , testCase "Record parsing" testRecordParser
    ]

testFunctionDefinitionParser :: Assertion
testFunctionDefinitionParser = do
  input <- BS.readFile "./examples/function-definition.bor"
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
  input <- BS.readFile "./examples/let-in.bor"
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
  input <- BS.readFile "./examples/case-expression.bor"
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
  input <- BS.readFile "./examples/parentheses.bor"
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

testSumParser :: Assertion
testSumParser = do
  input <- BS.readFile "./examples/datatype-declaration.bor"
  result <- TreeSitter.parse input
  assertEqual
    ""
    ( BorealNode
        "source"
        [ BorealNode "module_declaration" [BorealAtom "module", BorealIdent "Expressions", BorealAtom "where"]
        , BorealNode
            "top_level_declarations"
            [ BorealNode
                "sumtype_declaration"
                [ BorealIdent "Optimisation"
                , BorealNode "constructors" [BorealIdent "O1", BorealIdent "O2"]
                ]
            ]
        ]
    )
    result

testRecordParser :: Assertion
testRecordParser = do
  input <- BS.readFile "./examples/record-declaration.bor"
  result <- TreeSitter.parse input
  assertEqual
    ""
    ( BorealNode
        "source"
        [ BorealNode "module_declaration" [BorealAtom "module", BorealIdent "Record", BorealAtom "where"]
        , BorealNode
            "top_level_declarations"
            [ BorealNode
                "record_declaration"
                [ BorealIdent "Point"
                , BorealNode
                    "members"
                    [ BorealNode "record_member" [BorealIdent "x", BorealIdent ":", BorealIdent "Int"]
                    , BorealIdent ","
                    , BorealNode "record_member" [BorealIdent "y", BorealIdent ":", BorealIdent "Int"]
                    ]
                ]
            ]
        ]
    )
    result
