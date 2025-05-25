module Boreal.Backend.Lua where

import Control.Monad (forM)
import Data.Function ((&))
import Data.List qualified as List
import Data.Text (Text)
import Data.Text qualified as Text
import Data.Text.Display (display)
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Effectful
import Effectful.Reader.Static qualified as Reader
import Effectful.State.Static.Local qualified as State
import Language.Lua.PrettyPrinter
import Language.Lua.Syntax
import Language.Lua.Syntax qualified as Lua
import System.FilePath ((<.>), (</>))
import Text.Encoding.Z (zEncodeString)

import Boreal.Backend.Lua.Types
import Boreal.IR.ANFCore.Types
import Boreal.IR.Types
import Boreal.IR.Types qualified as Boreal
import Boreal.PrimOps

runLua :: FilePath -> Module ANFCore -> IO Text
runLua libDir anfModule =
  runEff
    . Reader.runReader (ModuleInfo anfModule.moduleName)
    . State.evalState emptyFunctionEnvironment
    . State.evalState mempty
    $ do
      let importStatements =
            Vector.toList $
              Vector.map
                (\statement -> Text.unpack $ renderImportStatement libDir statement)
                anfModule.imports
      luaTypeDeclarations <- forM anfModule.typeDeclarations $ \case
        SumTypeDeclaration name constructors ->
          typeDeclarationToLua name constructors
      luaTopLevelFunctions <- forM anfModule.topLevelFunctions $ \case
        AFun name args body -> do
          functionDeclarationToLua name args body
      let moduleName = Text.pack $ zEncodeString $ Text.unpack (display anfModule.moduleName)
      exportList' <- mkExportList
      let exportList = show . pprint $ Block (List.singleton exportList') Nothing
      let exportModule = "return " <> Text.unpack moduleName
      typeDeclarations <- codegen luaTypeDeclarations
      topLevelFunctions <- codegen luaTopLevelFunctions
      pure $
        Text.pack $
          mconcat $
            ["-- ", Text.unpack (display anfModule.moduleName), "\n"]
              <> importStatements
              <> typeDeclarations
              <> topLevelFunctions
              <> ["\n", exportList]
              <> ["\n", exportModule, "\n"]

renderImportStatement :: FilePath -> ImportStatement -> Text
renderImportStatement libDir importStatement =
  let modulePath =
        display importStatement.importedModule
          & Text.replace "." "/"
          & Text.unpack
      moduleName = zEncodeString $ Text.unpack (display importStatement.importedModule)
   in Text.pack $ "local " <> moduleName <> " = dofile(\"" <> libDir </> modulePath <.> "lua\")\n"

typeDeclarationToLua
  :: Boreal.Name
  -> Vector (Boreal.Name, Vector Boreal.Name)
  -> LuaEff Lua.Stat
typeDeclarationToLua name constructors = do
  let fields = Vector.toList $ Vector.map constructorToTableMember constructors
  addNameToEnvironment (display name)
  pure $
    Lua.LocalAssign [Lua.Name (display name)] (Just [Lua.TableConst fields])

constructorToTableMember :: (Boreal.Name, Vector Boreal.Name) -> Lua.TableField
constructorToTableMember (name, _) =
  Lua.NamedField (Lua.Name (display name)) (Lua.TableConst [])

codegen :: Vector Lua.Stat -> LuaEff [String]
codegen statements = do
  let prettyPrintedStatements =
        show . pprint $ Block (Vector.toList statements) Nothing
  pure [prettyPrintedStatements]

valueToLua :: Value -> LuaEff Lua.Exp
valueToLua (Terminal terminalValue) = pure $ terminalValueToLua terminalValue
valueToLua (Complex complexValue) = pure $ complexValueToLua complexValue

terminalValueToLua :: TerminalValue -> Lua.Exp
terminalValueToLua (ALiteral int) = Lua.Number Lua.IntNum (display int)
terminalValueToLua (AVar var) = Lua.PrefixExp $ Lua.PEVar (Lua.VarName (Lua.Name (display var)))

complexValueToLua :: ComplexValue -> Exp
complexValueToLua (AApp fun arguments)
  | fun == primAdd.operator = nativeLuaBinOp Add (arguments Vector.! 0) (arguments Vector.! 1)
  | fun == primSub.operator = nativeLuaBinOp Sub (arguments Vector.! 0) (arguments Vector.! 1)
  | fun == primMul.operator = nativeLuaBinOp Mul (arguments Vector.! 0) (arguments Vector.! 1)
  | fun == primDiv.operator = nativeLuaBinOp Div (arguments Vector.! 0) (arguments Vector.! 1)
  | otherwise = error $ "Unmatched: " <> show fun

functionDeclarationToLua
  :: Text
  -> Vector Text
  -> ANFCore
  -> LuaEff Lua.Stat
functionDeclarationToLua name arguments body = do
  bodyInstructions <- functionBodyToBlock body
  let funArgs = fmap (Lua.Name . display) arguments
  addNameToEnvironment name
  pure $
    LocalFunAssign
      (Lua.Name (display name))
      (FunBody (Vector.toList funArgs) False bodyInstructions)

functionBodyToBlock :: ANFCore -> LuaEff Lua.Block
functionBodyToBlock body = do
  result <- case body of
    (ALet name expression letBody) -> letBindingToLua name expression letBody
    (Halt value) -> do
      returnValue <- valueToLua value
      addBlockReturnValue returnValue
      pure Vector.empty
    e -> error $ "Didn't match on " <> show e

  FunctionEnvironment{returnValue} <- State.get
  pure $ Block (Vector.toList result) (fmap List.singleton returnValue)

letBindingToLua :: Text -> Value -> ANFCore -> LuaEff (Vector Lua.Stat)
letBindingToLua boundName expression body = do
  expressionInstructions <- valueToLua expression
  bodyInstructions <- letBodyToBlock body
  pure $
    Vector.fromList
      [ LocalAssign
          [Lua.Name boundName]
          (Just [expressionInstructions])
      ]
      <> bodyInstructions

letBodyToBlock :: ANFCore -> LuaEff (Vector Lua.Stat)
letBodyToBlock body = case body of
  (ALet name expression letBody) -> letBindingToLua name expression letBody
  (Halt value) -> do
    returnValue <- valueToLua value
    addBlockReturnValue returnValue
    pure Vector.empty
  e -> error $ "Didn't match on " <> show e

nativeLuaBinOp :: Lua.Binop -> TerminalValue -> TerminalValue -> Lua.Exp
nativeLuaBinOp binop operand1 operand2 =
  Binop binop (terminalValueToLua operand1) (terminalValueToLua operand2)

mkExportList :: LuaEff Lua.Stat
mkExportList = do
  moduleInfo <- Reader.ask @ModuleInfo
  let moduleName = Text.pack $ zEncodeString $ Text.unpack (display moduleInfo.name)
  LuaEnvironment names <- State.get
  let fields =
        map
          (\n -> NamedField (Lua.Name n) (PrefixExp (PEVar (VarName (Lua.Name n)))))
          (Vector.toList names)
  let exports = TableConst fields
  pure $
    LocalAssign [Lua.Name moduleName] (Just [exports])
