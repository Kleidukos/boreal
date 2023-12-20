{-# LANGUAGE OverloadedLists #-}

module BorealTest.ParserTest where

import Data.Text qualified as Text
import Data.Text.Display
import Test.Tasty
import Test.Tasty.HUnit

import Boreal.Frontend.Lexer
import Boreal.Frontend.Parser
import Boreal.Frontend.Parser.Types
import Utils

spec :: TestTree
spec =
  testGroup
    "Parser"
    [ testCase "Parse a numerical expression" testParseNumericalExpression
    , testCase "Parse function application operator" testParseFunctionApplication
    , testCase "Parse mixes of numerical operators and function aplication" testParseMixNumericalAndFunApplication
    , testGroup
        "Restitution"
        [ testCase "Restitute an ident" testRestituteIdent
        , testCase "Restitute a node" testRestituteNode
        ]
    ]

testParseNumericalExpression :: Assertion
testParseNumericalExpression = do
  let expression = "1 + 2 * 3"
  parsed <- assertRight $ runParser expression (parseExpression Nothing 0)
  assertEqual
    (Text.unpack $ "Parse " <> expression)
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
  parsed <- assertRight $ runParser expression (parseExpression Nothing 0)
  assertEqual
    (Text.unpack $ "Parse " <> expression)
    ( BorealNode
        (Name "⋅")
        [Whitespace]
        [ BorealIdent (Name "f") []
        , BorealNode
            (Name "⋅")
            [Whitespace]
            [ BorealIdent (Name "g") [Whitespace]
            , BorealIdent (Name "h") [Whitespace]
            ]
        ]
    )
    parsed

testParseMixNumericalAndFunApplication :: Assertion
testParseMixNumericalAndFunApplication = do
  let expression1 = " 1 + 2 +  f"
  parsed1 <- assertRight $ runParser expression1 (parseExpression Nothing 0)
  let expectedAST1 =
        ( BorealNode
            (Name "+")
            [Whitespace]
            [ BorealNode
                (Name "+")
                [Whitespace]
                [ BorealIdent (Name "1") [Whitespace]
                , BorealIdent (Name "2") [Whitespace]
                ]
            , BorealIdent (Name "f") [Whitespace, Whitespace]
            ]
        )

  assertEqual
    (Text.unpack $ "Parse " <> expression1)
    expectedAST1
    parsed1

  assertEqual
    (Text.unpack $ "Restitute " <> expression1)
    expression1
    (display expectedAST1)

  let expression2 = " 1 + 2 + f ⋅ g ⋅ h * 3 *   4"
  parsed2 <- assertRight $ runParser expression2 (parseExpression Nothing 0)
  let expectedAST2 =
        BorealNode
          (Name "+")
          [Whitespace]
          [ BorealNode
              (Name "+")
              [Whitespace]
              [ BorealIdent (Name "1") [Whitespace]
              , BorealIdent (Name "2") [Whitespace]
              ]
          , BorealNode
              (Name "*")
              [Whitespace]
              [ BorealNode
                  (Name "*")
                  [Whitespace]
                  [ BorealNode
                      (Name "⋅")
                      [Whitespace]
                      [ BorealIdent (Name "f") [Whitespace]
                      , BorealNode
                          (Name "⋅")
                          [Whitespace]
                          [ BorealIdent (Name "g") [Whitespace]
                          , BorealIdent (Name "h") [Whitespace]
                          ]
                      ]
                  , BorealIdent (Name "3") [Whitespace]
                  ]
              , BorealIdent (Name "4") [Whitespace, Whitespace, Whitespace]
              ]
          ]

  assertEqual
    (Text.unpack $ "Parse " <> expression2)
    expectedAST2
    parsed2

  assertEqual
    (Text.unpack $ "Restitute " <> expression2)
    expression2
    (display expectedAST2)

testRestituteIdent :: Assertion
testRestituteIdent = do
  let expression = "1"
  parsed <- assertRight $ runParser expression (parseExpression Nothing 0)
  assertEqual
    (Text.unpack $ "Restitute " <> expression)
    expression
    (display parsed)

testRestituteNode :: Assertion
testRestituteNode = do
  let expression = "1 + 2"
  parsed <- assertRight $ runParser expression (parseExpression Nothing 0)
  let expectedAST =
        ( BorealNode
            (Name "+")
            [Whitespace]
            [ BorealIdent (Name "1") []
            , BorealIdent (Name "2") [Whitespace]
            ]
        )
  assertEqual
    (Text.unpack $ "Parsed " <> expression)
    expectedAST
    parsed

  assertEqual
    (Text.unpack $ "Restitute " <> expression)
    expression
    (display expectedAST)
