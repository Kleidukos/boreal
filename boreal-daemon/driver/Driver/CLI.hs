module Driver.CLI where

import Options.Applicative

data CLIOptions = CLIOptions 
  { daemon :: Bool
  }
  deriving stock (Eq, Ord, Show)

parseOptions :: Parser CLIOptions
parseOptions =
  CLIOptions
    <$> switch
      (long "daemon" <> help "Fork in the background")

withInfo :: Parser a -> String -> ParserInfo a
withInfo opts desc = info (helper <*> opts) $ progDesc desc
