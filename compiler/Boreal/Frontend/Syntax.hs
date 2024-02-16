module Boreal.Frontend.Syntax where

import Data.Set qualified as Set
import Data.Text (Text)
import Data.Text.Read qualified as Text
import Data.Vector (Vector)
import GHC.Generics (Generic)

import Boreal.SourceInfo

type Name = Text

data Syntax
  = BorealNode
      SourceInfo
      Name
      -- ^ Name
      (Vector Syntax)
      -- ^ Arguments
  | -- | Bits of syntax that do not need to be looked up in environment,
    -- (like parentheses, syntactic keyword, commas, equal), or
    -- literal numbers
    BorealAtom
      SourceInfo
      Name
  | BorealIdent
      SourceInfo
      Name
  | Missing
  deriving stock (Eq, Show, Generic)

isAtom :: Syntax -> Bool
isAtom (BorealAtom _ _) = True
isAtom _ = False

isNamedAtom :: Text -> Syntax -> Bool
isNamedAtom name (BorealAtom _ a) = a == name
isNamedAtom _ _ = False

isIdent :: Syntax -> Bool
isIdent (BorealIdent _ _) = True
isIdent _ = False

isTextAtom :: Text -> Bool
isTextAtom t =
  case Text.decimal @Int t of
    Right _ -> True
    Left _ -> t `Set.member` atoms
  where
    atoms =
      Set.fromList
        [ "module"
        , "where"
        , "let"
        , "in"
        , "="
        , "type"
        , "|"
        , "("
        , ")"
        ]

isNamedNode :: Name -> Syntax -> Bool
isNamedNode name (BorealNode _ name' _) | name == name' = True
isNamedNode _ _ = False
