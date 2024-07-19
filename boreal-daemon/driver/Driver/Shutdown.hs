module Driver.Shutdown
  ( monitorSessionTable
  , shutdownServer
  ) where

import Effectful
import Effectful.Log qualified as Log
import System.Directory qualified as Directory
import System.FileLock qualified as FileLock
import Data.Text.Display (display)
import System.FileLock
import Network.Socket (Socket)
import Network.Socket qualified as Socket
import Effectful.State.Static.Shared (State)
import Effectful.Concurrent (Concurrent)
import Effectful.Concurrent qualified as Concurrent
import qualified Effectful.State.Static.Shared as State
import qualified Data.Set as Set
import Control.Concurrent (ThreadId)

import Boreal.Protocol.Session (SessionTable)
import Effectful.Log (Log, (.=), object)

-- | This function does the following:
--
-- * Wait 1 second
-- * Check the session table for connected clients
-- * If empty, wait fifteen seconds
--   *  If after fifteen seconds it is still empty, shutdown the server
--   * If there are clients again, loop
-- * If not empty, loop
monitorSessionTable
  :: ( State SessionTable :> es
     , IOE :> es
     , Concurrent :> es
     , Log :> es
     )
  => ThreadId
  -> Eff es ()
monitorSessionTable mainThreadId = do
  monitorThreadId <- Concurrent.myThreadId
  Concurrent.threadDelay 3_000_000
  noClients <- State.gets @SessionTable Set.null
  if noClients
  then do
    Concurrent.threadDelay 15_000_000
    noClientsAgain <- State.gets @SessionTable Set.null
    if noClientsAgain
    then do
      Log.logTrace "Stopping daemon" $
        object 
          [ "monitor_thread_id" .= display (show monitorThreadId)
          , "main_thread_id" .= display (show mainThreadId)
          ]
      Concurrent.killThread mainThreadId
    else monitorSessionTable mainThreadId
  else monitorSessionTable mainThreadId

shutdownServer
  :: ( IOE :> es
     , Log :> es
     )
  => FileLock
  -> Socket
  -> Eff es ()
shutdownServer fileLock socket = do
  Log.logInfo_ "Shutting down…"
  liftIO $ do
    Socket.close socket
    Directory.removeFile "/tmp/boreal.sock"
    FileLock.unlockFile fileLock
