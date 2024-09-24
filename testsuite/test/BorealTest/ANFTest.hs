{-# LANGUAGE OverloadedLists #-}

module BorealTest.ANFTest where

import Data.Vector qualified as Vector
import Test.Tasty
import Test.Tasty.HUnit

import Boreal.IR.ANFCore qualified as ANF
import Boreal.IR.ANFCore.Types (ANFCore (..), ComplexValue (..), TerminalValue (..), Value (..))
import Boreal.IR.RawCore.Types (CaseAlternative (..), Pattern (..), RawCore (..))
import Boreal.IR.Types (Name (..))
import Boreal.PrimOps
import Boreal.PrimTypes
import Boreal.ScopeEnvironment
import Utils

spec :: TestTree
spec =
  testGroup
    "ANFCore"
    [ testCase "Function declaration RawCore to ANFCore" testFunctionDeclarationToANFCore
    , testCase "Let-binding of RawCore terminal value to ANFCore" testLetBindingTerminalValueToANFCore
    , testCase "Case expression to ANFCore" testSimpleCaseExpressionToANFCore
    , testCase "Parenthesised expression in ANF" testParenthesisedExpressionToANFCore
    ]

testFunctionDeclarationToANFCore :: Assertion
testFunctionDeclarationToANFCore = do
  -- original:
  --    x * 2 + 3
  -- expected:
  --    let prim_mul0 = x * 2
  --    in prim_mul0 + 3
  let rawCore =
        Call
          (primAdd.operator)
          [ Call
              (primMul.operator)
              [Var (Name "" "x" 1), Literal 2]
          , Literal 2
          ]
  actual <- ANF.runANFCore newScopeEnvironment rawCore
  assertEqual
    "Transform to ANF: x * 2 + 3"
    ( ALet
        "prim_mul0"
        ( Complex
            (AApp primMul.operator [])
        )
        ( Halt
            (Complex (AApp primAdd.operator []))
        )
    )
    actual

testLetBindingTerminalValueToANFCore :: Assertion
testLetBindingTerminalValueToANFCore = do
  -- original:
  --   function y =
  --     let x = 3 * 2
  --      in x + y
  --
  -- expected:
  --    function y =
  --      let x = 3 * 2
  --      in x + y
  let rawCore =
        Fun
          (Name "" "function" 1)
          [Name "" "y" 2]
          ( Let
              (Name "" "x" 3)
              (Call primMul.operator [])
              (Call primAdd.operator [])
          )

  actual <- ANF.runANFCore newScopeEnvironment rawCore
  assertEqual
    "Transform to ANF: function y = let x = 3 * 2 in x + y"
    ( AFun
        "_function1"
        ["_y2"]
        ( ALet
            "_x3"
            (Complex (AApp (Name{moduleOrigin = "", name = "*", unique = 0}) []))
            ( Halt
                ( Complex
                    ( AApp
                        (Name{moduleOrigin = "", name = "+", unique = 0})
                        []
                    )
                )
            )
        )
    )
    actual

testSimpleCaseExpressionToANFCore :: Assertion
testSimpleCaseExpressionToANFCore = do
  -- original:
  -- expr x =
  --   case x of
  --     | True -> False
  --     | False -> True
  let rawCore =
        Fun
          (Name "" "expr" 1)
          [Name "" "x" 2]
          ( Case
              (Var (Name "" "x" 3))
              []
          )

  actual <- ANF.runANFCore newScopeEnvironment rawCore
  assertEqualExpr
    ( AFun
        "_expr1"
        ["_x2"]
        ( ACase
            (Terminal $ AVar "_x3")
            []
        )
    )
    actual

testParenthesisedExpressionToANFCore :: Assertion
testParenthesisedExpressionToANFCore = do
  let rawCore =
        []

  actual <- traverse (ANF.runANFCore newScopeEnvironment) rawCore
  assertEqualExpr
    ( Vector.fromList
        []
    )
    actual
