---
title: Simulator
summary: Manipulate a simulated CPU
---

In this assignment, you will get to know a CPU at the logic gate level,
and then make changes to its design. You are welcome to work alone or in
small groups; if you choose to work in a group, make sure each person
contributes something interesting to the final design, and include a
note about who was in the group and what role each person had.

## Initial exploration

To get started, download [Logisim](http://www.cburch.com/logisim/), which
is a simulator of logic circuits. Then, download my implementation of the
[Little Computer](Little%20Computer.circ), open it up, and have a look.
I have written some test programs you might try running:

* [Add two numbers](add.dat)
* [Count down using BRZ](countdown.dat)
* [Count down using BRP](countdown2.dat)

To run a sample program, right click on the RAM component, choose “Load
image…” from the menu, and select a file like one of the images above.
You can edit the memory directly using the “Edit contents…” menu
item, and save your own images using “Save image…” menu item.
(The memory images are also in a fairly human-readable text format,
which I sometimes find more convenient just to edit in a text editor.)

This implementation has some differences from the original [Little
Computer architecture].  The Little Computer was designed for teaching
to students who might not yet be familiar with binary, so it is very
much a decimal machine. However, this implementation is adapted for
binary equipment. In the original, the part of an instruction that
represents the operation is a single decimal digit, and the part of
an instruction that can represent an address is two decimal digits
(allowing 100 total memory locations).  In this implementation, the
operation is one hexadecimal digit (four bits), and the address is two
hexadecimal digits (eight bits, allowing 256 total memory locations).
This translation should be fairly straightforward, since the memory view
shows hexadecimal values and the operations all have the same codes; you
will just have to remember that the two-digit operand is in hexadecimal
rather than decimal, so an operation you would have written as "510"
in the original architecture should be written "50a" here.

  [Little Computer architecture]: http://computerscience.chemeketa.edu/cs160Reader/ProgrammingLanguages/LittleComputer1.html

The main circuit is made of the following significant components:

* The Arithmetic Logic Unit (ALU), which does the work of handling numbers
* The memory of 256 locations, each capable of storing an instruction or any other 12-bit number
* The Accumulator, Instruction Register, and Program Counter, as per the Little Computer architecture
* The successor register, which is used to temporarily store the address of the instruction after the current one
* The Control Unit (CU), which coordinates all the other components

The memory has an A input for the address of memory to read or write.
The value at memory location A comes out the D output. There is also an
input labeled D, which is the value to write over that location if the
str input is 1.

In places where there are choices to be made, there are also
multiplexers. In a few places, there are "bit extenders", which convert
between 8-bit addresses and 12-bit numbers by simply padding with zeroes
or chopping them off.  Finally, there is a clock to synchronize all
the components.

### Inside the Control Unit

The control unit is a multicycle design, which goes through two phases in the
execution of each instruction:

1. Fetch, in which the instruction to execute is fetched from the memory location addressed by the the PC and placed in the IR; simultaneously, the ALU calculates PC+1 and stores the result in the successor register.
2. Execute, in which the instruction's effects take place and the PC is updated to the successor (or to the branch target, if a branch is taken).

Inside the control unit is a counter which simply goes back and forth
between 0 (meaning Fetch) and 1 (meaning Execute) to keep track of
the phase.  The control unit takes three inputs: the clock signal, the
output of the ALU to be used for deciding branches (explained later),
and the value of the IR so it knows what to do in the Execute phase. The
IR value is split into the opcode (the first hexadecimal digit), which
is sent to a decoder to simplify reasoning about which instruction it
is, and the operand (the last two hexadecimal digits), which is sent as
output. The control unit's other outputs go to the select inputs of the
various multiplexers in the rest of the CPU to choose what happens on
each clock cycle.

### Inside the ALU

The ALU has an input A (the left operand of whatever operation is to be
performed), an input B (the right operand), an output C (for the result),
and an input op (a two-bit encoding of which operation to perform). The
codes for op are:

* 00: C = A + B
* 01: C = A - B
* 10: C = 1 if A == B, else 0
* 11: C = 1 if A >= B, else 0

The ALU performs the obvious operations for ADD and SUB instructions,
and it also works for the BRZ and BRP conditional branches to calculate
whether the condition is true.

During the fetch phase, the ALU computes PC + 1. This is done in the
fetch phase because the ALU wouldn't be doing anything during that
phase otherwise, and it is usually busy with other computation during
the execute phase. Some designs use a separate, dedicated adder for
finding the next instruction, but often the ALU is used.

### The instructions

The same thing happens in Fetch regardless of instruction, as mentioned
in the section above about the control unit's design. What happens in the
execute phase depends on the instruction. Unless otherwise mentioned,
in the Execute phase the PC is set to successor (PC + 1).

* 000 HLT nothing happens; the PC does not change
* 1XX ADD ALU adds the value from memory location XX to ACC
* 2XX SUB ALU subtracts the value from memory location XX from ACC
* 3XX STA stores ACC to memory location XX
* 5XX LDA loads the value from memory location XX to ACC
* 6XX BRA PC set to XX
* 7XX BRZ ALU computes ACC == 0; PC set to XX if the result is 1
* 8XX BRP ALU computes ACC >= 0; PC set to XX if the result is 1
* 901 INP is not implemented
* 902 OUT is not implemented

### The control logic

To design the controller, I thought about what each of the inputs to
each of the units must be in each phase for each instruction. As you
read this list, compare it to the multiplexers for each of those inputs
and the circuitry in the control unit used to select.

For the registers, the D input is the value to write at the end of
the phase, but only if E is true. So when you are reasoning about
what happens, remember that when E is false it doesn't matter what D
is. Similarly for the RAM D input, which is only written to memory if
the str input is true.

* ALU A is PC in Fetch, else ACC
* ALU B is 1 in Fetch, else 0 if the instruction is BRZ or BRP, else the value read from memory
* op is 00 (+) in Fetch or if instruction is ADD, else 01 (-) if instruction is SUB, else 10 (==) if instruction is BRZ, else 11 (>=) if instruction is BRP
* PC D is operand if instruction is BRZ or BRP and result of ALU is 1, else successor
* PC E is 1 in Execute unless instruction is HLT, else 0
* IR D is the value read from memory
* IR E is 1 in Fetch, else 0
* ACC D is the value read from memory if instruction is LDA, else ALU C
* ACC E is 1 in Execute if instruction is ADD, SUB, or LDA
* RAM A is PC in Fetch, else operand
* RAM D (in) is ACC
* RAM str is 1 in Execute if instruction is STA, else 0
* successor D is ALU C
* successor E is 1 in Fetch, else 0

## Leave your mark

Think about what you would like to add or change about this CPU.  Keep in
mind that it is much better to turn in something simple that works than
to turn in something with a brilliant idea that didn't come together.
If you want to make big changes, think about how to take small steps so
you can always turn in the last version that worked.

Make your new design. You may edit the circuit I provided, or start a
blank project, whichever is easier for you. Submit your .circ file to
elearn. You will probably want to make sample programs that test and
demonstrate your design; if you do, submit them as well.

Here are some ideas you might consider:

* Implement input (901), output (902), or both.
* Add new arithmetic or logical operations, such as multiplication.
* Add a new kind of conditional branch.
* Add a relative branch.
* Add an arithmetic operation with an immediate operand.
* Rewrite the multicycle control unit as a horizontal microcoded control unit.

You're welcome to think up your own ideas, and I encourage you to discuss
your ideas with me. Use the Logisim documentation (in the Help menu)
often; it is detailed and helpful. Above all, learn something!
