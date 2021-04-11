---
# Page metadata.
title: Little Person Computer
summary:  Class definition and object use

weight: 10
#last used 202030
---

{{% cs162General %}}

## Objective

Upon completion of this lab the student will be able to create classes to represent complex data types.

## Requirements

*Submit files: LittlePersonComputer.h, LittlePersonComputer.cpp*

For full credit your code should compile and run with this [main.cpp file](main.cpp). You
will not turn the file in, I will use my own copy to test your code.

The main.cpp has only a very simple program. To test more complex behaviors,
you can use the code snippets from [this text file](programs.txt). A working program
should be able to run them all (expected results are listed in the file).

{{% alert warning %}}
Since I will use my own version of main.cpp, do not modify it to match your LittlePersonComputer!
You can/should modify main.cpp to test out your code but make sure my version still works
with your program.
{{% /alert %}}

I should be able to build your code with:  
`g++ -std=c++11 LittlePersonComputer.cpp main.cpp -o program.exe`

## Overview

For this assignment, you are going to implement a version of the Little Man Computer
(if you did not take CS160 and the description below is too brief, you can see
demonstrations/read more about it in the
[CS160Reader](http://computerscience.chemeketa.edu/cs160Reader/ProgrammingLanguages/LittleComputer1.html)).

You will implement the class **LittlePersonComputer** shown in the UML diagram below in the files
LittlePersonComputer.h and LittlePersonComputer.cpp. Your class will store an array representing the main memory
of the computer and values representing the program counter and accumulator. It will also provide
functions to manipulate this state by doing things like loading a program or running one instruction,
etc...

{{< figure src="LittlePersonComputer.png" alt="LittlePersonComputer Class" >}}

## Implementation Details

### Variables

**Memory** should be an array of 20 integers - we will never try to use memory addresses past 19 in any
of the programs we write.

The **programCounter** of **PC** represents the instruction that will be executed next. i.e. if the
**programCounter** is at 001 and the computer does a step, the instruction at 001 will be executed.

You should not need other class level variables. If you add any, make sure they do not duplicate
existing information or anything that can be determined from existing information.

### Functions

Below are descriptions of what the functions should do. You can add extra functions if you
like, but must implement the ones listed in the UML and they must behave as described below

{{% alert warning %}}
The LittlePersonComputer.h file should have Doxygen comments for each function.
{{% /alert %}}

#### LittlePersonComputer()

Initializes accumulator (ACC), program counter (PC) and all memory slots to 0.

{{% alert info %}}
There is no magic way to initialize all elements of an array to 0 with one statement inside the
constructor. You need to initialize the array where it is declared or use a loop to initialize
the elements in the constructor.
{{% /alert %}}

#### LittlePersonComputer(int instructions[], int numberOfInstructions)

This takes an array that contains a list of instructions and a size of the array. The instructions
from the array provided should be copied into the computer's memory starting at address 0.

The accumulator and program counter, as well as any memory after the list of instructions, should
be initialized to 0.

#### int getProgramCounter() / int getAccumulator()

Return the value of program counter or accumulator.

#### int getMemoryAt(int location)

Return the value in memory at the indicated location.

#### int getCurrentInstruction()

Return the value in memory at the location indicated by the program counter.
(The instruction that will run when we step the computer.)

#### void loadProgram(int instructions[], int numberOfInstructions)

The array provided should be copied into the memory array starting at index 0.
All memory past the end of the instructions should be set to 0.

#### void printState()

Prints the current state of the computer as something like:

    Accumulator : 20    Program Counter : 2
    Memory:
    0  1  2  3  4  5  …  19
    504  104  902  0  10  0  …  0

#### bool isHalted()

Returns true if the next instruction to be run is 0, otherwise false

#### void step()

Runs the instruction according to the list of machine codes shown below.
After running any instruction except a branch or halt, the program counter should automatically advance.

Here are some tips:

* 000 is the same as 0 - Halt. Nothing happens when this is run.
* The 100's digit always indicates the basic operation.
* The next two digits specify a memory address (xx) or, for 9XX instructions, the IO mode (input or output)
* **input** / **output** should read into or print the accumulator's value to/from the console
* **store** puts the accumulator value into a memory address specified by XX, while **load** copies the value at the memory location XX to the ACC
* **add** / **subtract** take the value at a memory address and add to/subtract from the ACC. e.g. "104" says add the value at memory address 4 to the ACC, NOT add 4 to the ACC.
* **branch always** changes the PC to hold the value in XX
* The other **branches** (700/800) test the value in the accumulator and change the **PC** to xx (if condition is true) OR advance the PC by 1 (if condition is false).

{{< figure src="LittlePersonComputerInstructions.png" title="LittlePersonComputer instruction guide" >}}

## Advice

**Build one part at a time.** Start by commenting out everything after the line in main.cpp that builds
computer1: `LittlePersonComputer computer1;`. Then, go write a .h and .cpp that have the needed
variables and just the default constructor (no other functions). Then use the debugger to run that
code and verify that the constructor did its job correctly. Once it is working, add **printState()**
and uncomment the next line in main.cpp to test it. Continue writing one function at a time.

Partial credit is available. It is much better to turn in a program that is missing one or two features
(functions are empty or do not work quite right) than it is turn it in or turn it in late.
However, a program that fails to compile is usually not worth many points. A program that is missing
a few features is MUCH better than *"well, I wrote code for everything, but I couldn't get it working
and nothing compiles."* If you can't get something to compile, remove it or comment out before turning
in your code.

<!--
## Extension Ideas

Looking for something else to do? Try one of these extensions. If you do, make sure your
LittlePersonComputer still works as expected on the provided code. If in doubt, submit an
unmodified program and show me your extended version in class/office hours for feedback.

### Add a run until halts

Add a function that keeps stepping until the program reaches a 000 instruction.
-->
