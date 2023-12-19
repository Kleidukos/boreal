{-# LANGUAGE DerivingVia #-}
{-# LANGUAGE GeneralizedNewtypeDeriving #-}
{-# LANGUAGE MultiWayIf #-}

module Boreal.Frontend.Lexer
  ( lexText
  , Token (..)
  , TokenKind (..)
  , Name (..)
  , Stream (..)
  ) where

import Data.Function ((&))
import Data.Text (Text)
import Data.Text qualified as Text
import Data.Text.Display
import Data.Text.Lazy.Builder qualified as Builder
import Data.Vector (Vector)
import Data.Vector qualified as Vector

data Token
  = Atom !Char
  | Op !Char
  | Whitespace
  | Newline
  | EOF
  deriving stock (Eq, Ord, Show)

instance Display Token where
  displayBuilder (Atom c) = Builder.singleton c
  displayBuilder (Op c) = Builder.singleton c
  displayBuilder Whitespace = " "
  displayBuilder Newline = "\n"
  displayBuilder EOF = ""

newtype TokenKind = TokenKind Text
  deriving newtype (Eq, Ord, Show)
  deriving
    (Display)
    via (ShowInstance TokenKind)

newtype Name = Name Text
  deriving newtype (Eq, Ord)
  deriving stock (Show)
  deriving
    (Display)
    via Text

data Stream = Stream
  { accumulatedWhitespace :: Vector Token
  , input :: Vector Token
  }
  deriving stock (Eq, Ord, Show)
  deriving
    (Display)
    via ShowInstance Stream

lexText :: Text -> Stream
lexText text =
  text
    & Text.foldl'
      ( \acc c ->
          if
            | c `elem` ['a' .. 'z'] -> Vector.snoc acc (Atom c)
            | c `elem` ['A' .. 'Z'] -> Vector.snoc acc (Atom c)
            | c `elem` ['0' .. '9'] -> Vector.snoc acc (Atom c)
            | c == ' ' -> Vector.snoc acc Whitespace
            | c == '\n' -> Vector.snoc acc Newline
            | otherwise -> Vector.snoc acc (Op c)
      )
      Vector.empty
    & Stream Vector.empty
