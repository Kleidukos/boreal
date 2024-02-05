-- Mod
local prelude = dofile("./Stdlib/Prelude.lua")

local function main()
  local x = 42 + 1
  local prim_sub0 = 1 - 1
  return x + prim_sub0
end
local Mod = {main = main}
return Mod