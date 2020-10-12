---
# Page metadata.
title: Distance and Power
summary: Assignment covering basic IO, data types, and math.

math: true
---

{{% cs161General %}}

## Objective

Upon completion of this assignment the student will have a working C++ development environment and
be able to write a program that does simple numeric calculations and console input and output.

## Problem 1: Digit Check

*Submit file: assign1p1.cpp*

Write a program that prompts the user for a four digit integer and prints out the individual digits
that make up the number.You do NOT need to worry about bad input – assume the user always enters a
four digit number. (If you already know about strings, you may not use them… you must read in the
input as an int)

{{% alert info %}}
**Hint**  
This is closer to the "Show current time" example than it looks… Say you start with 8237.
What do you get if you % by 10? What do you get if you / by 10?
{{% /alert %}}

### Sample run1: (user input in red)

{{% sample_run %}}
Enter a number: `8237`
7 one(s)
3 ten(s)
2 hundred(s)
8 thousand(s)
{{% /sample_run %}}

### Sample run2: (user input in red)

{{% sample_run %}}
Enter a number: `1000`
0 one(s)
0 ten(s)
0 hundred(s)
1 thousand(s)
{{% /sample_run %}}

{{% alert warning %}}  
That is two separate runs of the program. Each run should only ask for one input.
{{% /alert %}}


## Problem 2: Triangle

*Submit file: assign1p2.cpp*

Write a program that reads in the coordinates of the three vertices of a triangle and prints
out the area of the triangle. You should read the 

To calculate the area of the triangle, use Heron's formula:

$A = \sqrt{(s(s-a)(s-b)(s-c))}$

Where a, b, and c are the lengths of the sides and s is the semi perimeter: (a + b + c)/2.

{{% alert info %}}
**Hint**  
You can do square root as the 0.5 power: `pow(x, 0.5)` or by using the sqrt function: `sqrt(x)`.
Either one requires that you include `<cmath>`.
{{% /alert %}}

### Sample run: (user input in red)

*The given input represents a point at 1, 1 another at 4, 1 and a third at 1, 5.*
{{% sample_run %}}
Enter x y for point 1: `1 1`
Enter x y for point 2: `4 1`
Enter x y for point 3: `1 5`
The area of the triangle is 6
{{% /sample_run %}}

### Sample run2: (user input in red)

{{% sample_run %}}
Enter x y for point 1: `-3 0.5`
Enter x y for point 2: `12 2`
Enter x y for point 3: `1.5 3`
The area of the triangle is 15.375
{{% /sample_run %}}
