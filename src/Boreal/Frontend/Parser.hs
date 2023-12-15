{-# LANGUAGE MultiWayIf #-}

module Boreal.Frontend.Parser where

import Data.Function ((&))
import Data.Text (Text)
import Data.Text qualified as Text
import Data.Text.Display
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Data.Word
import Debug.Trace

import Boreal.Frontend.Lexer

type BindingPower = Word8

-- Atom is a piece of syntax, like '(', '+', ')'.
-- Ident is a variable, a literal integer
-- Node is a constructor element that builds an expression
data Expression
  = BorealNode
      Name
      -- ^ Name
      (Vector Expression)
      -- ^ Arguments
  | BorealAtom Text
  | BorealIdent
      Name
      -- ^ Cleaned value
      (Vector Token)
      -- ^ Value on file with preceding whitespace & newlines
  deriving stock (Eq, Ord, Show)

parseExpression :: Stream -> Maybe Expression -> BindingPower -> Expression
parseExpression stream' mExpression minBindingPower =
  case (traceShowId mExpression) of
    Just expr ->
      proceedWithStream (expr, stream') minBindingPower
    Nothing ->
      case nextToken stream' of
        (Whitespace, stream) ->
          let newAccumulatedWhitespace = Vector.snoc stream.accumulatedWhitespace Whitespace
           in parseExpression (traceShowId (stream{accumulatedWhitespace = newAccumulatedWhitespace})) Nothing minBindingPower
        (Newline, stream) ->
          let newAccumulatedWhitespace = Vector.snoc stream.accumulatedWhitespace Newline
           in parseExpression (stream{accumulatedWhitespace = newAccumulatedWhitespace}) Nothing minBindingPower
        (Op _c, _stream) -> error "baaaaaah"
        (EOF, _) -> error "baaaaaah"
        (Atom a, stream) ->
          let atom = BorealAtom $ Text.singleton a
           in proceedWithStream (atom, traceShowId stream) minBindingPower

proceedWithStream :: (Expression, Stream) -> BindingPower -> Expression
proceedWithStream (lhs, stream) minBindingPower =
  case peekToken (traceShowId stream) of
    EOF -> lhs
    Op o ->
      let op = BorealIdent (Name (Text.singleton o)) (stream.accumulatedWhitespace)
          (leftBindingPower, rightBindingPower) = infixBindingPower o
       in if leftBindingPower < minBindingPower
            then lhs
            else
              let (_, newStream) = nextToken stream
                  rhs = parseExpression newStream Nothing rightBindingPower
                  lhs' = BorealNode (Name $ Text.singleton o) (traceShowId (Vector.fromList [op, lhs, rhs]))
               in parseExpression newStream (Just lhs') minBindingPower
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
