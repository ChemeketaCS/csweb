---
title: Week 9 - Defining Types (Enums, Typedef, and Structs)
linktitle: Week 9

weight: 90
---

## Learning objectives

Upon finishing this learning module, you should be able to:

* Use enums and typedefs to improve code readability and safety
* Use structs to represent heterogeneous collections of data

## Quiz

Open Thursday-Sat in Elearn. Covers weeks 5, 6, and 7/8 (through 1D arrays).

## Readings & Activities

### Day 1

* Enums, Typedef & Namespaces
* See Activity outline section below for readings

### Day 2

* Bitflags
* Structs
* See Activity outline section below for readings

### Day 3

* Structs and arrays

### Day 4

* Introduction to C IO
* See Activity outline section below for readings

## Activity Outline

{{% alert info %}}
This week we are hitting some topics that are not
covered in the regular part of the book. It is more important than usual
that you check out the code samples in the Classroom slides section.
{{% /alert %}}


### Enums & Typedef

Read [learncpp.com's enum page](http://www.learncpp.com/cpp-tutorial/45-enumerated-types/) and
the book's [online enum supplement](http://liveexample.pearsoncmg.com/liang/cpp/supplement/Supplement4hEnumeratedTypes.pdf)

Read [leancpp.com's Typedef page](http://www.learncpp.com/cpp-tutorial/46-typedefs/)

This video adds a couple important points about enums and typedef's—watch it after reading the pages listed above:  

{{< youtube videoid="ziPqD60GTSU" title="Typedef and Enum" >}}

Do Enums CPPLab

Bit flags are a similar idea to enums—a way to represent multiple
options, but unlike enums, you can have a variable that is the
combination of two values. This video introduces the basic idea:  

{{< youtube videoid="ikAeG7_MuXs" title="Bit Flags" >}}

You can find a [bitflag tutorial here](http://forum.codecall.net/topic/56591-bit-fields-flags-tutorial-with-example/).
You do not need to become an expert with them, but definitely need
to recognize what is going on when you see code like BOLD | ITALIC.

### Structs

Read [learncpp.com's struct page](http://www.learncpp.com/cpp-tutorial/47-structs/)

These videos (and the accompanying slides and example code in the
Classroom Files link) introduce some concepts that are not covered
in the reading:  

{{< youtube videoid="Evra7WBVZTA" title="Struct Basics" >}}
{{< youtube videoid="7mY4_oe9Ga4" title="Structs and Arrays" >}}

Do Structs CPPLab


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
include that header as **\<cstdio\>**

[This document](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/c1_Basics.html)
has concise examples of using printf and scanf (scroll way down to
sections 3.8 and 3.9. [cplusplus.com has a less friendly but more complete listing](http://www.cplusplus.com/reference/cstdio/printf/)
of printf options.

Do the C IO CPPLab


### Assignment

Start working on the assignment. Because this is the final assignment,
the deadline will work a little differently. It is due the Sunday before
finals week and no late work will be accepted. This assignment does require a bit of work
to get set up and going, so be sure to start early.

<!-- ### PhotoChop

I have introduced an extra credit assignment called PhotoChop, which
gives you a fun way to experiment with image manipulation and working
in a codebase that you didn't make yourself (which is what most programmers
spend most of their time doing). This assignment is due at the same time
as the regular assignment, and also will not be accepted late. -->
