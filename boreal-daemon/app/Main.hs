module Main where

import Boreal.Protocol.Request
import Boreal.Protocol.Response
import Boreal.Protocol.Session
import Boreal.Protocol.Types (currentVersion)
import Control.Concurrent.Counter (Counter)
import Control.Concurrent.Counter qualified as Counter
import Control.Monad (forever, unless, void)
import Control.Monad.Catch qualified as C
import Data.Aeson
import Data.ByteString qualified as BS
import Data.Function ((&))
import Data.Set qualified as Set
import Data.Text (Text)
import Data.Text qualified as Text
import Effectful
import Effectful.Concurrent (Concurrent)
import Effectful.Concurrent qualified as Concurrent
import Effectful.Log (Log)
import Effectful.Log qualified as Log
import Effectful.Reader.Static (Reader)
import Effectful.Reader.Static qualified as Reader
import Effectful.State.Static.Shared (State)
import Effectful.State.Static.Shared qualified as State
import Log
import Network.Socket (AddrInfo (..), Family (..), SockAddr (..), Socket, SocketOption (..), SocketType (..))
import Network.Socket qualified as Socket
import Network.Socket.ByteString qualified as Socket
import Options.Applicative hiding (action)
import System.Directory qualified as Directory
import System.Exit qualified as System
import System.FileLock (FileLock, SharedExclusive (..))
import System.FileLock qualified as FileLock
import System.Posix.Daemonize (daemonize)

import Driver qualified
import Driver.CLI
import Driver.Logging qualified as Logging
import Driver.Session

main :: IO ()
main = do
  parseResult <- execParser (parseOptions `withInfo` "Boreal compilation daemon")
  runOptions parseResult

runOptions :: CLIOptions -> IO ()
runOptions CLIOptions{daemon} = do
  if daemon
    then daemonize (Logging.withFileBackend "logs.txt" $ \logger -> runDaemon logger runServer)
    else Logging.withStdoutBackend $ \logger -> runDaemon logger runServer

runServer
  :: ( IOE :> es
     , Log :> es
     , Concurrent :> es
     , Reader Counter :> es
     , State SessionTable :> es
     )
  => Eff es ()
runServer = do
  logInfo_ "Starting boreald"
  lockStatus <- liftIO $ FileLock.tryLockFile "/tmp/boreald.lock" Exclusive
  case lockStatus of
    Nothing -> do
      logInfo_ "Lockfile at /tmp/boreald.lock is already present, which means that boreald is already running"
      liftIO $ System.die "Exiting now…"
    Just fileLock -> do
      let addrInfo =
            AddrInfo
              []
              AF_UNIX
              Stream
              Socket.defaultProtocol
              (SockAddrUnix "/tmp/boreal.sock")
              Nothing
      (C.bracket :: Eff es a -> (a -> Eff es c) -> (a -> Eff es b) -> Eff es b)
        (open fileLock addrInfo)
        (\socket -> shutdown fileLock socket)
        (\socket -> loop fileLock socket)
  where
    open :: (Log :> es, IOE :> es) => FileLock -> AddrInfo -> Eff es Socket
    open fileLock addrInfo =
      (C.bracketOnError :: Eff es a -> (a -> Eff es c) -> (a -> Eff es b) -> Eff es b)
        (liftIO $ Socket.openSocket addrInfo)
        (\socket -> shutdown fileLock socket)
        ( \sock -> do
            liftIO $ do
              Socket.setSocketOption sock ReuseAddr 1
              Socket.withFdSocket sock Socket.setCloseOnExecIfNeeded
              Socket.bind sock (SockAddrUnix "/tmp/boreal.sock")
              Socket.listen sock 1024
            do
              logInfo_ "Starting to listen on at /tmp/boreal.sock"
              pure sock
        )
    loop
      :: ( Reader Counter :> es
         , Concurrent :> es
         , IOE :> es
         , State SessionTable :> es
         , Log :> es
         )
      => FileLock
      -> Socket
      -> Eff es ()
    loop fileLock socket =
      forever $
        (C.bracketOnError :: Eff es a -> (a -> Eff es c) -> (a -> Eff es b) -> Eff es b)
          (liftIO $ Socket.accept socket)
          (\(socket, _) -> shutdown fileLock socket)
          ( \(conn, _peer) ->
              void $
                Concurrent.forkFinally
                  (server conn)
                  (const $ liftIO $ Socket.gracefulClose conn 5000)
          )

