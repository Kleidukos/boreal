-- Mod
local prelude = dofile("./Stdlib/Prelude.lua")

local function main()
  return 1 + 2
end
local Mod = {main = main}
return Mod
