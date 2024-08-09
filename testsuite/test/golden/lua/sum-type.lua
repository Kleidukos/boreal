-- Module
local StdlibziPrelude = dofile("./Stdlib/Prelude.lua")
local FirstziSecondziThird = dofile("./First/Second/Third.lua")
local Ordering = {LT = {},
                  EQ = {}, GT = {}}
local Module =
{Ordering = Ordering}
return Module
