module Boreal.Protocol.Request where

import Boreal.Protocol.Session
import Data.Aeson
import GHC.Generics

data RequestPayload
  = RegisterClient
  | DeregisterClient SessionId
  | EmitLua
      FilePath
      -- ^ Boréal file to compile
      FilePath
      -- ^ Where to put the resulting Lua file
  | CleanProject FilePath
  | PurgeCache FilePath
  deriving stock (Eq, Ord, Show, Generic)
  deriving
    (FromJSON, ToJSON)
    via Generically RequestPayload

data Request = Request
  { protocolVersion :: Word
  , command :: RequestPayload
  }
  deriving stock (Eq, Ord, Show, Generic)
  deriving
    (FromJSON, ToJSON)
    via Generically Request
