{-# OPTIONS_GHC -Wno-orphans #-}

module Utils where

import Control.Monad (unless)
import Data.TreeDiff
import GHC.Stack
import Test.Tasty.HUnit (Assertion)
import Test.Tasty.HUnit qualified as Test

import Boreal.Frontend.Syntax
import Boreal.IR.ANFCore.Types
import Boreal.IR.RawCore

assertRight :: (HasCallStack) => Either a b -> IO b
assertRight (Left _a) = Test.assertFailure "Test return Left instead of Right"
assertRight (Right b) = pure b

assertEqualExpr
  :: (HasCallStack, ToExpr a, Eq a)
  => a
  -- ^ Actual
  -> a
  -- ^ Expected
  -> Assertion
assertEqualExpr actual expected =
  unless
    (actual == expected)
    ( Test.assertFailure
        ( show $ ppEditExpr ansiWlPretty $ ediff actual expected
        )
    )

instance ToExpr Syntax
instance ToExpr Pattern
instance (ToExpr ir) => ToExpr (CaseAlternative ir)
instance ToExpr RawCore
instance ToExpr TerminalValue
instance ToExpr ComplexValue
instance ToExpr Value
instance ToExpr ANFCore
instance ToExpr RecordMember
