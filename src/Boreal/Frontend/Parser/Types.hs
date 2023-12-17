module Boreal.Frontend.Parser.Types where

import Data.Function ((&))
import Data.Text (Text)
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Data.Word
import Effectful
import Effectful.State.Static.Local (State)
import Effectful.State.Static.Local qualified as State

import Boreal.Frontend.Lexer

type Parser = Eff '[State Stream]

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

runParser :: Text -> Parser Expression -> Expression
runParser input action =
  let stream = input & lexText
   in action
        & State.evalState stream
        & runPureEff

nextToken :: Parser Token
nextToken = do
  stream <- State.get @Stream
  case Vector.uncons stream.input of
    Nothing -> pure EOF
    Just (hd, tl) -> do
      State.put $ Stream stream.accumulatedWhitespace tl
      pure hd

peekToken :: Parser Token
peekToken = do
  stream <- State.get @Stream
  case Vector.uncons stream.input of
    Nothing -> pure EOF
    Just (hd, _) -> pure hd
