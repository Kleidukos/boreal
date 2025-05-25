module Boreal.Frontend.ImportResolution where

import Boreal.Frontend.Syntax (Syntax (..))
import Boreal.IR.Types
import Data.Foldable (traverse_)
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Effectful
import Effectful.State.Static.Local (State)
import Effectful.State.Static.Local qualified as State

getImportStatementsFromModule
  :: Syntax
  -> Vector ImportStatement
getImportStatementsFromModule (BorealNode _ "source" children) = runPureEff . State.execState Vector.empty $ do
  let topLevelDeclarations = children Vector.! 1
  case topLevelDeclarations of
    BorealNode _ "top_level_declarations" decls -> do
      traverse_ extractImports decls

extractImports :: (State (Vector ImportStatement) :> es) => Syntax -> Eff es ()
extractImports (BorealNode _ "import_declaration" declaration) = do
  let BorealIdent _ "import" = declaration Vector.! 0
  let BorealIdent _ moduleName = declaration Vector.! 1
  let importStatement = ImportStatement (ModuleName moduleName)
  State.modify (\imports -> Vector.snoc imports importStatement)
