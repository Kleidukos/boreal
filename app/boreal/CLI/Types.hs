module CLI.Types where

data Command
  = Build BuildFlags FilePath
  | Clean
  deriving stock (Eq, Ord, Show)

data OptimisationLevel = O0 | O1
  deriving stock (Eq, Ord, Show, Read)

data BuildFlags = BuildFlags
  { optimizationLevel :: OptimisationLevel
  }
  deriving stock (Eq, Ord, Show)
