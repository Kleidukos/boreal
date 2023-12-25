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
    [ testCase "Test function definition parser" testFunctionDefinitionParser
    , testCase "Test let-in bindings parser" testLetInBindingsParser
    ]

testFunctionDefinitionParser :: Assertion
testFunctionDefinitionParser = do
  input <- BS.readFile "./tree-sitter-boreal/function-definition.bor"
  result <- BS.useAsCStringLen input $ \(str, len) -> do
    runParser input (TreeSitter.parse str len)
  assertEqual
    "Expected AST from example.bor"
    ( BorealNode
        "source"
        [ BorealNode
            "module_declaration"
            [ BorealAtom "module"
            , BorealIdent "Expressions"
            , BorealAtom "where"
            ]
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

testLetInBindingsParser :: Assertion
testLetInBindingsParser = do
  input <- BS.readFile "./tree-sitter-boreal/let-in.bor"
  result <- BS.useAsCStringLen input $ \(str, len) -> do
    runParser input (TreeSitter.parse str len)
  assertEqual
    "Expected AST from example.bor"
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
                        [ BorealAtom "let"
                        , BorealIdent "x"
                        , BorealAtom "="
                        , BorealIdent "3"
                        , BorealAtom "in"
                        , BorealNode "+" [BorealIdent "x", BorealIdent "1"]
                        ]
                    ]
                ]
            ]
        ]
    )
    result
