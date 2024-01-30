-- This module is imported by all generated lua modules
local prelude = {}

local enum = function(keys)
    local Enum = {}
    for _, value in ipairs(keys) do
        Enum[value] = {}
    end
    return Enum
end

prelude.Bool = enum { "True", "False" }

return prelude
