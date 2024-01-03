module Boreal.Backend.UXN where

import Data.Text (Text)
import Data.Vector (Vector)
import Data.Word (Word8)
import qualified Data.Vector as Vector
import Prettyprinter

import Boreal.IR.ANFCore (ANFCore (..), TerminalValue (..))
import Boreal.Backend.UXN.Types
import Data.Char (intToDigit)

toUXN :: ANFCore -> Text
toUXN _ = undefined

prologue :: UXNInstruction
prologue = Padding 0100

terminalValueToUXN :: TerminalValue -> UXNInstruction
terminalValueToUXN (ALiteral i) = Literal (fromIntegral i)

additionToUXN :: Word8 -> Word8 -> Vector UXNInstruction
additionToUXN a b = Vector.fromList   
  [ Literal a
  , Literal b
  , OpCode ADD
  ]

emitUXN :: UXNInstruction -> Doc ann
emitUXN (Padding padding) = "|" <> pretty padding
emitUXN (RelativePadding padding) = "$" <> pretty padding
emitUXN (Literal i) = "#" <> decToHex i
emitUXN (Ascii a) = "\"" <> viaShow a
emitUXN (Label parent) = "@" <> pretty parent
emitUXN (SubLabel child) = "&" <> pretty child
emitUXN (OpCode opCode) = viaShow opCode


decToHex :: Word8 -> Doc ann
decToHex 0 = "0"
decToHex n = pretty $ reverse (hexChars (fromIntegral n))
   where
      hexChars 0 = ""
      hexChars x = intToDigit (x `mod` 16) : hexChars (x `div` 16)

