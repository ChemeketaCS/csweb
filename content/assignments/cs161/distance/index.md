---
# Page metadata.
title: Distance and Throw Height
summary: Assignment covering basic IO, data types, and math.

math: true

weight: 10
#last used 202020
---

{{% cs161General %}}

## Objective

Upon completion of this assignment the student will have a working C++ development environment and
be able to write a program that does simple numeric calculations and console input and output.

## Problem 1: Distance Translator

*Submit file: assign1p1.cpp*

Rather than write 30 inches, we could express the same distance as "2 feet, 6 inches."
And rather than say 100 inches, we could say "2 yards, 2 feet, and 4 inches."

Write a program that prompts the user for a number (integer) of inches and then
expresses that distance in terms of a combination of miles, yards, feet and inches.

These samples show what your program should do for the inputs 87 and 100000:

### Sample run 1: (user input in red)

{{% sample_run %}}
Enter the number of inches: `87`
0 mile(s)
2 yard(s)
1 foot/feet
3 inch(es)
{{% /sample_run %}}

### Sample run 2: (user input in red)

{{% sample_run %}}
Enter the number of inches: `100000`
1 mile(s)
1017 yard(s)
2 foot/feet
4 inch(es)
{{% /sample_run %}}

{{% alert warning %}}  
That is two separate runs of the program. Each run should only ask for one input.
{{% /alert %}}

## Problem 2: Throw Height

*Submit file: assign1p2.cpp*

The height **h** in $meters$ an object will reach if it is thrown straight up depends on its
initial velocity **V** in $meters/second$ and the force of gravity **g** in $meters/second^2$.
**g** varies depending on what planet/body you are on. On Earth, g is $9.8 m/s^2$;
on Mars, $3.7m/s^2$; on the Moon, it is $1.6 m/s^2$.

Write a program that asks the user for an initial velocity and the force of gravity
and uses this formula to calculate the height a thrown object will reach.

$h = \frac{1}{2} \cdot \frac{V^2}{g}$

You do NOT have to worry about how many decimal places your answer prints to.

### Sample run 1: (user input in red)

{{% sample_run %}}
Enter the velocity in m/s: `20`
Enter a value for g in m/s^2: `9.8`
It will reach 20.4082 meters
{{% /sample_run %}}

### Sample run 2: (user input in red)

{{% sample_run %}}
Enter the velocity in m/s: `12.5`
Enter a value for g in m/s^2: `24.8`
It will reach 3.1502 meters
{{% /sample_run %}}

{{% alert info %}}
**Hint:** If you want to use the **pow** function to square **V**, you will need to
put ***#include \<cmath>*** near the top of your file.
{{% /alert %}}