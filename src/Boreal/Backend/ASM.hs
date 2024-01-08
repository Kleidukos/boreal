{-# LANGUAGE QuasiQuotes #-}

-- |
-- ANFCore -> ASM (Vector Instruction) -> Text
--        toASM                       emit
module Boreal.Backend.ASM where

import Control.Concurrent.Counter qualified as Counter
import Data.Function ((&))
import Data.Text (Text)
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Effectful
import Effectful.Labeled qualified as Labeled
import Effectful.Reader.Static qualified as Reader
import Prettyprinter (Doc, Pretty (..), brackets, defaultLayoutOptions, layoutPretty, nest, vcat, viaShow, vsep, (<+>))
import Prettyprinter.Render.Text (renderStrict)
import PyF

import Boreal.Backend.ASM.Types
import Boreal.Frontend.Syntax
import Boreal.IR.ANFCore
import Boreal.IR.Types
import Control.Monad (forM)
import Effectful.State.Static.Local qualified as State

prologue :: Text
prologue =
  [str|
section .text
global _boreal_main

_boreal_main:
  JMP boreal_main
|]

runASM :: Module ANFCore -> IO Text
runASM anfModule = do
  counter <- Counter.new 0
  instructions <- forM anfModule.topLevelDeclarations $ \topLevelDecl -> do
    toASM topLevelDecl
      & Labeled.runLabeled @"label-counter" (Reader.runReader counter)
      & State.evalState mempty
      & runEff
  pure $
    renderStrict $
      layoutPretty defaultLayoutOptions $
        vsep
          [ pretty ("; module " <> anfModule.moduleName)
          , pretty prologue
          , nest 2 (foldMap codegen instructions)
          ]

toASM :: ANFCore -> ASM (Vector Instruction)
toASM (Halt value) = valueToASM value
toASM (AFun name args body) = functionDeclarationToASM name args body
toASM (ALet boundName expression body) = letBindingToASM boundName expression body

valueToASM :: Value -> ASM (Vector Instruction)
valueToASM (Terminal (ALiteral int)) = pure $ Vector.fromList [MOV (Reg RAX) (Constant int)]
valueToASM (Terminal (AVar var)) = undefined
valueToASM (Complex complexValue) = complexValueToASM complexValue

complexValueToASM :: ComplexValue -> ASM (Vector Instruction)
complexValueToASM (AApp fun arguments) = do
  case fun of
    "+" -> additionToASM arguments
    "-" -> subtractionToASM arguments
    e -> error $ "Unmatched: " <> show e

functionDeclarationToASM :: Name -> Vector Name -> ANFCore -> ASM (Vector Instruction)
functionDeclarationToASM name _ body = do
  bodyInstructions <- toASM body
  let funName = if name == "main" then "boreal_main" else name
  pure $ Vector.fromList [LabelDeclaration funName bodyInstructions]

letBindingToASM :: Name -> Value -> ANFCore -> ASM (Vector Instruction)
letBindingToASM boundName expression body = do
  slot <- addToEnvironment boundName
  compiledExpression <- valueToASM expression
  compiledBody <- toASM body
  pure $
    compiledExpression
      <> moveToRAX slot
      <> compiledBody

additionToASM :: Vector TerminalValue -> ASM (Vector Instruction)
additionToASM arguments
  | Vector.length arguments == 2 = do
      compiledOperand1 <- handleOperand $ arguments Vector.! 0
      compiledOperand2 <- handleOperand $ arguments Vector.! 1
      pure $
        Vector.fromList
          [ MOV (Reg RAX) compiledOperand1
          , ADD (Reg RAX) compiledOperand2
          ]
  | otherwise = error "Argument vector to addition does not have 2 members!"

handleOperand :: TerminalValue -> ASM Argument
handleOperand (ALiteral operand) = pure $ Constant operand
handleOperand (AVar name) = do
  offset <- lookupInEnvironment name
  pure (RegOffset RSP offset)

subtractionToASM :: Vector TerminalValue -> ASM (Vector Instruction)
subtractionToASM arguments
  | Vector.length arguments == 2 = do
      compiledOperand1 <- handleOperand $ arguments Vector.! 0
      compiledOperand2 <- handleOperand $ arguments Vector.! 1
      pure $
        Vector.fromList
          [ MOV (Reg RAX) compiledOperand1
          , SUB (Reg RAX) compiledOperand2
          ]
  | otherwise = error "Argument vector to addition does not have 2 members!"

isLiteral :: TerminalValue -> Bool
isLiteral (ALiteral _) = True
isLiteral _ = False

codegen :: Vector Instruction -> Doc ann
codegen instructions = vcat $ Vector.toList $ Vector.map emit instructions

emit :: Instruction -> Doc ann
emit (MOV destination source) = "MOV" <+> emitArgument destination <> "," <+> emitArgument source
emit (ADD operand1 operand2) = "ADD" <+> emitArgument operand1 <> "," <+> emitArgument operand2
emit (SUB operand1 operand2) = "SUB" <+> emitArgument operand1 <> "," <+> emitArgument operand2
emit (LabelDeclaration name body) =
  let compiledBody = codegen body
   in nest
        2
        ( vsep
            [ pretty name <> ":"
            , compiledBody
            ]
        )

emitArgument :: Argument -> Doc ann
emitArgument (Constant i) = pretty i
emitArgument (Reg register) = viaShow register
emitArgument (RegOffset reg offset) = brackets (viaShow reg <+> "-" <+> "8 * " <> pretty offset)

stackAddress :: Int -> Argument
stackAddress = RegOffset RSP

moveToRAX :: Int -> Vector Instruction
moveToRAX slot =
  Vector.singleton $
    MOV (RegOffset RSP slot) (Reg RAX)
