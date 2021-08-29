# Instructions

## nop - 0x01
Does nothing.

No operands.

## int
Fires an interupt, 0-15

1 byte input, upper 4 bits are ignored.

## mov
Moves a value into a register.

1 byte input: Destination operand

1 byte input: Source operand

## jmp
Jumps to the address specified. The address is relative to the active segment, and the segment must also be executible.

1 byte input: Location
## map 
Maps a segment of storage into a buffer in memory.

1 byte input: Location of buffer

1 byte input: Amount of bytes to read

2 byte input: Address to read

Notes: Buffer must be in the active segment, as set by the seg instruction, and the disk must be set by the des instruction.

## seg
Switches the active segment. This instruction changes the segment if no handler for the SEGMENTSWITCH (7) interupt is present. Otherwise, it calls that handler with the segment to the change to in EAX. This is a security feature to prevent memory from being tampered by a user-mode process.

1 byte input: Segment to switch to. Segments are stored as 3-bit values, so the upper 5 bits are ignored.

## out
Outputs a string of bytes. This is defined by the machine implementation, or the virtual machine. Usually it should be defined to output to the display.

1 byte input: Location of string beginning.

1 byte input: Number of bytes to write.

## in
Input into a buffer of bytes. This is defined by the machine implementation, or the virtual machine. Usually it should be defined input from the keyboard.

1 byte input: Location of buffer

1 byte input: Number of bytes to read.
