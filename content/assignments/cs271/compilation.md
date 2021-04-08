---
title: Compilation
summary: Examine the steps of compilation
---

Compilation is normally encapsulated so that all of the necessary steps
happen behind the scenes. Type the following C code into a file named
`count.c`.

~~~ c
#include <stdio.h>
#include <stdlib.h>

#define TARGET 10

int main() {
	int i;
	for (i = 0; i < TARGET; ++i)
		printf("%d\n", i);
	return EXIT_SUCCESS;
}
~~~

You can compile this code all at once with the following command.

~~~
gcc -o count count.c
~~~

You can verify with `ls` that there are now two files: `count.c` containing
your source code, and `count`, the executable program. (If you're used to
Windows where programs have a `.exe` extension, you'll have to get used to
the tradition in UNIX that programs do not have an extension at all.) You
can run the program and see it work by entering the following.

~~~
./count
~~~

{{% alert info %}}
The `./` part specifies to run the program named `count` that is in the
current directory (`.` always refers to the current directory). Without
the directory specified (i.e. if you just typed `count` instead of
`./count`) the shell would look for a file named `count` in a list of
system directories and run the first one it found. Since the current
directory is not typically one of those places it will look, you have
to specify the `./`.

If you're curious where the system programs are, you can run `echo $PATH`
to see the list of where the shell will look, separated by colons. If
you're curious where a particular program file is, you can use the
`which` utility.  For example, if you run `which gcc`, you will see
something like `/usr/bin/gcc`. That is a file that happens to contain
the executable program that is the compiler. (This is why programs on
UNIX typically do not have extensions; the shell searches for the name
you type, so we'd have to type a lot of extra `.exe`s all the time.)
{{% /alert %}}

However, traditionally there were more steps to compilation that were
visible to the user, and they all still happen behind-the-scenes when you
run the compiler as you did above. In this assignment, you will explore
each of the steps of compilation and interact with the intermediate
results.

## Preprocessing

The first step is preprocessing, which handles the directives such as
`#include` and `#define`. Those are not actually part of the C language,
but part of the preprocessor language. When you run the preprocessor
on your source code, it doesn't care at all about the C part. When it
encounters an `#include`, it will search for the named file (it has
its own search path for files specified with angle brackets such as
`<stdio.h>`, and it looks for files in the current directory when they
are specified with quote marks as in `"myheader.h"`); when if finds
that file, the preprocessor copy-and-pastes the contents of that file to
replace the `#include` line. When it encounters a `#define` directive,
the preprocessor keeps track of what to replace with what, and whenever
it encounters the defined symbol, replaces it textually with the given
value. There are other things the preprocessor handles as well, while
passing everything it doesn't recognize on through.

To run the preprocessor directly, enter the following.

~~~
cpp count.c count.i
~~~

{{% alert info %}}
The program is named `cpp` for “C Pre Processor”. It was only long
after this tool was named that C++ was invented and people started
commonly using CPP as an abbreviation of “C Plus Plus”.
{{% /alert %}}

The traditional extension for preprocessed source files is `.i`. Open
the file up in a text editor and skim it. You should see the pasted-in
contents of the headers that were `#include`d (you can check by finding
the originals in `/usr/include`, e.g. `/usr/include/stdio.h`). You should
see the code you recognize from `count.c` at the end, with the macro
`TARGET` replaced.

You may notice that there are still a lot of non-C-looking lines that
start with hash marks. These are left behind by the C preprocessor
so that the next stage can tell which file and line numbers to report
(e.g. in error messages) so that they match the original files.

You can also run `gcc` but tell it to stop after preprocessing with the
`-E` option.

~~~
gcc -E -o count.i count.c
~~~

That is equivalent to running `cpp` directly as above.

## Compiling

Once the source has been preprocessed, the compiler can run, translating
the C language to assembly language. The compiler is traditionally named
`cc`, for “C Compiler”; the modern `gcc` is the Gnu Project's version of `cc`,
but you can still call it `cc` for old time's sake. You can use the `-S`
option to make it stop after compiling.

~~~
cc -S -o count.s count.i
~~~

Note that we start from the preprocessed `.i` file and that the traditional
extension for the assembly language output is `.s`. Again, have a look inside
the resulting file—you are not expected to understand assembly language yet,
but we will be learning a lot about it in the coming weeks.

## Assembling

The translation from assembly language to machine code is much simpler than the
translation from C language to assembly language. The tool that does this step
is not called a compiler, but an assembler, and the traditional name for this
tool is `as`.

~~~
as -o count.o count.s
~~~

Equivalently, you can run `gcc` with the `-c` flag to stop after assembling.

~~~
gcc -c -o count.o count.s
~~~

The result is a compiled “object file”, with extension `.o`. This
contains raw machine code that could be run on the CPU directly, but it
is not ready for that yet because, for example, it still contains some
references to other object files that need to be resolved by linking.

From here on out, the intermediate results will no longer make sense if you
open them in a text editor, because they are raw binary. You can, however,
translate them to a readable hexadecimal representation using the `xxd`
utility.

~~~
xxd count.o
~~~

This will mostly not make sense to you without knowing more about
object files, but you should be able to see some recognizable landmarks
still. The file begins with the magic number (yes, it's really called
magic) “ELF”. Also, the format string from our C code, “%d\n",
will still be in there as the hexadecimal “25640a”, the ASCII
representation of percent, d, and newline, respectively.

## Linking

C was designed to allow for “separate compilation”, in which each
source file can go through preprocessing, compiling, and assembling
separately, and then they are linked together at the end. Compiling
in particular is a lot of work for the computer, and with separate
compilation, if one file has to be changed, that file can be recompiled
without needing to recompile the whole project. This is also a way to
reuse code as compiled libraries, which are linked in to the program
that uses them.

Linking in the modern compiler has become very complex, so that even
if you want to run the linker directly, you normally go through `gcc`.

~~~
gcc -o count count.o
~~~

{{% alert info %}}
This is different from the first command line, because we are using
`count.o` as the input rather than `count.c`. The `gcc` command will
figure out what step to start on based on the extension of the input file.
{{% /alert %}}

It is still possible to access the linker directly through its traditional
name, `ld`, but we have to know which system files to link in for the
program to be complete.

~~~
ld -o count /usr/lib/x86_64-linux-gnu/crt1.o /usr/lib/x86_64-linux-gnu/crti.o /usr/lib/x86_64-linux-gnu/crtn.o count.o -lc
~~~

The files `crt1.o`, `crti.o`, and `crtn.o` contain extra code needed
to set up the runtime environment for our program (“CRT” stands
for “C Run Time”). The `-lc` flag links in the standard C library,
which provides, for example, the implementation of the `printf` function
our example code depends on.

The output of the linker is the finished executable, `count`. You
might view `count` with `xxd` as well, and notice its similarities and
differences of this linked version relative to `count.o`. A useful way
to control the output of programs with lots of output like this is to
pipe the output into `less`.

~~~
xxd count | less
~~~

Within `less`, the up and down arrows will scroll through the output,
and `q` will quit.

## The assignment

Work through the example above. In elearn, submit all of the files along the way:

* `count.c`
* `count.i`
* `count.s`
* `count.o`
* `count`

For “Wow!” credit, try changing each of the steps and compiling the
rest of the way in order to change what the program does. For example,
in each of those 5 files, it is possible to change the program to stop
at a target other than 10, or to print the numbers out separated by
spaces rather than newlines. Submit the changed versions and a short
description of what you changed and what the result was.
