---
title: Fibonacci functions
summary: Write functions and control structures

math: true
---

You will write three functions, each of which computes [Fibonacci
numbers], but using three different algorithms. Each one will take a
single unsigned 64-bit integer as its parameter, and return a single
unsigned 64-bit result.

  [Fibonacci numbers]: https://en.wikipedia.org/wiki/Fibonacci_number

I will provide [main.c], which defines two important symbols. It
defines a `main` function, which takes in a number $n$, uses all three
of your functions to compute $F_n$, and prints out the three results
(which should all be the same, but it labels them so you can see which
is which).  It also defines a global double `phi`, which you can use in
the closed-form calculation.

  [main.c]: main.c

{{% alert info %}}
You don't need to read my provided `main.c`, but if you do, you will see
some interesting use of the `inttypes.h` library to specify an unsigned,
64-bit integer (`uint64_t`) instead of relying on any particular type
(e.g. `unsigned long`) to be the right size.
{{% /alert %}}

## Recursive

The usual definition of the Fibonacci numbers is recursive:

$$F_n = F_{n - 1} + F_{n - 2}$$

The base case of the recursion is that when $n = 0$ or $n = 1$, $F_n = n$.

In `fibonacci_recursive.s`, write a function `fibonacci_recursive`
that directly implements the recursive definition. It will depend
on a condtional to check the base case, and for $n > 1$ it will call
`fibonacci_recursive` recursively to compute the previous two numbers
in the sequence. Return the sum of the two recursive results.

## Iterative

The recursive implementation is quite inefficient, because it calculates
the same values over and over. A much more efficient, iterative algorithm
(using what's called “dynamic programming”) can just keep track of two values
at a time and step up to the appropriate place in the sequence.

In `fibonacci_iterative.s`, write a function `fibonacci_iterative` that
implements the iterative algorithm. It will keep track of two variables,
say $a$ and $b$; initially, $a = 0$ and $b = 1$. Go through a loop $n$
times, and on each iteration, set a temporary variable to $a + b$, then
set $a = b$ and $b = tmp$. (See if you can work out why the temporary
variable is being used here.)

When the loop is complete, return $F_n = a$.

## Closed form

The number $F_n$ can be computed directly from $n$ using some
floating-point arithmetic. With $φ$ being the [golden ratio], $F_n$
is the integer nearest to $\frac{\phi^n}{\sqrt 5}$.

  [golden ratio]: https://en.wikipedia.org/wiki/Golden_ratio

In `fibonacci_closed.s`, write a function `fibonacci_closed` that
calculates the closed form. You will want to use `phi` (from the
provided `main.c`) and the `pow` and `round` functions (from the C
standard library).  The `round` function will convert your result to
the nearest integer, but you will still need to convert the double into
a 64-bit unsigned integer when you return it.

## Compiling and testing

First, separately compile each file (`fibonacci_recursive.s`,
`fibonacci_iterative.s`, `fibonacci_closed.s`, and `main.c`) using `gcc
-c` (producing, respectively, the object files `fibonacci_recursive.o`,
`fibonacci_iterative.o`, `fibonacci_closed.o`, and `main.o`).
An advantage of separate compilation is that when you change any of
the source (`.s` or `.c`) files, you will only need to recompile it,
not any of the unchanged files.

To produce an executable program, you will need to link all four object
files together, along with the C standard library's math functions (as
used in the closed-form calculation). Do so with `gcc -o fibonacci *.o
-lm`. (The `*.o` is a “wildcard” that matches all of the files that
end `.o` in the current directory, and `-lm` links in the math library.)

Finally, run `./fibonacci`, type a small number, and see the results
of your calculations. Compare the results (which should be the same, no
matter which algorithm is used) against the [Fibonacci sequence on the the
Online Encylopedia of Integer Sequences](https://oeis.org/A000045/list).
