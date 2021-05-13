---
title: Arrays
summary: Reverse engineer programs that use arrays
---

Download this [zip file containing four programs].  There are two
programs that work with [prime numbers], and two programs that work with
[square numbers].  For each number sequence, one of the programs will
fill in an array of 100 quadword integers with the first 100 numbers
in the sequence; the other program will fill in an array of 100 bytes
with booleans indicating which of the numbers up to 100 is a member of
the sequence.  For example, the first-100-primes program will fill in
an array of quadwords with 2, 3, 5, 7, …, while the primes-up-to-100
program will fill in an array of bytes with 0, 0, 1, 1, 0, 1, 0, 1, …
(notice that the 1s are at indices 2, 3, 5, 7, …).

  [zip file containing four programs]: programs.zip
  [prime numbers]: https://oeis.org/A000040
  [square numbers]: https://oeis.org/A000290

Your task is to figure out which program is which, using the debugger.
I don't care a lot that you tell me which is which correctly; what is
important is that you show the steps you went through in the debugger
and your reasoning about which is which. These programs were compiled
from C programs; I have taken care that the names of the files and the
names of symbols won't be a giveaway, but I have neither stripped the
symbol tables (which would make it harder) nor added debugging symbols
(which would make it easier).

Use the `script` program to record your debugging sessions. First,
within the Chemeketa Development Environment, run `script`. It will say
something like “Script started, file is typescript”. Proceed to run
`gdb` and explore one of the programs. When you are done and have exited
`gdb`, also exit the shell with `exit` or by pressing control-d. You
should see “Script done, file is typescript”. There should now be a
file named `typescript` that has a complete log of your debugging session.

Put together a document that explains your belief about which program is
which, *and why*, with supporting evidence from typescripts recorded from
debugging. You will not get credit for an answer that says which programs
are which correctly but does not include evidence from the debugger.
You can use the `disas` command (e.g. `disas main`) in the debugger to
see the machine code as assembly code, as well as the other debugging
techniques we discussed for previous assignments.

If in the disassembly you encounter instructions you are not familiar
with, stop and look them up and figure out what the code is doing. You
could probably figure out which program is which just by looking at how
each one fills in its array, but it's worth even more credit if you can
reverse engineer how the programs are doing their work and sketch the
algorithms in your document.

When you are done, export your document as PDF and submit it to elearn.
