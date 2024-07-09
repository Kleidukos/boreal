; module Mod

section .text
global _boreal_main

_boreal_main:
  JMP boreal_main

boreal_main:
    MOV RAX, 1
    ADD RAX, 2