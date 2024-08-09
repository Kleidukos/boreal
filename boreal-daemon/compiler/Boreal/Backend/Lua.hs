module Boreal.Backend.Lua where

import Control.Concurrent.Counter qualified as Counter
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
import Language.Lua (Binop (..), Block (..), Exp (..), FunBody (..), TableField (..))
import Language.Lua.PrettyPrinter
import Language.Lua.Syntax qualified as Lua
import System.FilePath ((<.>), (</>))
import Text.Encoding.Z (zEncodeString)

import Boreal.Backend.Lua.Types
import Boreal.Frontend.Syntax (Name)
import Boreal.Frontend.Syntax qualified as Boreal
import Boreal.IR.ANFCore.Types
import Boreal.IR.RawCore
import Boreal.IR.Types
import Language.Lua.Syntax (Stat (..))
import Prelude hiding (EQ, GT, LT)

runLua :: FilePath -> Module ANFCore -> IO Text
runLua libDir anfModule = do
  counter <- Counter.new 0
  runEff
    . Reader.runReader (ModuleInfo anfModule.moduleName)
    . Reader.runReader counter
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
      let moduleName = Text.pack $ zEncodeString $ Text.unpack anfModule.moduleName
      exportList' <- mkExportList
      let exportList = show . pprint $ Block (List.singleton exportList') Nothing
      let exportModule = "return " <> Text.unpack moduleName
      typeDeclarations <- codegen luaTypeDeclarations
      topLevelFunctions <- codegen luaTopLevelFunctions
      pure $
        Text.pack $
          mconcat $
            ["-- ", Text.unpack anfModule.moduleName, "\n"]
              <> importStatements
              <> typeDeclarations
              <> topLevelFunctions
              <> ["\n", exportList]
              <> ["\n", exportModule, "\n"]

renderImportStatement :: FilePath -> ImportStatement -> Text
renderImportStatement libDir importStatement =
  let modulePath =
        importStatement.importedModule
          & Text.replace "." "/"
          & Text.unpack
      moduleName = zEncodeString $ Text.unpack importStatement.importedModule
   in Text.pack $ "local " <> moduleName <> " = dofile(\"" <> libDir </> modulePath <.> "lua\")\n"

typeDeclarationToLua
  :: Boreal.Name
  -> Vector Boreal.Name
  -> LuaEff Lua.Stat
typeDeclarationToLua name constructors = do
  let fields = Vector.toList $ Vector.map constructorToTableMember constructors
  addNameToEnvironment name
  pure $
    Lua.LocalAssign [Lua.Name name] (Just [Lua.TableConst fields])

constructorToTableMember :: Boreal.Name -> Lua.TableField
constructorToTableMember name =
  Lua.NamedField (Lua.Name name) (Lua.TableConst [])

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
terminalValueToLua (AVar var) = Lua.PrefixExp $ Lua.PEVar (Lua.VarName (Lua.Name var))

complexValueToLua :: ComplexValue -> Exp
complexValueToLua (AApp fun arguments) =
  case fun of
    "+" -> nativeLuaBinOp Add (arguments Vector.! 0) (arguments Vector.! 1)
    "-" -> nativeLuaBinOp Sub (arguments Vector.! 0) (arguments Vector.! 1)
    "*" -> nativeLuaBinOp Mul (arguments Vector.! 0) (arguments Vector.! 1)
    "/" -> nativeLuaBinOp Div (arguments Vector.! 0) (arguments Vector.! 1)
    "<" -> nativeLuaBinOp LT (arguments Vector.! 0) (arguments Vector.! 1)
    "<=" -> nativeLuaBinOp LTE (arguments Vector.! 0) (arguments Vector.! 1)
    ">" -> nativeLuaBinOp GT (arguments Vector.! 0) (arguments Vector.! 1)
    ">=" -> nativeLuaBinOp GTE (arguments Vector.! 0) (arguments Vector.! 1)
    "==" -> nativeLuaBinOp EQ (arguments Vector.! 0) (arguments Vector.! 1)
    "!=" -> nativeLuaBinOp NEQ (arguments Vector.! 0) (arguments Vector.! 1)
    e -> error $ "Unmatched: " <> show e

functionDeclarationToLua
  :: Boreal.Name
  -> Vector Boreal.Name
  -> ANFCore
  -> LuaEff Lua.Stat
functionDeclarationToLua name arguments body = do
  bodyInstructions <- functionBodyToBlock body
  let funArgs = fmap Lua.Name arguments
  addNameToEnvironment name
  pure $
    LocalFunAssign
      (Lua.Name name)
      (FunBody (Vector.toList funArgs) False bodyInstructions)

functionBodyToBlock :: ANFCore -> LuaEff Lua.Block
functionBodyToBlock body = do
  case body of
    (ALet name expression letBody) -> do
      stats <- Vector.toList <$> letBindingToLua name expression letBody
      FunctionEnvironment{returnValue} <- State.get
      pure $ Block stats (fmap List.singleton returnValue)
    (Halt value) -> do
      returnValue' <- valueToLua value
      addBlockReturnValue returnValue'
      FunctionEnvironment{returnValue} <- State.get
      pure $ Block mempty (fmap List.singleton returnValue)
    (ACase expression alternatives) -> do
      tableName' <- freshName "table"
      let tableName = Lua.Name tableName'
      tableFields <- traverse alternativeToTableField alternatives
      case expression of
        Terminal terminalValue -> do
          let lookedUpExpression = terminalValueToLua terminalValue
          pure $
            Block
              [ Lua.LocalAssign
                  [tableName]
                  (Just [Lua.TableConst (Vector.toList tableFields)])
              ]
              ( Just
                  [ Lua.PrefixExp $
                      Lua.PEVar $
                        Lua.Select (Lua.PEVar (Lua.VarName tableName)) lookedUpExpression
                  ]
              )
        Complex complexValue -> do
          let lookedUpExpression = complexValueToLua complexValue
          accessor <- Lua.Name <$> freshName (tableName' <> "_lookup_")
          pure $
            Block
              [ Lua.LocalAssign
                  [tableName]
                  (Just [Lua.TableConst (Vector.toList tableFields)])

              , Lua.LocalAssign
                  [accessor]
                  (Just [Lua.EFunDef $ FunBody [] False $ Block [] (Just [lookedUpExpression])])
              ]
              ( Just
                  [ Lua.PrefixExp $
                      Lua.PEVar $
                        Lua.Select
                          (Lua.PEVar (Lua.VarName tableName))
                          (Lua.PrefixExp (Lua.PEVar (Lua.VarName accessor)))
                  ]
              )
    e -> error $ "Didn't match on " <> show e

letBindingToLua :: Boreal.Name -> Value -> ANFCore -> LuaEff (Vector Lua.Stat)
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
  let moduleName = Text.pack $ zEncodeString $ Text.unpack moduleInfo.name
  Environment names <- State.get @Environment
  let fields =
        map
          (\n -> NamedField (Lua.Name n) (PrefixExp (Lua.PEVar (Lua.VarName (Lua.Name n)))))
          (Vector.toList names)
  let exports = TableConst fields
  pure $
    LocalAssign [Lua.Name moduleName] (Just [exports])

alternativeToTableField :: CaseAlternative ANFCore -> LuaEff Lua.TableField
alternativeToTableField alternative = do
  let Halt rhs = alternative.rhs
  luaRHS <- valueToLua rhs
  case alternative.lhs of
    Constructor name -> do
      pure $
        NamedField
          (Lua.Name name)
          luaRHS

alternativePatternToLua :: Pattern -> Lua.Exp
alternativePatternToLua (Constructor name) = Lua.String name

freshName :: Text -> LuaEff Name
freshName prefix = do
  counter <- Reader.ask
  number <- liftIO $ Counter.add counter 1
  pure $ prefix <> display number
