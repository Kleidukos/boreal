module Boreal.Frontend.Parser where

import Data.Function ((&))
import Data.Text (Text)
import Data.Text qualified as Text
import Data.Text.Display
import Data.Vector (Vector)
import Data.Vector qualified as Vector

import Boreal.Frontend.Lexer

data Expression
  = BorealNode Name Token (Vector Expression)
  | BorealAtom Text
  | BorealIdent
      (Vector Token)
      -- ^ Value on file with preceding whitespace & newlines
      Name
      -- ^ Cleaned value
  deriving stock (Eq, Ord, Show)

parseExpression :: Stream -> Either Text Expression
parseExpression stream =
  let (result, newStream) = nextToken stream
   in case result of
        EOF -> undefined
        Whitespace ->
          let newAccumulatedWhitespace = Vector.snoc stream.accumulatedWhitespace Whitespace
           in parseExpression (newStream{accumulatedWhitespace = newAccumulatedWhitespace})
        Newline ->
          let newAccumulatedWhitespace = Vector.snoc stream.accumulatedWhitespace Newline
           in parseExpression (newStream{accumulatedWhitespace = newAccumulatedWhitespace})
        Atom c ->
          let rawValue = Vector.snoc stream.accumulatedWhitespace (Atom c)
           in Right $ BorealIdent rawValue (Name $ Text.singleton c)
        Op c ->
          Right $ BorealAtom (Text.singleton c)

restitute :: Expression -> Text
restitute = go ""
  where
    go :: Text -> Expression -> Text
    go acc = \case
      BorealAtom t -> acc <> t
      BorealIdent rawTokens _name ->
        (Vector.init rawTokens)
          & fmap display
          & Vector.foldMap' (id)
      BorealNode _name token args ->
        display token <> Vector.foldMap restitute args
