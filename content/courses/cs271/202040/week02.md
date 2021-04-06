---
title: Week 2 - Compilation
linktitle: Week 2

weight: 20
---

This week will be all about the compilation process—everything that happens
between the source code sitting in a file to the program running on a CPU.
It will also be about getting our development environment set up so that we
can get hands-on experience with the compilation process.

In order for everyone to be working in the same environment, please set
up the virtual [Chemeketa Development Environment]. This is the exact
same environment as we use in CS162, so if you have set it up for that
class, you have already done this step, and vice versa this will prepare
you for that class if you take it later.

  [Chemeketa Development Environment]: http://computerscience.chemeketa.edu/CSResources/Vagrant/ChemeketaCSDevEnvironment.pdf

The Chemeketa Development Environment is a Linux virtual machine that
will run on your own host machine. You will be able to work in that Linux
environment, but there is a shared folder that enables you to easily share
files between the virtual machine and the host, so you can also do a lot
of your work in your host machine and then do only the necessary parts in
the Linux command-line. Familiarity with working in a UNIX environment
(such as Linux) is an important skill for computing scientists, and it
will also give us access to the tools we need to study compilation.

We will be using and getting familiar with a variety of tools, but by
far the most important will be the compiler, `gcc`, and the debugger,
`gdb`.  There is excellent reference documentation for gdb, called
[Debugging with GDB].  It is not a tutorial, but you will often find it
useful for looking up commands or explanations of particular capabilities
of the debugger.

  [Debugging with GDB]: https://sourceware.org/gdb/current/onlinedocs/gdb/

UNIX systems also ship with a manual accessible by the command line,
using the `man` command. Run it with the name of any other command you
want to know more about, such as `man gcc` to receive (a huge amount of)
information about the compiler, or `man man` to learn about the manual
system itself.
