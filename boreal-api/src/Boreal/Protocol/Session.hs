module Boreal.Protocol.Session where

import Data.Aeson
import Data.Set

newtype SessionId = SessionId Word
  deriving (Eq, Show, Ord, FromJSON, ToJSON) via Word

type SessionTable = Set SessionId
