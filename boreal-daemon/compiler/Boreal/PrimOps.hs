module Boreal.PrimOps
  ( BinOp (..)
  , primAdd
  , primSub
  , primMul
  , primDiv
  , primLT
  , primLTE
  , primGT
  , primGTE
  , primEQ
  , primNEQ
  , primops
  ) where

import Data.Map (Map)
import Data.Map qualified as Map
import Data.Text (Text)
import GHC.Generics (Generic)

import Boreal.IR.Types

data BinOp = BinOp
  { operator :: Name
  , alias :: Text
  }
  deriving stock (Eq, Show, Ord, Generic)

primops :: Map UnqualifiedName BinOp
primops =
  Map.fromList
    [ ("+", primAdd)
    , ("-", primSub)
    , ("*", primMul)
    , ("/", primDiv)
    , ("<", primLT)
    , ("<=", primLTE)
    , (">", primGT)
    , (">=", primGTE)
    , ("==", primEQ)
    , ("!=", primNEQ)
    ]

mkPrimOp :: Text -> Text -> BinOp
mkPrimOp name alias =
  let operator =
        Name
          { moduleOrigin = ModuleName ""
          , name
          , unique = 0
          }
   in BinOp operator alias

primAdd :: BinOp
primAdd = mkPrimOp "+" "prim_add"

primSub :: BinOp
primSub = mkPrimOp "-" "prim_sub"

primMul :: BinOp
primMul = mkPrimOp "*" "prim_mul"

primDiv :: BinOp
primDiv = mkPrimOp "/" "prim_div"

primLT :: BinOp
primLT = mkPrimOp "<" "prim_lt"

primLTE :: BinOp
primLTE = mkPrimOp "<=" "prim_lte"

primGT :: BinOp
primGT = mkPrimOp ">" "prim_gt"

primGTE :: BinOp
primGTE = mkPrimOp ">=" "prim_gte"

primEQ :: BinOp
primEQ = mkPrimOp "==" "prim_eq"

primNEQ :: BinOp
primNEQ = mkPrimOp "!=" "prim_neq"
