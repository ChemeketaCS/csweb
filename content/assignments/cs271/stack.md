---
title: Smashing the stack
summary: Integrate practical knowledge of systems programming in assembly
---

Write a program in C that is vulnerable to a buffer overflow that
smashes its stack. The program does not have to be original; you are
free to use example code from a stack smashing tutorial or to write
your own.  Build your code into an executable program.  Then, create
your own exploit string—an input that triggers the vulnerability in
your program and causes it to change its behavior.

Submit the following to complete your assignment:

* The program's source code
* The compiled, executable program
* A file containing the input that exploits your program
* A writeup in PDF format explaining your vulnerability and exploit

The writeup must include:

* The exact command line(s) you used to build your source code into the provided executable
* A description of how you made the vulnerable program, including a citation if it is copied from somewhere
* A description of how you made the exploit input, including screenshots of debugging and disassembly you did
* A screenshot of your vulnerable program running with normal input and behaving correctly
* A screenshot of your vulnerable program running with the exploit input

“Yes” credit will be given for an exploit that causes the program to
return to a valid code address and continue running after the vulnerable
program returns. “Close, but…” credit will be given for an exploit
that causes the program to crash immediately.

You will find the following resources useful and/or interesting as you
work on creating your vulnerability and exploit.

* [A really quick explanation of stack frames and frame pointers](https://www.cs.rutgers.edu/~pxk/419/notes/frames.html)
* [Tenouk's buffer overflow tutorial](https://www.tenouk.com/cncplusplusbufferoverflow.html)
* [Smashing the stack for fun and profit](http://phrack.org/issues/49/14.html)
* [Smashing the stack for fun and profit (today)](https://travisf.net/smashing-the-stack-today)
