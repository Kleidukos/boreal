module Boreal.Backend.UXN where

import Data.Text (Text)
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Data.Word (Word8)
import Prettyprinter

import Boreal.Backend.UXN.Types
import Boreal.Frontend.Syntax (Name)
import Boreal.IR.ANFCore (ANFCore (..), ComplexValue (..), TerminalValue (..), Value (..))
import Data.Char (intToDigit)
import Data.Text qualified as Text
import Prettyprinter.Render.Terminal (renderStrict)
import Text.Printf (printf)

runUXN :: ANFCore -> IO Text
runUXN anf =
  let instructions = toUXN anf
      doc =
        vsep
          [ emitUXN prologue
          , renderInstructions instructions
          ]
   in pure $ renderStrict $ layoutPretty defaultLayoutOptions doc

toUXN :: ANFCore -> Vector (Vector UXNInstruction)
toUXN anf = Vector.singleton $ case anf of
  Halt value -> valueToUXN value
  AFun funName _ body -> do
    let functionDeclaration = Padding funName
    in 
  e -> error $ "Unmatched: " <> show e

prologue :: UXNInstruction
prologue = Padding "0100"

valueToUXN :: Value -> Vector UXNInstruction
valueToUXN (Terminal terminalValue) = Vector.singleton $ terminalValueToUXN terminalValue
valueToUXN (Complex complexValue) = complexValueToUXN complexValue

terminalValueToUXN :: TerminalValue -> UXNInstruction
terminalValueToUXN = \case
  (ALiteral i) -> Literal (fromIntegral i)
  e -> error $ "Unmatched: " <> show e

complexValueToUXN :: ComplexValue -> Vector UXNInstruction
complexValueToUXN = \case
  AApp name arguments ->
    let stackElements = Vector.map terminalValueToUXN arguments
     in Vector.snoc stackElements (translateFunctionName name)

translateFunctionName :: Name -> UXNInstruction
translateFunctionName = \case
  "+" -> OpCode ADD
  e -> error $ "Unmatched: " <> show e

additionToUXN :: Word8 -> Word8 -> Vector UXNInstruction
additionToUXN a b =
  Vector.fromList
    [ Literal a
    , Literal b
    , OpCode ADD
    ]

renderInstructions :: Vector (Vector UXNInstruction) -> Doc ann
renderInstructions program =
  let result = Vector.toList $ Vector.map renderInstructionLine program
   in vsep result

renderInstructionLine :: Vector UXNInstruction -> Doc ann
renderInstructionLine instructions =
  hsep $ Vector.toList $ Vector.map emitUXN instructions

emitUXN :: UXNInstruction -> Doc ann
emitUXN (Padding padding) = "|" <> pretty padding
emitUXN (RelativePadding padding) = "$" <> pretty padding
emitUXN (Literal i) = "#" <> decToHex i
emitUXN (Ascii a) = "\"" <> viaShow a
emitUXN (Label parent) = "@" <> pretty parent
emitUXN (SubLabel child) = "&" <> pretty child
emitUXN (LiteralAbsolute label) = "," <> pretty label
emitUXN (OpCode opCode) = viaShow opCode

decToHex :: Word8 -> Doc ann
decToHex 0 = pretty @Word8 0
decToHex n = pretty $ Text.pack $ printf "%02s" $ reverse (hexChars (fromIntegral n))
  where
    hexChars 0 = ""
    hexChars x = intToDigit (x `mod` 16) : hexChars (x `div` 16)
