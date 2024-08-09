-- Module
local StdlibziPrelude = dofile("./Stdlib/Prelude.lua")
local Colour = {Red = {},
                Green = {}, Blue = {}}local function showcolour(colour)
  local table0 = {Red = "red",
                  Green = "green", Blue = "blue"}
  ;
  return table0[colour]
end
local Module =
{showcolour = showcolour,
 Colour = Colour}
return Module
