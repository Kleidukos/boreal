; module Mod

section .text
global _boreal_main

_boreal_main:
  JMP boreal_main

boreal_main:
    MOV RAX, 42
    ADD RAX, 1
    MOV [RSP - 8 * 1], RAX
    MOV RAX, 1
    SUB RAX, 1
    MOV [RSP - 8 * 2], RAX
    MOV RAX, [RSP - 8 * 1]
    ADD RAX, [RSP - 8 * 2]