module Driver.Cache
  ( hashFile
  , writeCache
  , readCache
  , getCachePath
  )
where

import Data.ByteString (StrictByteString)
import Data.ByteString.Char8 qualified as BSC
import Driver.BuildFlags
import Effectful
import Effectful.FileSystem (FileSystem, XdgDirectory (..))
import Effectful.FileSystem qualified as FileSystem
import Effectful.FileSystem.IO.ByteString qualified as EBS
import Sel.Hashing qualified as Sel
import System.Directory qualified as Directory
import System.FilePath ((<.>), (</>))
import System.FilePath qualified as FilePath

getCachePath :: (FileSystem :> es) => Eff es FilePath
getCachePath = do
  prefix <- FileSystem.getXdgDirectory XdgCache ""
  pure $ prefix </> "boreal/store"

hashFile
  :: (FileSystem :> es, IOE :> es)
  => BuildFlags
  -> FilePath
  -- ^ File path in the project
  -> Eff es StrictByteString
hashFile buildFlags projectFile = do
  fileContent <- EBS.readFile projectFile
  result <- Sel.withMultipart Nothing $ \multipart -> do
    Sel.updateMultipart multipart fileContent
    Sel.updateMultipart multipart (buildFlagsToByteString buildFlags)
  pure $ Sel.hashToHexByteString result

writeCache
  :: (FileSystem :> es, IOE :> es)
  => BuildFlags
  -> FilePath
  -> StrictByteString
  -> Eff es ()
writeCache buildFlags projectFilePath content = do
  hash <- hashFile buildFlags projectFilePath
  let fileName = FilePath.takeBaseName projectFilePath <.> "lua"
  cachePath <- getCachePath
  FileSystem.createDirectoryIfMissing True (cachePath </> BSC.unpack hash)
  EBS.writeFile (cachePath </> BSC.unpack hash </> fileName) content

readCache
  :: (FileSystem :> es, IOE :> es)
  => BuildFlags
  -> FilePath
  -> Eff es (Maybe FilePath)
readCache buildFlags projectFilePath = do
  let fileName = FilePath.takeBaseName projectFilePath <.> "lua"
  hash <- hashFile buildFlags projectFilePath
  cachePath <- getCachePath
  let cachedFilePath = cachePath </> BSC.unpack hash </> fileName
  cachedFileExists <- liftIO $ Directory.doesFileExist cachedFilePath
  if cachedFileExists
    then pure $ Just cachedFilePath
    else pure Nothing
