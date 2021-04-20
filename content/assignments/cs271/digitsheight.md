---
title: Digits and height
summary: Write complete programs in assembly language

math: true
---

You will write two complete programs in x64 assembly. In order to put off
a discussion of how to use the operating system (which is necessary for
interacting with the console), your programs will not take any input or
output. Rather, their input values will be given explicitly in the code,
and the output values will be variables that you will assign the correct
values. In order to see that they are running and producing the correct
results, you will need to step through and examine them in the debugger.

## Digits

Write this program in a file named `digits.s`.

As input, you will define a quad word integer variable named `input`
in the initialized data section. Choose $0 ≤ input < 1000$ so that
the value is representable in three decimal digits.

As output, you will have three quad word integer variables named `ones`,
`tens`, and `hundreds` in the uninitialized data section (bss). Your
program should calculate the decimal representation of `input`, putting
the ones place in `ones` and so on. The `div` instruction will be your
primary mathematical tool.

## Height

Write this program in a file named `height.s`.

The height in an object will reach if it is thrown straight up depends
on its initial velocity and the force of gravity, $g$.  The value of $g$
varies depending on what planet/body you are on: on Earth, g is $9.8
m/s^2$; on Mars, $3.7 m/s^2$; on the Moon, it is $1.6 m/s^2$.

As input, you will define a double-precision floating-point variable named
`velocity` in the initialized data section. Similarly define the constant
`g` (based on Earth).

As output, you will define a double-precision floating-point variable
named `height` in the unitialized data section (bss). Calculate height
from velocity and g using this formula:

$height = \frac{1}{2} \cdot \frac{velocity^2}{g}$

This will use the XMM registers for floating-point calculations.
