module Boreal.Protocol.Response where

import Data.Aeson
import Data.Text (Text)
import GHC.Generics

import Boreal.Protocol.Session
import Boreal.Protocol.Types (currentVersion)

data Response = Response
  { protocolVersion :: Word
  , payload :: ResponsePayload
  }
  deriving stock (Eq, Ord, Show, Generic)
  deriving
    (FromJSON, ToJSON)
    via Generically Response

emptyResponse :: Response
emptyResponse =
  Response
    { protocolVersion = currentVersion
    , payload = Empty
    }

data ResponsePayload
  = CompilationSuccess FilePath
  | ProtocolMismatch
      Word
      -- ^ Expected version from the server's point of view
      Word
      -- ^ Actual version sent to the server from the client
  | ProtocolDecodingError Text
  | ClientRegistered SessionId
  | ProjectCleaned
  | CachePurged
  | Empty
  deriving stock (Eq, Ord, Show, Generic)
  deriving
    (FromJSON, ToJSON)
    via Generically ResponsePayload
