module BorealTest.ParserTest where

import Test.Tasty.HUnit
import Test.Tasty

import Boreal.Frontend.Lexer (lexText)
import Boreal.Frontend.Parser
import Utils

spec :: TestTree
spec = testGroup "Parser"
  [ testCase "Parse an expression" testParseExpression
  , testCase "Restitute an expression" testRestituteExpression
  ]

testParseExpression :: Assertion
testParseExpression = do
  let expression = "1 + 2 * 3" 
  parsed <- assertRight $ parseExpression $ lexText expression
  assertEqual 
    "An simple expression can be parsed"
    (BorealAtom "c")
    parsed
    
testRestituteExpression :: Assertion
testRestituteExpression = do
  let expression = "1 + 2 * 3" 
  parsed <- assertRight $ parseExpression $ lexText expression
  assertEqual 
    "An simple expression can be parsed"
    (restitute parsed)
    expression
