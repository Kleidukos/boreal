{-# LANGUAGE OverloadedLists #-}

module BorealTest.ANFTest where

import Test.Tasty
import Test.Tasty.HUnit

import Boreal.IR.ANFCore qualified as ANF
import Boreal.IR.ANFCore.Types (ANFCore (..), ComplexValue (..), TerminalValue (..), Value (..))
import Boreal.IR.RawCore (CaseAlternative (..), Pattern (..), RawCore (..))
import Boreal.ScopeEnvironment
import Utils

spec :: TestTree
spec =
  testGroup
    "ANFCore"
    [ testCase "Function declaration RawCore to ANFCore" testFunctionDeclarationToANFCore
    , testCase "Let-binding of RawCore terminal value to ANFCore" testLetBindingTerminalValueToANFCore
    , testCase "Case expression to ANFCore" testSimpleCaseExpressionToANFCore
    ]

testFunctionDeclarationToANFCore :: Assertion
testFunctionDeclarationToANFCore = do
  -- original:
  --    x * 2 + 3
  -- expected:
  --    let *0 = x * 2
  --    in *0 + 3
  let rawCore = Call "+" [Call "*" [Var "x", Literal 2], Literal 2]
  actual <- ANF.runANFCore newScopeEnvironment rawCore
  assertEqual
    "Transform to ANF: x * 2 + 3"
    ( ALet
        "prim_mul0"
        ( Complex
            (AApp "*" [AVar "x", ALiteral 2])
        )
        ( Halt
            ( Complex (AApp "+" [AVar "prim_mul0", ALiteral 2])
            )
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
          "function"
          ["y"]
          ( Let
              "x"
              (Call "*" [Literal 3, Literal 2])
              (Call "+" [Var "x", Var "y"])
          )

  actual <- ANF.runANFCore newScopeEnvironment rawCore
  assertEqual
    "Transform to ANF: function y = let x = 3 * 2 in x + y"
    ( AFun
        "function"
        ["y"]
        ( ALet
            "x"
            (Complex (AApp "*" [ALiteral 3, ALiteral 2]))
            (Halt (Complex (AApp "+" [AVar "x", AVar "y"])))
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
          "expr"
          ["x"]
          ( Case
              (Var "x")
              [ CaseAlternative (Constructor "True") (Var "False")
              , CaseAlternative (Constructor "False") (Var "True")
              ]
          )

  actual <- ANF.runANFCore newScopeEnvironment rawCore
  assertEqualExpr
    ( AFun
        "expr"
        ["x"]
        ( ACase
            (Terminal $ AVar "x")
            [ CaseAlternative
                { lhs = Constructor "True"
                , rhs = Halt (Terminal (AVar "False"))
                }
            , CaseAlternative
                { lhs = Constructor "False"
                , rhs = Halt (Terminal (AVar "True"))
                }
            ]
        )
    )
    actual
