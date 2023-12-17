{-# LANGUAGE MultiWayIf #-}

module Boreal.Frontend.Parser where

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
    Nothing -> do
      t <- nextToken
      traceM $ "Handling token: " <> show t
      case t of
        (Atom a) -> do
          let atom = BorealAtom $ Text.singleton a
          proceedWithStream atom minBindingPower
        c -> error $ "Got the token: " <> show c

proceedWithStream :: Expression -> BindingPower -> Parser Expression
proceedWithStream lhs minBindingPower =
  peekToken >>= \case
    EOF -> pure lhs
    Whitespace -> do
      traceM "Proceeding with Whitespace"
      traceState
      skipToken
      proceedWithStream lhs minBindingPower
    Newline -> do
      traceM "Proceeding with Newline"
      traceState
      skipToken
      proceedWithStream lhs minBindingPower
    Op o -> do
      traceM $ "Proceeding with Operation: " <> show o
      stream <- State.get @Stream
      let op = BorealIdent (Name (Text.singleton o)) (stream.accumulatedWhitespace)
      let (leftBindingPower, rightBindingPower) = infixBindingPower o
      if leftBindingPower < minBindingPower
        then do
          traceM $
            "Left binding power of "
              <> show o
              <> " ("
              <> show leftBindingPower
              <> ") "
              <> "is smaller than minimum binding power ("
              <> show minBindingPower
              <> ")"
          pure lhs
        else do
          traceM $
            "Left binding power of "
              <> show o
              <> " ("
              <> show leftBindingPower
              <> ") "
              <> "is greater than minimum binding power ("
              <> show minBindingPower
              <> ")"
          skipToken
          rhs <- parseExpression Nothing rightBindingPower
          let lhs' =
                BorealNode
                  (Name $ Text.singleton o)
                  (traceShowId (Vector.fromList [op, lhs, rhs]))
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
