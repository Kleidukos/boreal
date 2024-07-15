{-# LANGUAGE ScopedTypeVariables #-}
{-# LANGUAGE TypeFamilies #-}
{-# LANGUAGE UndecidableInstances #-}
{-# OPTIONS_GHC -Wno-orphans #-}

module Boreal.Effect.Rock where

import Effectful
import Effectful.Dispatch.Dynamic
import Rock qualified

data Rock :: Effect where
  RunTask :: Rock.Task f a -> Rock m a
  Fetch :: f a
    -> Rock m a
    -- ^ f ~ Query in boreal

type instance DispatchOf Rock = Dynamic

runTask :: (Rock :> es) => Eff es (Rock.Task f a) -> Eff es a
runTask action = do
  result <- action
  send $ RunTask result

fetch :: (Rock :> es) => f a -> Eff es a
fetch query = send $ Fetch query

runTaskIO
  :: (IOE :> es)
  => (f a -> Eff es a)
  -- ^ Interpreter for the queries
  -> Eff (Rock : es) a
  -- ^ Action
  -> Eff es a
runTaskIO rules = interpret $ \_ -> \case
  RunTask _task -> undefined
  Fetch query -> undefined

instance (Rock.MonadFetch f (Eff es), Rock :> es) => Rock.MonadFetch f (Eff es) where
  fetch key = send $ Fetch key
