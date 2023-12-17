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
    [ testCase "Parse an expression" testParseExpression
    , testCase "Restitute an expression" testRestituteExpression
    ]

testParseExpression :: Assertion
testParseExpression = do
  let expression = "1 + 2 * 3"
  let parsed = runParser expression (parseExpression Nothing 0)
  assertEqual
    "An simple expression can be parsed"
    ( BorealNode
        (Name "+")
        [ BorealIdent (Name "1") []
        , BorealNode
            (Name "*")
            [ BorealIdent
                (Name "2")
                [Whitespace]
            , BorealIdent
                (Name "3")
                [Whitespace]
            ]
        ]
    )
    parsed

testRestituteExpression :: Assertion
testRestituteExpression = do
  let expression = "1 + 2 * 3"
  let parsed = runParser expression (parseExpression Nothing 0)
  assertEqual
    "An simple expression can be parsed"
    expression
    (display parsed)
