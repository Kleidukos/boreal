-- Module
local prelude = dofile("./Stdlib/Prelude.lua")

local function main1()
  local prim_add0 = 2 + 3
  return 1 - prim_add0
end
local function main2()
  local prim_sub0 = 1 - 2
  return prim_sub0 + 3
end
local Module = {main2 = main2,
                main1 = main1}
return Module