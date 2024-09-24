-- Module
local StdlibziPrelude = dofile("./Stdlib/Prelude.lua")
local function main()
  local table0 =
  {True = "incoherent??",
   False = "yea fair."}
  local table0_lookup_1 =
  function () return 3 < 2 end
  return table0[table0_lookup_1]
end
local Module = {main = main}
return Module
