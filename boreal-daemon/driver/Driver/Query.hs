{-# LANGUAGE GADTs #-}
{-# LANGUAGE TemplateHaskell #-}

module Driver.Query where

import Data.GADT.Compare.TH (deriveGEq)
import Data.Hashable
import Data.Some

import Boreal.IR.ANFCore.Types (ANFCore)
import Boreal.IR.RawCore.Types (RawCore)
import Boreal.IR.Types

data Query a where
  ParseFile :: FilePath -> Query (Module RawCore)
  CompileANF :: FilePath -> Query (Module ANFCore)
  EmitLua
    :: FilePath 
      -- ^ Build directory
    -> FilePath
      -- ^ Source file path
    -> Query FilePath
  CleanProject :: FilePath -> Query ()
  PurgeCache :: FilePath -> Query ()

deriving instance Eq (Query a)
deriving instance Show (Query a)
deriveGEq ''Query

instance Hashable (Query a) where
  hashWithSalt salt query =
    case query of
      ParseFile{} -> hashWithSalt salt (0 :: Int)
      CompileANF{} -> hashWithSalt salt (1 :: Int)
      EmitLua{} -> hashWithSalt salt (2 :: Int)
      CleanProject{} -> hashWithSalt salt (3 :: Int)
      PurgeCache{} -> hashWithSalt salt (4 :: Int)

instance Hashable (Some Query) where
  hashWithSalt salt (Some query) = hashWithSalt salt query
