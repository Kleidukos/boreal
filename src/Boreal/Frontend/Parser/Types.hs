module Boreal.Frontend.Parser.Types where

import Data.Function ((&))
import Data.Text (Text)
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Data.Word
import Debug.Trace
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

-- | Grab the next token and remove it from the stream
nextToken :: Parser Token
nextToken = do
  stream <- State.get @Stream
  case Vector.uncons stream.input of
    Nothing -> pure EOF
    Just (hd, tl) -> do
      case hd of
        Whitespace -> do
          let newAccumulatedWhitespace = Vector.snoc stream.accumulatedWhitespace Whitespace
          State.put (stream{accumulatedWhitespace = newAccumulatedWhitespace, input = tl})
          pure hd
        Newline -> do
          let newAccumulatedWhitespace = Vector.snoc stream.accumulatedWhitespace Newline
          State.put (stream{accumulatedWhitespace = newAccumulatedWhitespace, input = tl})
          pure hd
        _ -> do
          State.put $ Stream stream.accumulatedWhitespace tl
          pure hd

-- | Observe the next token without removing it from the stream
peekToken :: Parser Token
peekToken = do
  stream <- State.get @Stream
  case Vector.uncons stream.input of
    Nothing -> pure EOF
    Just (hd, _) -> do
      pure hd

-- | Remove the next token from the stream without processing it
skipToken :: Parser ()
skipToken = do
  t <- nextToken
  traceM $ "Skipping token " <> show t

traceState :: Parser ()
traceState = do
  state <- State.get @Stream
  traceShowM state
