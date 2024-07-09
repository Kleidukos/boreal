module Client where

import Control.Exception qualified as E
import Data.Aeson
import Effectful
import Network.Socket (AddrInfo (..), Family (..), SockAddr (..), Socket, SocketType (..))
import Network.Socket qualified as Socket
import Network.Socket.ByteString.Lazy qualified as Socket

import Boreal.Protocol.Request
import Boreal.Protocol.Response
import Boreal.Protocol.Session
import Boreal.Protocol.Types (currentVersion)
import Control.Monad (void)
import Data.ByteString.Lazy qualified as BSL

compileToLua
  :: (IOE :> es)
  => FilePath
  -> FilePath
  -> Eff es ()
compileToLua destinationBuildDir sourceFile = do
  let payload = EmitLua sourceFile destinationBuildDir
  response <- request payload
  case response.payload of
    CompilationSuccess compiledFile -> do
      liftIO $ putStrLn $ "File compiled to " <> compiledFile
      pure ()
    Empty -> pure ()
    e -> error $ show e
  pure ()

cleanProject :: (IOE :> es) => FilePath -> Eff es ()
cleanProject filePath = do
  let payload = CleanProject filePath
  response <- request payload
  case response.payload of
    ProjectCleaned -> pure ()
    e -> error $ show e

purgeCache :: (IOE :> es) => FilePath -> Eff es ()
purgeCache filePath = do
  let payload = PurgeCache filePath
  _response <- request payload
  pure ()

withSession :: (IOE :> es) => (SessionId -> Eff es a) -> Eff es ()
withSession action = do
  sessionId <- registerClient
  action sessionId
  deregisterClient sessionId

registerClient :: (IOE :> es) => Eff es SessionId
registerClient = do
  let payload = RegisterClient
  response <- request payload
  let ClientRegistered sessionId = response.payload
  pure sessionId

deregisterClient :: (IOE :> es) => SessionId -> Eff es ()
deregisterClient sessionId = do
  let payload = DeregisterClient sessionId
  void $ request payload

request :: (IOE :> es) => RequestPayload -> Eff es Response
request payload =
  withSocket $ \socket -> do
    let requestPayload = encode $ Request currentVersion payload
    Socket.sendAll socket requestPayload
    receive socket

receive :: Socket -> IO Response
receive socket = do
  message <- Socket.recv socket 4096
  if BSL.null message
    then receive socket
    else case eitherDecode @Response message of
      Left errorMessage -> error errorMessage
      Right response -> pure response

withSocket :: (IOE :> es) => (Socket -> IO a) -> Eff es a
withSocket action =
  liftIO $
    E.bracket open Socket.close action

open :: IO Socket
open = do
  let addrInfo =
        AddrInfo
          []
          AF_UNIX
          Stream
          Socket.defaultProtocol
          (SockAddrUnix "/tmp/boreal.sock")
          Nothing
  E.bracketOnError (Socket.openSocket addrInfo) Socket.close $ \sock -> do
    Socket.connect sock addrInfo.addrAddress
    pure sock
