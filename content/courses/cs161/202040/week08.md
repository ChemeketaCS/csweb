---
title: Week 8 - C Strings and Multidimensional Arrays
linktitle: Week 8

weight: 80
---

## Learning objectives

Upon finishing this learning module, you should be able to:

* Design and write code using multidimensional arrays
* Describe the high level differences between C++ strings and C strings
* Use C style strings and the string functions that work on them

## Quiz

Open Thursday–Sat in Elearn, *time limited* (60 minutes), and *not*
collaborative.  Covers weeks 5, 6, and 7.

## Schedule

### Day 1

* C Strings and C based string/io functions
* Read Ch 7.11.1 and 7.11.2, skim rest of 7.11
* CPPLab C Strings

### Day 2

* Multidimensional arrays
* CPPLab Multidimensional arrays
* Read Ch 8.1-8.4

### Day 3

* Multidimensional arrays–Sample Programs
* Read Ch 8.6-8.8.1

### Day 4

* Quiz Review
* Graphics transformations with matrices
* CPPLab time

## Activity Outline

### C-Strings

Strings in C are just arrays of characters. Because arrays need to have
a fixed size, we often have to allocate more space then necessary and
use a special character to mark the end of our string within the
array.  

{{% alert info %}}
In general, you should keep using C++ strings to do your work.
You should know about C-strings, but they should not be your go-to tool in C++.
{{% /alert %}}

Read Ch 7.11.1 and 7.11.2, skim rest of 7.11 (don't need to memorize
any of this, usually won't use these in C++, but nice to know what
is there if you are programming C). This video talks about
C-strings.  

{{< youtube videoid="VXSUcGSuOS4" title="C String" >}}

Buffer overflows are a way to use user input to change what is in
user memory. A distressingly large number of critical security
issues over the years have been related to this technique. This
video explains the basic ideas involved:  

{{< youtube videoid="ZEQ67dxNw1Q" title="Buffer Overflows" >}}

Do the C Strings CPPLab.

### Multi-dimensional Arrays

Read Ch 8.1-8.4  
This video has some background on why 2D arrays behave the way they
do and how to use the debugger on them in QtCreator:  

{{< youtube videoid="mPfsuslAt84" title="Multidimensional Arrays" >}}

Do the CPPLab Multidimensional Arrays.

Read Ch 8.5-8.8.1
This video talks through some of the interesting things in the
sample programs from those sections, as well as some things that
could be improved in them.  

{{< youtube videoid="H-qOMrdbG00" title="Multidimensional Samples" >}}

Start the assignment.

## Extra Info

### Optional extra

Watch this video about how matrices are used to handle transformations in computer graphics.  
There is a project folder MatrixGraphics and a pdf with instructions
in the Classroom slides/examples. Grab the project and
instructions and experiment with setting up a 2D array to work as a transformation matrix.

{{< youtube videoid="vQ60rFwh2ig" title="The True Power of the Matrix" >}}

### Learncpp.com

This online tutorial covers *some* of the same ground as the book
readings:  
[LearnCpp.com 9.5](http://www.learncpp.com/)  
