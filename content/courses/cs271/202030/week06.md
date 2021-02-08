---
title: Week 6 - Assembly
linktitle: Week 6

weight: 60
---

## Learning Objectives

Upon finishing this learning module, you should be able to:

* Write, compile, and run a program in x64 assembly language.
* Link assembly language code with C code.
* Use basic operations on numeric values in assembly.
* Refer to values in registers and in memory using multiple addressing modes.
* Use jumps and branches to implement conditionals and loops in assembly.
* Use provided snippets of code to call functions and make system calls.

## Deadlines this week

* Monday 11:59pm - Simulator assignment

## Getting started with assembly development

The assembly language we will be learning in this class is the one
most likely to already be running on your computer: AMD64, also known as
x86-64, Intel 64, x64, and some other names. It is an extension of Intel's
popular x86 architecture to include 64-bit values and operations. AMD
is a microchip company that competes with Intel; their business model
is to produce their own original chip designs that are compatible with
Intel's architecture, so that although the chips are quite different,
users can freely run programs on either mostly without knowing which
is which.  AMD produced a 64-bit extension to the x86 architecture that
Intel was forced to adopt itself, the first time there was an extension
to an Intel architecture by any company other than Intel. (Intel's own
foray into 64-bit architecture produced IA-64, which is a different,
incompatible architecture, while AMD64 had the market advantage of being
backwards compatible with 32-bit x86 architecture.)

In order for everyone to be working in the same environment, please set
up the virtual [Chemeketa Development Environment]. This is the exact
same environment as we use in CS162, so if you set it up for that class,
you have already done this step.

  [Chemeketa Development Environment]: http://computerscience.chemeketa.edu/CSResources/Vagrant/ChemeketaCSDevEnvironment.pdf

The only additional software you will need for this class is [nasm],
the assembler that we will use to translate assembly language into
machine language.

  [nasm]: https://www.nasm.us/

To install nasm, sign into your virtual machine (with `vagrant ssh`)
and run:

```
sudo apt install nasm
```

This only needs to be done once.

## An introduction to the language

The material for this week consists of a tutorial and a programming
assignment. Please read this [x64 tutorial using nasm] and follow
along. Type all of the sample programs into files in your development
environment, build them, and run them. Some of the examples are shown
with Mac versions, but even if your machine is a Mac, the Chemeketa
Development Environment is Ubuntu Linux, so you should follow along with
the Linux examples.

  [x64 tutorial using nasm]: https://cs.lmu.edu/~ray/notes/nasmtutorial/

The most important points are the ones listed above in the learning
outcomes for the week.  Feel free to skim the parts about floating point
operations, parallelism, stack frames, etc.
