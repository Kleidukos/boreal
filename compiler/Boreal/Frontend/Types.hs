module Boreal.Frontend.Types where

import Data.Function ((&))
import Effectful
import Effectful.Reader.Static
import Effectful.Reader.Static qualified as Reader

import Boreal.Frontend.Syntax
import Data.ByteString (StrictByteString)

type BorealParser = Eff '[Reader StrictByteString, IOE]

runParser :: StrictByteString -> BorealParser Syntax -> IO Syntax
runParser input action =
  action
    & Reader.runReader input
    & runEff
