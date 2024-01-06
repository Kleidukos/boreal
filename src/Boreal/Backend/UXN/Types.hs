module Boreal.Backend.UXN.Types where

import Data.Text (Text)
import Data.Word (Word8)
import Text.Ascii (AsciiText)

data UXNInstruction
  = Padding Text
  | RelativePadding Word8
  | Literal Word8
  | Ascii AsciiText
  | Label Text
  | SubLabel Text
  | LiteralAbsolute Text
  | OpCode OpCode

data OpCode
  = -- | Break. Ends the evalutation of the current vector. This opcode has no modes.
    BRK
  | -- | Jump Conditional Instant. Pops a byte from the working stack and if it is not zero, moves the PC to a relative address at a distance equal to the next short in memory, otherwise moves PC+2. This opcode has no modes.
    JCI
  | -- | Jump Instant. Moves the PC to a relative address at a distance equal to the next short in memory. This opcode has no modes.
    JMI
  | -- | Jump Stash Return Instant. Pushes PC+2 to the return-stack and moves the PC to a relative address at a distance equal to the next short in memory. This opcode has no modes.
    JSI
  | -- | Literal. Pushes the next bytes in memory, and moves the PC+2. The LIT opcode always has the /keep/ mode active. Notice how the 0x00 opcode, with the /keep/ bit toggled, is the location of the literal opcodes.
    LIT
  | -- | Increments the value at the top of the stack, by 1.
    -- @INC a -- a+1@
    INC
  | -- | Removes the value at the top of the stack.
    -- @POP a -- @
    POP
  | -- | Removes the second value from the stack. This is practical to convert a short into a byte.
    -- @POP a b -- b@
    NIP
  | -- | Swap. Exchanges the first and second values at the top of the stack.
    -- @SWP a b -- b a@
    SWP
  | -- | Rotates three values at the top of the stack, to the left, wrapping around.
    -- @ROT a b c -- b c a@
    ROT
  | -- | Duplicates the value at the top of the stack.
    -- @DUP a -- a a@
    DUP
  | -- | Duplicates the second value at the top of the stack.
    -- @OVR a b -- a b a@
    OVR
  | -- | Pushes 01 to the stack if the two values at the top of the stack are equal, 00 otherwise.
    -- @EQU a b -- bool8@
    EQU
  | -- | Pushes 01 to the stack if the two values at the top of the stack are not equal, 00 otherwise.
    -- @NEQ a b -- bool8@
    NEQ
  | -- | Pushes 01 to the stack if the second value at the top of the stack is greater than the value at the top of the stack, 00 otherwise.
    -- @GTH a b -- bool8@
    GTH
  | -- | Pushes 01 to the stack if the second value at the top of the stack is lesser than the value at the top of the stack, 00 otherwise.
    -- @LTH a b -- bool8@
    LTH
  | -- | Moves the PC by a relative distance equal to the signed byte on the top of the stack, or to an absolute address in short mode
    JMP
  | -- | If the byte preceeding the address is not 00, moves the PC by a signed value equal to the byte on the top of the stack, or to an absolute address in short mode.
    -- @JCN cond8 addr --@
    JCN
  | -- | Jump Stash Return. Pushes the PC to the return-stack and moves the PC by a signed value equal to the byte on the top of the stack, or to an absolute address in short mode.
    JSR
  | -- | Stash. Moves the value at the top of the stack, to the return stack.
    STH
  | -- | Load Zero-Page. Pushes the value at an address within the first 256 bytes of memory, to the top of the stack.
    -- @LDZ addr8 -- value@
    LDZ
  | -- | Store Zero-Page. Writes a value to an address within the first 256 bytes of memory.
    -- @STZ val addr8 --@
    STZ
  | -- | Load Relativ. Pushes a value at a relative address in relation to the PC, within a range between -128 and +127 bytes, to the top of the stack.
    -- @LDR addr8 -- value@
    LDR
  | -- | Store Relative. Writes a value to a relative address in relation to the PC, within a range between -128 and +127 bytes.
    -- @STR val addr8 --@
    STR
  | -- | Pushes the value at a absolute address, to the top of the stack.
    -- @LDA addr16 -- value@
    LDA
  | -- | Store Absolute. Writes a value to a absolute address.
    -- @STR val addr8 --@
    STA
  | -- | Pushes a value from the device page, to the top of the stack. The target device might capture the reading to trigger an I/O event.
    -- @DEI device8 -- value@
    DEI
  | -- | Writes a value to the device page. The target device might capture the writing to trigger an I/O event.
    -- @DEO val device8 --@
    DEO
  | -- | Pushes the sum of the two values at the top of the stack.
    -- @ADD a b -- a+b@
    ADD
  | -- | Pushes the difference of the first value minus the second, to the top of the stack.
    -- @SUB a b -- a-b@
    SUB
  | -- | Pushes the product of the first and second values at the top of the stack.
    -- @MUL a b -- a*b@
    MUL
  | -- | Pushes the quotient of the first value over the second, to the top of the stack. A division by zero pushes zero on the stack. The rounding direction is toward zero.
    -- @DIV a b -- a/b@
    DIV
  | -- | Pushes the result of the bitwise operation AND, to the top of the stack.
    -- @AND a b -- a&b@
    AND
  | -- | Pushes the result of the bitwise operation OR, to the top of the stack.
    -- @ORA a b -- a|b@
    ORA
  | -- | Shifts the bits of the second value of the stack to the left or right, depending on the control value at the top of the stack. The high nibble of the control value indicates how many bits to shift left, and the low nibble how many bits to shift right. The rightward shift is done first.
    -- @SFT a shift8 -- c@
    SFT
  deriving stock (Eq, Ord, Show)
