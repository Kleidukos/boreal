{-# LANGUAGE OverloadedLists #-}

module BorealTest.ParserTest where

import Data.Text.Display
import Test.Tasty
import Test.Tasty.HUnit

import Boreal.Frontend.Lexer
import Boreal.Frontend.Parser
import Boreal.Frontend.Parser.Types

spec :: TestTree
spec =
  testGroup
    "Parser"
    [ testCase "Parse a numerical expression" testParseNumericalExpression
    , testCase "Parse function application operator" testParseFunctionApplication
    , testCase "Parse mix of numerical operators and function aplication" testParseMixNumericalAndFunApplication
    , testCase "Parse unary operator" testParseUnaryOperator
    , testCase "Parse unary operator and function application" testParseUnaryOperatorAndFunctionAplication
    , testGroup
        "Restitution"
        [ testCase "Restitute an ident" testRestituteIdent
        , testCase "Restitute a node" testRestituteNode
        ]
    ]

testParseNumericalExpression :: Assertion
testParseNumericalExpression = do
  let expression = "1 + 2 * 3"
  let parsed = runParser expression (parseExpression Nothing 0)
  assertEqual
    "A simple expression can be parsed"
    ( BorealNode
        (Name "+")
        [Whitespace]
        [ BorealIdent (Name "1") []
        , BorealNode
            (Name "*")
            [Whitespace]
            [ BorealIdent (Name "2") [Whitespace]
            , BorealIdent (Name "3") [Whitespace]
            ]
        ]
    )
    parsed

testParseFunctionApplication :: Assertion
testParseFunctionApplication = do
  let expression = "f ⋅ g ⋅ h"
  let parsed = runParser expression (parseExpression Nothing 0)
  assertEqual
    "A simple expression can be parsed"
    ( BorealNode
        (Name "⋅")
        []
        [ BorealIdent (Name "f") []
        , BorealNode
            (Name "⋅")
            []
            [ BorealIdent (Name "g") [Whitespace]
            , BorealIdent (Name "h") [Whitespace]
            ]
        ]
    )
    parsed

testParseMixNumericalAndFunApplication :: Assertion
testParseMixNumericalAndFunApplication = do
  let expression = " 1 + 2 + f ⋅ g ⋅ h * 3 *   4"
  let parsed = runParser expression (parseExpression Nothing 0)
  assertEqual
    "A simple expression can be parsed"
    ( BorealNode
        (Name "+")
        []
        [ BorealNode
            (Name "+")
            []
            [ BorealIdent (Name "1") [Whitespace]
            , BorealIdent (Name "2") [Whitespace]
            ]
        , BorealNode
            (Name "*")
            []
            [ BorealNode
                (Name "*")
                []
                [ BorealNode
                    (Name "⋅")
                    []
                    [ BorealIdent (Name "f") [Whitespace]
                    , BorealNode (Name "⋅") [] [BorealIdent (Name "g") [Whitespace], BorealIdent (Name "h") [Whitespace]]
                    ]
                , BorealIdent (Name "3") [Whitespace]
                ]
            , BorealIdent (Name "4") [Whitespace, Whitespace, Whitespace]
            ]
        ]
    )
    parsed

testParseUnaryOperator :: Assertion
testParseUnaryOperator = do
  let expression = "--1 * 2"
  let parsed = runParser expression (parseExpression Nothing 0)
  assertEqual
    "A simple expression can be parsed"
    ( BorealNode
        (Name "-")
        []
        [ BorealNode
            (Name "-")
            []
            [ BorealIdent (Name "1") []
            ]
        ]
    )
    parsed

testParseUnaryOperatorAndFunctionAplication :: Assertion
testParseUnaryOperatorAndFunctionAplication = do
  let expression = "--f ⋅ g"
  let parsed = runParser expression (parseExpression Nothing 0)
  assertEqual
    "A simple expression can be parsed"
    ( BorealNode
        (Name "-")
        []
        [ BorealNode
            (Name "-")
            []
            [ BorealNode
                (Name "⋅")
                []
                [ BorealIdent (Name "f") []
                , BorealIdent (Name "g") [Whitespace]
                ]
            ]
        ]
    )
    parsed

testRestituteIdent :: Assertion
testRestituteIdent = do
  let expression = "1"
  let parsed = runParser expression (parseExpression Nothing 0)
  assertEqual
    "An ident can be restituted"
    expression
    (display parsed)

testRestituteNode :: Assertion
testRestituteNode = do
  let expression = "1 + 2"
  let parsed = runParser expression (parseExpression Nothing 0)
  assertEqual
    "A node can be restituted"
    expression
    (display parsed)
