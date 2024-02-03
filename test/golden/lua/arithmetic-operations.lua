-- Mod
local prelude = dofile("./Stdlib/Prelude")

local function main()
  local prim_add0 = 42 + 1
  local prim_sub1 = 1 - 1
  return prim_add0 + prim_sub1
end
local Mod = {main = main}
return Mod