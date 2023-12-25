{-# LANGUAGE OverloadedLists #-}

module BorealTest.ParserTest where

import Data.ByteString qualified as BS
import Test.Tasty
import Test.Tasty.HUnit

import Boreal.Frontend.Syntax
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.Frontend.Types

spec :: TestTree
spec =
  testGroup
    "Parser"
    [testCase "Test example.bor" testParser]

testParser :: Assertion
testParser = do
  input <- BS.readFile "./tree-sitter/example.bor"
  result <- BS.useAsCStringLen input $ \(str, len) -> do
    runParser input (TreeSitter.parse str len)
  assertEqual
    "Expected AST from example.bor"
    ( BorealNode
        "module"
        [ BorealNode "module-name" [BorealIdent "Expressions"]
        , BorealNode
            "top-level-declarations"
            [ BorealNode
                "expr"
                [ BorealNode "arguments" [BorealIdent "x"]
                , BorealNode
                    "body"
                    [ BorealNode
                        "+"
                        [ BorealNode
                            "*"
                            [ BorealIdent "x"
                            , BorealIdent "2"
                            ]
                        , BorealIdent "3"
                        ]
                    ]
                ]
            ]
        ]
    )
    result
