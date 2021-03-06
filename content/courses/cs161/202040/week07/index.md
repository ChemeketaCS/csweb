---
title: Week 7 - Arrays
linktitle: Week 7

weight: 70
---

## Learning objectives

Upon finishing this learning module, you should be able to:

* Write programs using arrays to store collections of related information

## Classroom schedule

### Day 1

* Arrays
* Read Ch 7.1-7.2

### Day 2

* Arrays
* Read Ch 7.4

### Day 3

* Arrays & Functions
* Read Ch7.5-7.8

### Day 4

* Introduction to C - Headers and IO

## Online Activity Outline

### Arrays

Read Ch 7.1-7.2. These videos covers some of the important (and
sometimes unmentioned) details.

{{< youtube videoid="YEpuglOfH38" title="Array Basics" >}}
{{< youtube videoid="BRZOfH-kbRQ" title="Array Processing" >}}

Do the CPPLab Arrays.

Watch the video below and then read Ch 7.4 for various examples of
using arrays.  

{{< youtube videoid="Lb0pjRKzJEg" title="Array Uses" >}}

Read 7.5-7.8. This video shows some important details of how arrays
work with functions and how to use QtCreator to debug arrays in
functions:  

{{< youtube videoid="I2bwac_gIRQ" title="Array Functions" >}}

Do the CPPLab Array Functions.

Start the assignment - you can work on it in parallel with this next
part.

### C based IO

Although C++ shares much with C (most, but not all, C code is valid C++
code), there are significant differences. One of the key differences in
terms of the material we have learned about is how IO is done - there
are no cin and cout. The C tools for doing IO, especially output,
provide some advantages - you will see C++ code that uses the C tools
instead of cout for this reason. You also are likely to be required to
program in C some future course... it is worth becoming familiar with
the basic differences now.

Start by watching this video about C based input/output functions:  

{{< youtube videoid="XA_cydglvyE" title="C I/O" >}}

To make a C project in QtCreator, chose the Template **Non-Qt
Project → Plain C Project**  

![Creating a Plain C Project in Qt Creator](qtC.png)

It will have the proper header for doing IO in C: **\<stdio.h\>**.
If you want to use printf and scanf in a C++ program you would
include that header as **\<cstdio\>**.

[This document](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/c1_Basics.html#zz-3.8)
has concise examples of using printf (section 3.8) and scanf (section 3.9).
There is a complete reference for printf format strings at [cplusplus.com](http://www.cplusplus.com/reference/cstdio/printf/).

Do the C IO CPPLab.

## Extra Info

### Learncpp.com

This online tutorial covers *some* of the same ground as the readings:  
[LearnCpp.com 9.1-9.6](http://www.learncpp.com/)  
