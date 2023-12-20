module Boreal.Frontend.Parser.Types where

import Control.Monad (void)
import Data.Function ((&))
import Data.Text (Text)
import Data.Text.Display
import Data.Text.Lazy.Builder (Builder)
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Data.Word
import Debug.Trace
import Effectful
import Effectful.Error.Static (Error)
import Effectful.Error.Static qualified as Error
import Effectful.State.Static.Local (State)
import Effectful.State.Static.Local qualified as State

import GHC.Stack

import Boreal.Frontend.Lexer

type Parser = Eff '[State Stream, Error ParseError]

data ParseError
  = ParseError
  deriving stock (Eq, Ord, Show)

type BindingPower = Word8

-- Atom is a piece of syntax, like '(', '+', ')'.
-- Ident is a variable, a literal integer
-- Node is a constructor element that builds an expression
data Expression
  = BorealNode
      Name
      -- ^ Name
      (Vector Token)
      -- ^ Value on file with preceding whitespace & newlines
      (Vector Expression)
      -- ^ Arguments
  | BorealAtom Text
  | BorealIdent
      Name
      -- ^ Cleaned value
      (Vector Token)
      -- ^ Value on file with preceding whitespace & newlines
  deriving stock (Eq, Ord, Show)

instance Display Expression where
  displayBuilder expr = go mempty expr
    where
      go :: Builder -> Expression -> Builder
      go acc = \case
        BorealAtom t -> acc <> displayBuilder t
        BorealIdent name trailing
          | trailing == Vector.empty -> displayBuilder name
          | otherwise ->
              acc
                <> ( trailing
                      & fmap displayBuilder
                      & Vector.foldMap' id
                   )
                <> displayBuilder name
        BorealNode name trailing args
          | isBinOp name ->
              let trailing' =
                    trailing
                      & fmap displayBuilder
                      & Vector.foldMap' id
               in acc
                    <> displayBuilder (Vector.head args)
                    <> trailing'
                    <> displayBuilder name
                    <> Vector.foldMap displayBuilder (Vector.tail args)
          | otherwise ->
              displayBuilder name <> Vector.foldMap displayBuilder args

runParser :: Text -> Parser Expression -> Either ParseError Expression
runParser input action =
  let stream = input & lexText
   in action
        & State.evalState stream
        & Error.runErrorNoCallStack
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
          State.put $ Stream{accumulatedWhitespace = stream.accumulatedWhitespace, input = tl}
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
skipToken = void nextToken

traceState :: (HasCallStack) => Parser ()
traceState = do
  let myCallStack = callStack
  state <- State.get @Stream
  traceShowM state
  traceM (prettyCallStack myCallStack)
  traceM "--------------"

resetTrailingSpaces :: Parser ()
resetTrailingSpaces =
  State.modify (\stream -> stream{accumulatedWhitespace = Vector.empty})

isBinOp :: Name -> Bool
isBinOp (Name t) = t `elem` ["+", "-", "*", "/", "⋅"]
