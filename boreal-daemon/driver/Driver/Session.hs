module Driver.Session where

import Control.Concurrent.Counter
import Control.Concurrent.Counter qualified as Counter
import Data.Set qualified as Set
import Effectful
import Effectful.Reader.Static (Reader)
import Effectful.Reader.Static qualified as Reader
import Effectful.State.Static.Shared (State)
import Effectful.State.Static.Shared qualified as State

import Boreal.Protocol.Session

nextSessionId :: (IOE :> es, Reader Counter :> es) => Eff es SessionId
nextSessionId = do
  counter <- Reader.ask
  nextId <- liftIO $ Counter.add counter 1
  pure $ SessionId (fromIntegral @Int @Word nextId)

registerSessionId :: (State SessionTable :> es, IOE :> es) => SessionId -> Eff es ()
registerSessionId sessionId = do
  liftIO $ putStrLn $ "Registering client with session Id: " <> show sessionId
  State.modify $ \table ->
    Set.insert sessionId table

deregisterSessionId :: (State SessionTable :> es, IOE :> es) => SessionId -> Eff es ()
deregisterSessionId sessionId = do
  liftIO $ putStrLn $ "Deregistering client with session Id: " <> show sessionId
  State.modify $ \table ->
    Set.delete sessionId table
