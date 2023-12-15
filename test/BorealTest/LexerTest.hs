{-# LANGUAGE OverloadedLists #-}
module BorealTest.LexerTest where

import Test.Tasty.HUnit
import Test.Tasty
import Data.Vector qualified as Vector

import Boreal.Frontend.Lexer 

spec :: TestTree
spec = testGroup "Lexer"
  [ testCase "Lexing an expression" testLexExpression
  ]

testLexExpression :: Assertion
testLexExpression = do
  let s1 = lexText "1 + 2 * 3" 
  assertEqual 
    "Expected lexing" 
    (Stream Vector.empty [Atom '3',Whitespace,Op '*',Whitespace,Atom '2',Whitespace,Op '+',Whitespace,Atom '1'])
    s1
