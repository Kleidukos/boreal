module CLI.Types where

import Driver.BuildFlags
import Driver.DebugFlags

data Command
  = Build DebugFlags BuildFlags FilePath
  | Clean
  | Purge
  deriving stock (Eq, Ord, Show)
