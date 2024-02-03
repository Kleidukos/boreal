module Driver.BuildFlags where

import Data.ByteString (StrictByteString)
import Data.ByteString.Char8 qualified as BSC

data OptimisationLevel = O0 | O1
  deriving stock (Eq, Ord, Show, Read)

data BuildFlags = BuildFlags
  { optimisationLevel :: OptimisationLevel
  }
  deriving stock (Eq, Ord, Show)

buildFlagsToByteString :: BuildFlags -> StrictByteString
buildFlagsToByteString BuildFlags{optimisationLevel} =
  BSC.pack $ show optimisationLevel
