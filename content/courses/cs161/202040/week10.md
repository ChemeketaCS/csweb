---
title: Week 10 - Intro to Pointers and Dynamic Data
linktitle: Week 10

weight: 100
---

## Learning Objectives

Upon finishing this learning module, you should be able to:

* Read code that uses pointers and references
* Create dynamically allocated storage

{{% alert warning %}}
No late work will be accepted after Sunday 11:59,
to allow time for grading during finals week.
{{% /alert %}}

## Schedule

### Day 1

* C Strings and C based string/io functions
* Read Ch 7.11.1 and 7.11.2, skim rest of 7.11

### Day 2
    
* Pointer Basics
* Read chapter 11.1-11.3
* Pointer Worksheet

### Day 3

* Dynamic Memory
* Read chapter 11.9

### Day 4
    
* Final/Quiz Review

## Activity Outline

### C-Strings

Strings in C are just arrays of characters. Because arrays need to have
a fixed size, we often have to allocate more space then necessary and
use a special character to mark the end of our string within the
array.  

{{% alert info %}}
In general, you should keep using C++ strings to do your work.
ou should know about C-strings, but they should not be your go-to tool in C++.
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

Do the CStrings CPPLab.


### Pointers
  
{{% alert info %}}
This week you do not have to write code using
pointers (unless you do the challenge for assignment 9). Our goal with
the material in Ch11 is just to gain an understanding of what pointers
are and how they work. They are a tricky concept that we will learn more
about in 162 and rely on heavily for 260... this is the gentle preview
of the topic. So by all means, try things out in QtCreator, but keep in
mind that our goal for now is just to understand them, not proficiently
use them.
{{% /alert %}}

Read chapter 11.1-11.3 about the basics of pointers. This video
helps explain what they are:  

{{< youtube videoid="8U5MDVdeotM" title="Pointers" >}}

Do the Pointer worksheet from the Classroom files link. There is an
example problem and key is available in that folder as well.

This [C++ Code Visualizer](http://pythontutor.com/cpp.html#mode=edit) can be a
handy tool for visualizing what is happening in memory. It shows
pointers as arrows to the location they point. That is a good high
level mental model, but you should also understand that the pointer
is storing something - a memory address.

Watch this video about dynamic memory:  

{{< youtube videoid="D1JGBW6qHeU" title="Dynamic Memory" >}}

Read 11.9

### Final prep

The final exam will be a similar format to the midterm. There is a practice
final available in elearn.

## Extra Info

### C++ Notes

These items linked to on this page have nice concise pointer information  
[C++ Notes](http://www.fredosaurus.com/notes-cpp/) focus on ones called:

* Addresses, pointers, references
* Pointers
* The NULL pointer
* Dynamic Allocation of Arrays