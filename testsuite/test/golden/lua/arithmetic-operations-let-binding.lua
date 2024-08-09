-- Mod
local StdlibziPrelude = dofile("./Stdlib/Prelude.lua")
local function otherfunction()
  local x = 3
  local y = x + 1
  return y * 3
end
local Mod =
{otherfunction = otherfunction}
return Mod
