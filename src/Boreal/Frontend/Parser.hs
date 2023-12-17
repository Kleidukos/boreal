{-# LANGUAGE MultiWayIf #-}

module Boreal.Frontend.Parser where

import Data.Text qualified as Text
import Data.Vector qualified as Vector
import Effectful.State.Static.Local qualified as State
import GHC.Stack

import Boreal.Frontend.Lexer
import Boreal.Frontend.Parser.Types

parseExpression :: (HasCallStack) => Maybe Expression -> BindingPower -> Parser Expression
parseExpression mExpression minBindingPower =
  case mExpression of
    Just expr ->
      proceedWithStream expr minBindingPower
    Nothing -> do
      t <- nextToken
      case t of
        (Atom c) -> do
          stream <- State.get @Stream
          let trailing = stream.accumulatedWhitespace
          let expr =
                if
                    | c `elem` ['a' .. 'z'] -> (BorealIdent (Name $ Text.singleton c) trailing)
                    | c `elem` ['A' .. 'Z'] -> (BorealIdent (Name $ Text.singleton c) trailing)
                    | c `elem` ['0' .. '9'] -> (BorealIdent (Name $ Text.singleton c) trailing)
                    | otherwise -> error "blah"
          resetTrailingSpaces
          proceedWithStream expr minBindingPower
        Whitespace ->
          parseExpression Nothing minBindingPower
        Newline ->
          parseExpression Nothing minBindingPower
        (Op op) -> do
          let rightBindingPower = prefixBindingPower op
          rhs <- parseExpression (Nothing) rightBindingPower
          pure $
            BorealNode
              (Name $ Text.singleton op)
              (Vector.fromList [rhs])
        e -> error ("bad token: " <> show e)

proceedWithStream :: (HasCallStack) => Expression -> BindingPower -> Parser Expression
proceedWithStream lhs minBindingPower =
  peekToken >>= \case
    EOF -> pure lhs
    Whitespace -> do
      skipToken
      proceedWithStream lhs minBindingPower
    Newline -> do
      skipToken
      proceedWithStream lhs minBindingPower
    Op o -> do
      let (leftBindingPower, rightBindingPower) = infixBindingPower o
      resetTrailingSpaces
      if leftBindingPower < minBindingPower
        then pure lhs
        else do
          skipToken
          rhs <- parseExpression Nothing rightBindingPower
          let lhs' =
                BorealNode
                  (Name $ Text.singleton o)
                  (Vector.fromList [lhs, rhs])
          parseExpression (Just lhs') minBindingPower
    e -> do
      error ("Bad token: " <> show e)

infixBindingPower :: (HasCallStack) => Char -> (BindingPower, BindingPower)
infixBindingPower c =
  if
      | c `elem` ['+', '-'] -> (1, 2)
      | c `elem` ['*', '/'] -> (3, 4)
      | c == '⋅' -> (8, 7)
      | otherwise ->
          error $ "CANNOT DETERMINE BINDING POWER FOR " <> show c

prefixBindingPower :: (HasCallStack) => Char -> BindingPower
prefixBindingPower c =
  if
      | c `elem` ['+', '-'] -> 5
      | otherwise -> error $ "Bad op: " <> show c
