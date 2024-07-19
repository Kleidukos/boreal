module Driver.Logging where

import Data.ByteString.Char8 qualified as BS
import Data.Text.Encoding (encodeUtf8)
import Effectful
import Log
import Log.Internal.Logger (withLogger)
import System.IO (stdout)
import qualified Data.Text.IO as Text

withFileBackend 
  :: FilePath
  -> (Logger -> IO a)
  -> IO a
withFileBackend destinationFile action = withRunInIO $ \unlift -> do
  liftIO $ BS.hPutStrLn stdout $ BS.pack $ "Redirecting logs to " <> destinationFile
  logger <- liftIO $ Log.mkLogger "boreal-daemon" $ \msg -> liftIO $ do
    BS.appendFile destinationFile (encodeUtf8 $ showLogMessage Nothing msg)
  withLogger logger (unlift . action)

withStdoutBackend 
  :: (Logger -> IO a)
  -> IO a
withStdoutBackend action = withRunInIO $ \unlift -> do
  logger <- liftIO $ Log.mkLogger "boreal-daemon" $ \msg -> liftIO $ do
    Text.putStrLn $ showLogMessage Nothing msg
  withLogger logger (unlift . action)
