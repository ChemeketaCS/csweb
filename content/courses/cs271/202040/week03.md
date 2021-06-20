---
title: Week 3 - x64 Assembly
linktitle: Week 3

weight: 30
---

## Getting started with assembly development

The assembly language we will be learning in this class is the one
most likely to already be running on your computer: AMD64, also known
as x86-64, Intel 64, and x64. It is an extension of Intel's popular
x86 architecture to include 64-bit values and operations. AMD is a
microchip company that competes with Intel; their business model is to
produce their own original chip designs that are compatible with Intel's
architecture, so that although the chips are quite different, programs
compiled for one can run on the other and vice versa, (mostly) without
knowing or caring which is which. AMD produced a 64-bit extension to the
x86 architecture that Intel was forced to adopt itself, the first time
there was an extension to an Intel architecture by any company other than
Intel. Intel's own foray into 64-bit architecture produced IA-64, which
is a different, incompatible architecture, while AMD64 had the market
advantage of being backwards compatible with 32-bit x86 architecture.

Backwards compatibility is a theme that will come up repeatedly in the
study of x64. The x86 family traces its lineage to the 8086, a 16-bit
processor released in 1978. The family continued through the Pentium era
and today remains the most widely used type of processor in personal
computers and servers. As each new chip and technological advance was
introduced, Intel has taken care to maintain backwards compatibility,
so that programs compiled for previous versions could continue to run,
while new programs could take advantage of the added features. This is
a huge benefit for adoption, but it does have disadvantages, in the form
of historical decisions and names that persist unchanged into x64.

## Units of information

A CPU stores information in registers. A register is like a variable,
except that unlike variables in a high-level language—which come and
go as needed, with different names and types—the registers are etched
into silicon, so how many there are, how big they are, and what they
are for is fixed when the CPU is designed.

Some registers are for some special purpose, like the one that keeps
track of the memory address of the instruction to execute next; some
architectures call it the Program Counter (PC), but on x86 it is called
the Instruction Pointer (IP). Other registers are there for the programmer
to use as needed, just like variables, except they must be shared and
reused because they are a finite resource. Whatever work doesn't fit
into the registers is kept outside the CPU, in the RAM.

Typically, the general-purpose registers in a CPU design are the same
size as the bus that moves information back and forth between the CPU and
the RAM, so a register can be read or written all at once. That size,
called the architecture's “word size”, is the most convenient unit
for working in at the hardware level, and for example is typically the
size assigned to the `int` type in C++.

The 8086 was a 16-bit processor, with general-purpose registers that
stored 16 bits and a data bus that moved 16 bits at a time back and
forth between CPU and RAM. Consequently, on an 8086, a “word” was
a unit of information equal to 16 bits, or 2 bytes.

When Intel released the 80386 microprocessor in 1985, its general-purpose
registers were expanded to 32 bits (4 bytes) each. It would have been
reasonable to consider a “word” on the 80386 to be 32 bits, but for
the sake of backwards compatibility, Intel chose to standardize their
idea of “word” based on to 8086 and call the new, 32-bit unit a
“double word”. Similarly, when AMD introduced x64 in 2003, the new
64-bit (8 byte) unit of information stored in its registers was dubbed
a “quad word”.

The x64 architecture defines 16 general-purpose quad-word registers.
They are named R0, R1, R2, …, R15, where the “R” stands for
Register.  That part is simple enough, but to use them effectively,
it is important to understand the history that these registers carry,
in the name of backwards compatibility.

The 8086 has only 8 general-purpose registers, and they were of course
only one word each. Rather than being numbered, they were named after
their usual purposes. As general-purpose registers, they could
technically be used for anything, but convention and the way some
instructions leveraged them led to the following names:

* AX: Accumulator register
* BX: Base register
* CX: Counter register
* DX: Data register
* SP: Stack Pointer
* BP: Base Pointer
* SI: Source Index
* DI: Destination Index

Sometimes it is useful to be able to use a big register as though it
were multiple smaller registers. So, the first 4 registers (each a word)
could also be treated as though they were 8 registers, each a byte.
The low end of the word (the least-significant figures) is named AL, BL,
CL, and DL, respectively, and accordingly the high end is named AH, BH,
CH, and DH.

When the architecture expanded to 32-bit registers, each of them got a
new name, EAX, EBX, …, EDI, the E meaning “Extended”. The original names
were retained for the low word of each now-larger register.

Similarly, all of those names are still available in x64. The named
registers correspond to R0–R7, while registers R8–R15 don't have
backwards-compatible names, being new. For any register number $n$ in
the range 0–15, R$n$ is the 64-bit general-purpose register, R$n$D is
the low 32 bits of it (D for Double word), R$n$W is the low 16 bits of it
(W for Word), and R$n$B is the low 8 bits of it (B for Byte).

For now, don't worry about this menagerie of names too much. Just
remember that there are registers available and a sense of how many and
how big they are overall, and then you can come back to double-check
this information for reference.
