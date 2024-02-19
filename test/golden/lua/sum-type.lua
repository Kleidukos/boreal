-- Module
local prelude = dofile("./Stdlib/Prelude.lua")

local Ordering = {LT = {},
                  EQ = {}, GT = {}}
local Module =
{Ordering = Ordering}
return Module
