{-# LANGUAGE MultiWayIf #-}

module Boreal.Frontend.Parser where

import Control.Monad (void)
import Data.Function ((&))
import Data.Text (Text)
import Data.Text qualified as Text
import Data.Text.Display
import Data.Vector qualified as Vector
import Debug.Trace
import Effectful.State.Static.Local qualified as State

import Boreal.Frontend.Lexer
import Boreal.Frontend.Parser.Types

parseExpression :: Maybe Expression -> BindingPower -> Parser Expression
parseExpression mExpression minBindingPower =
  case traceShowId mExpression of
    Just expr ->
      proceedWithStream expr minBindingPower
    Nothing ->
      nextToken >>= \case
        Whitespace -> do
          stream <- State.get
          let newAccumulatedWhitespace = Vector.snoc stream.accumulatedWhitespace Whitespace
          State.put (stream{accumulatedWhitespace = newAccumulatedWhitespace})
          parseExpression Nothing minBindingPower
        Newline -> do
          stream <- State.get
          let newAccumulatedWhitespace = Vector.snoc stream.accumulatedWhitespace Newline
          State.put (stream{accumulatedWhitespace = newAccumulatedWhitespace})
          parseExpression Nothing minBindingPower
        (Op c) -> error $ "Got the operation: " <> show c
        EOF -> error "Got EOF!"
        (Atom a) -> do
          let atom = BorealAtom $ Text.singleton a
          proceedWithStream atom minBindingPower

proceedWithStream :: Expression -> BindingPower -> Parser Expression
proceedWithStream lhs minBindingPower =
  peekToken >>= \case
    EOF -> pure lhs
    Whitespace ->
      parseExpression Nothing minBindingPower
    Newline ->
      parseExpression Nothing minBindingPower
    Op o -> do
      stream <- State.get @Stream
      let op = BorealIdent (Name (Text.singleton o)) (stream.accumulatedWhitespace)
      let (leftBindingPower, rightBindingPower) = infixBindingPower o
      if leftBindingPower < minBindingPower
        then pure lhs
        else do
          void nextToken
          rhs <- parseExpression Nothing rightBindingPower
          let lhs' = BorealNode (Name $ Text.singleton o) (traceShowId (Vector.fromList [op, lhs, rhs]))
          parseExpression (Just lhs') minBindingPower
    e -> error ("Bad token: " <> show e)

infixBindingPower :: Char -> (BindingPower, BindingPower)
infixBindingPower c =
  if
      | c `elem` ['+', '-'] -> (1, 2)
      | c `elem` ['*', '/'] -> (3, 4)
      | otherwise -> error $ "CANNOT DETERMINE BINDING POWER FOR " <> show c

restitute :: Expression -> Text
restitute = go ""
  where
    go :: Text -> Expression -> Text
    go acc = \case
      BorealAtom t -> acc <> t
      BorealIdent _name rawTokens ->
        Vector.init rawTokens
          & fmap display
          & Vector.foldMap' id
      BorealNode name args ->
        display name <> Vector.foldMap restitute args
