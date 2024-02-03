module CLI.Types where

import Driver.BuildFlags

data Command
  = Build BuildFlags FilePath
  | Clean
  | Purge
  deriving stock (Eq, Ord, Show)
