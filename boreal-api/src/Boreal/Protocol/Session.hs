module Boreal.Protocol.Session where

import Data.Aeson
import Data.Set
import Data.Text.Display

newtype SessionId = SessionId Word
  deriving (Eq, Show, Ord, FromJSON, ToJSON) via Word
  deriving
    (Display)
    via (ShowInstance Word)

type SessionTable = Set SessionId