shutdown :: (IOE :> es) => FileLock -> Socket -> Eff es ()
shutdown fileLock socket = liftIO $ do
  Socket.close socket
  Directory.removeFile "/tmp/boreal.sock"
  liftIO $ FileLock.unlockFile fileLock

server
  :: ( IOE :> es
     , Reader Counter :> es
     , State SessionTable :> es
     , Log :> es
     )
  => Socket
  -> Eff es ()
server socket = do
  msg <- liftIO $ Socket.recv socket 1024
  case eitherDecodeStrict @Request msg of
    Left errorMessage -> do
      liftIO $ putStrLn errorMessage
      respondDecodingError socket (Text.pack errorMessage)
    Right request -> do
      liftIO $ putStrLn $ "Received request: " <> show request
      guardCurrentVersion socket request.protocolVersion
      case request.command of
        RegisterClient -> do
          sessionId <- nextSessionId
          registerSessionId sessionId
          respondClientRegistered socket sessionId
        DeregisterClient sessionId -> do
          deregisterSessionId sessionId
        EmitLua sourceFile destinationPath -> do
          compiledFilePath <- Driver.emitLua sourceFile destinationPath
          respondCompilationSuccess socket compiledFilePath
        CleanProject buildDir -> do
          Driver.cleanProject buildDir
          respondProjectCleaned socket
        PurgeCache cachePath -> do
          Driver.purgeCache cachePath
          respondCachePurged socket

guardCurrentVersion :: (Log :> es, IOE :> es) => Socket -> Word -> Eff es ()
guardCurrentVersion socket actualVersion = do
  unless (actualVersion == currentVersion) $
    respondProtocolMismatchError socket currentVersion actualVersion

respondClientRegistered :: (IOE :> es) => Socket -> SessionId -> Eff es ()
respondClientRegistered socket sessionId = do
  let payload = ClientRegistered sessionId
  let response = BS.toStrict $ encode $ Response currentVersion payload
  liftIO $ Socket.sendAll socket response

respondProtocolMismatchError :: (Log :> es, IOE :> es) => Socket -> Word -> Word -> Eff es ()
respondProtocolMismatchError socket expectedVersion actualVersion = do
  logInfo_ "Protocol mismatch error"
  let payload = ProtocolMismatch expectedVersion actualVersion
  let response = BS.toStrict $ encode $ Response currentVersion payload
  liftIO $ Socket.sendAll socket response

respondDecodingError :: (IOE :> es) => Socket -> Text -> Eff es ()
respondDecodingError socket message = do
  let payload = ProtocolDecodingError message
  let response = Response currentVersion payload
  liftIO $ Socket.sendAll socket (BS.toStrict $ encode response)

respondCompilationSuccess
  :: (IOE :> es)
  => Socket
  -> FilePath
  -> Eff es ()
respondCompilationSuccess socket resultLocation = do
  let payload = CompilationSuccess resultLocation
  let response = BS.toStrict $ encode $ Response currentVersion payload
  liftIO $ Socket.sendAll socket response

respondProjectCleaned :: (IOE :> es) => Socket -> Eff es ()
respondProjectCleaned socket = do
  let payload = ProjectCleaned
  let response = BS.toStrict $ encode $ Response currentVersion payload
  liftIO $ Socket.sendAll socket response

respondCachePurged :: (IOE :> es) => Socket -> Eff es ()
respondCachePurged socket = do
  let payload = CachePurged
  let response = Response currentVersion payload
  liftIO $ Socket.sendAll socket (BS.toStrict $ encode response)

runDaemon :: Logger -> Eff [Concurrent, Log, State SessionTable, Reader Counter, IOE] a -> IO a
runDaemon logger action = do
  counter <- liftIO $ Counter.new 0
  action
    & Concurrent.runConcurrent
    & Log.runLog "boreald" logger Log.defaultLogLevel
    & State.evalState Set.empty
    & Reader.runReader counter
    & runEff
