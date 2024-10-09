-- Mod
local StdlibziPrelude = dofile("./Stdlib/Prelude.lua")
local function Mod_otherfunction2()
  local Mod_x0 = 3
  local Mod_y1 = Mod_x0 + 1
  return Mod_y1 * 3
end
local Mod =
{Mod_otherfunction2 = Mod_otherfunction2}
return Mod
