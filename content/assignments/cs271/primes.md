---
title: Primes
summary: Write a useful program in assembly language
---

Write a complete program in x64 assembly that prints the first 500
[prime numbers](https://oeis.org/A000040).  Submit your assembly code as
`primes.asm` through elearn.

To calculate the primes, set aside an array to hold all 500, uninitialized
at first.  Set the first prime to 2, and then counting up 3, 5, 7,
(skipping evens as an optimization), check whether your candidate is
divisible by any of the primes you have already found (you can stop
when the quotient is less than the prime you're dividing by).  If it is
divisible by one of them, proceed to the next candidate odd. If it isn't,
set the next location in the array to the newly-discovered prime and then
proceed to the next candidate odd.  When you have found the 500th prime,
proceed to printing them out.  You may use the C standard library to
handle the output.

I expect you will struggle with how to express this algorithm in assembly,
but if you find yourself struggling with the algorithm itself, please
ask for help. The algorithm is quite well-known and I don't want you to
put any effort into rediscovering it; all the work should be in figuring
out how to express it in assembly.
