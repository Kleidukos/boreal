module BorealTest.ParserTest where

import Test.Tasty.HUnit
import Test.Tasty

import Boreal.Frontend.Parser
import Boreal.Frontend.Parser.Types

spec :: TestTree
spec = testGroup "Parser"
  [ testCase "Parse an expression" testParseExpression
  , testCase "Restitute an expression" testRestituteExpression
  ]

testParseExpression :: Assertion
testParseExpression = do
  let expression = "1 + 2 * 3" 
  let parsed = runParser expression (parseExpression Nothing 0) 
  assertEqual 
    "An simple expression can be parsed"
    (BorealAtom "c")
    parsed
    
testRestituteExpression :: Assertion
testRestituteExpression = do
  let expression = "1 + 2 * 3" 
  let parsed = runParser expression (parseExpression Nothing 0) 
  assertEqual 
    "An simple expression can be parsed"
    expression
    (restitute parsed)
