module Boreal.Client
  ( compileToLua
  , cleanProject
  , purgeCache
  , withSession
  ) where

import Control.Exception qualified as E
import Control.Monad (void)
import Data.Aeson
import Data.ByteString.Lazy qualified as BSL
import Effectful
import Network.Socket (AddrInfo (..), Family (..), SockAddr (..), Socket, SocketType (..))
import Network.Socket qualified as Socket
import Network.Socket.ByteString.Lazy qualified as Socket

import Boreal.Protocol.Request
import Boreal.Protocol.Response
import Boreal.Protocol.Session
import Boreal.Protocol.Types (currentVersion)

compileToLua
  :: (IOE :> es)
  => FilePath
  -> FilePath
  -> Eff es ()
compileToLua destinationBuildDir sourceFile = do
  let payload = EmitLua sourceFile destinationBuildDir
  mResponse <- request payload
  case mResponse of
    Nothing -> error "Expected build artefact path"
    Just response -> do
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
  mResponse <- request payload
  case mResponse of
    Nothing -> error "Expected response ProjectCleaned"
    Just response ->
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
  liftIO $ putStrLn $ "Starting a session with session Id " <> show sessionId
  action sessionId
  deregisterClient sessionId

registerClient :: (IOE :> es) => Eff es SessionId
registerClient = do
  liftIO $ putStrLn "Registering client"
  let payload = RegisterClient
  mResponse <- request payload
  case mResponse of
    Nothing -> error "ah!"
    Just response -> do
      liftIO $ putStrLn "Client registered"
      let ClientRegistered sessionId = response.payload
      pure sessionId

deregisterClient :: (IOE :> es) => SessionId -> Eff es ()
deregisterClient sessionId = do
  liftIO $ putStrLn $ "De-registering client " <> show sessionId
  let payload = DeregisterClient sessionId
  void $ request payload

request :: (IOE :> es) => RequestPayload -> Eff es (Maybe Response)
request payload =
  withSocket $ \socket -> do
    let requestPayload = encode $ Request currentVersion payload
    Socket.sendAll socket requestPayload
    receive socket

receive :: Socket -> IO (Maybe Response)
receive socket = do
  putStrLn "Receiving response"
  message <- Socket.recv socket 4096
  if BSL.null message
    then pure Nothing
    else case eitherDecode @Response message of
      Left errorMessage -> error errorMessage
      Right response -> pure $ Just response

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
