---
title: Week 6 - Memory Management and Rule of Three
linktitle: Week 6

weight: 60
---

## Learning objectives

Upon finishing this week, you should be able to:

-   Accurately describe how a program is using the stack, heap and
    pointers
-   Use destructors and copy constructors appropriately in classes
-   Describe and diagram the difference between a deep and a shallow
    copy
-   Write simple container classes that manage dynamic memory


## Suggested pacing

### Day 1

-   Chemeketa Development Environment and DrMemory Intro

### Day 2

-   Dynamic Memory, Pointers & Arrays
-   Read 11.5, 11.8-11.9
-   Pointer Drawing WS

### Day 3

-   Destructors, Copy Constructors, Assignment Operator
-   Read 11.12-11.15, 14.13
-   CPPLab - Copy Constructors & Assignment Operators

### Day 4

-   Garbage collection and smart pointers
-   Smart Pointers Tutorial - CPP11\_smart\_ptrs in the classroom files. Read pages 1-4 for overview, rest has
    details for actually using.
-   [Garbage collection applet](http://web.informatik.uni-bonn.de/IV/martini/Lehre/Veranstaltungen/SS00/InformatikII/JavaSimulation/HeapOfFish.html)
-   [Garbage collection overview](http://www.oracle.com/webfolder/technetwork/tutorials/obe/java/gc01/index.html) -
    Describing Garbage Collection section

## Online Activity Outline

### Setup and Test Development Environment and DrMemory

There is a fabulously useful tool called DrMemory that helps you find
memory related errors and leaks. Unfortunately, it is not well supported
for Windows. So I provide a virtual linux machine you can run on your
computer to make use of it.

From this point on in CS162 and CS260 your code will be tested in this
environment. It is expected you will be testing your code in this
environment (using DrMemory). You can still work on your code using
QTCreator in your normal operating system, but you should be testing it
in the linux virtual machine as well.

At home, install the dev environment (VirtualBox & Vagrant) - see
[Chemeketa DevEn Setup](http://computerscience.chemeketa.edu/CSResources/Vagrant/ChemeketaCSDevEnvironment.pdf)
instructions - also available under the Resources Links at top of page.
The most common source of problems involving timeouts or other failures
by Vagrant to start up the virtual machine is that hardware virtualization
is not enabled on your computer - pay attention to #3 under Requirements!

Watch this video introducing how to use the development environment:

{{< youtube videoid="CtjCECDGefM" >}}

Follow the instructions provided in the [Chemeketa DevEn Use](http://computerscience.chemeketa.edu/CSResources/Vagrant/ChemeketaCSDevBuildRun.pdf)
document linked under Resources at the top of the page. Walk through building,
running and testing the code provided.

### Dynamic Memory

Review chapter 11.9 & dynamic memory video from week 10 of 161.

Do the PointerDrawing WS from the classroom files link. This video
demonstrates how to do the problems:

{{< youtube videoid="IaNCK6oyeFw" title="Pointer Coloring" >}}

### Pointers and Arrays

Pointers and arrays are surprisingly interchangeable in C/C++.

Read 11.5, 11.8.

Watch this video (related code is in the cs162 repository):

{{< youtube videoid="2Rt_dmfo3Go" title="Pointers & Arrays" >}}

### Memory Management in Classes

Read 11.12-11.15 on using classes to manage memory.

This video explains the core ideas of these sections. You can find
the Polygon code in the DestructorCopyConstructor example in the
Github repository:

{{< youtube videoid="vC9oZ-XbhY4" title="Managing Memory" >}}

Tackle the first two problems in the Rule of Three CPPLab (not the
Assignment operator yet)

### Assignment Operator and Rule of Three

We have seen two parts of the rule of three - the idea that any
class which directly manages data on the heap (stores pointers)
generally needs to implement a custom destructor, copy constructor
and assignment operator.

The first video is one someone else made that reviews the need for
the rule of three. Watch it if you aren't 100% sure you have the
idea. The second video is my introduction to the actual details of
the assignment operator.

{{< youtube videoid="F-7Rpt2D-zo" title="Rule of three" >}}
{{< youtube videoid="M5SlUgSKXHc" title="Assignment operator" >}}

Finish CPPLab Operators - Advanced (assignment operator problem)

Note: in modern C++ there are two other operators related to the rule
of three: move constructor and move assignment operator. They are used
to write efficient code - omitting them does not cause the same kind
of errors that forgetting the rule of three does. The kind of thing a
professional C++ developer should care about - but for now we have better
uses for your brain cells. If you want to learn more about them check
this tutorial about the [move constructor and move assignment operator].

  [move constructor and move assignment operator]: http://blog.smartbear.com/c-plus-plus/c11-tutorial-introducing-the-move-constructor-and-the-move-assignment-operator/

Another note: If you are managing resources in classes that use
inheritance, you have to worry about child classes correctly calling
parent class assignment operators and copy constructors. You also
have to worry about virtual dispatch. We will not be covering these
topics, but there is a short powerpoint deck in the Files link about
this.

### Container Classes

As a wrapup, check out out the SimpleIntList code sample from the github
repository. It is an example of a class that manages memory to help do a
job. Checking out how it works will give you a good idea how to approach
this week's assignment.

{{< youtube videoid="5ZNkVuvoZeo" title="Simple Int Lists" >}}

## Extra Info

### Garbage collection and smart pointers

You may be starting to realize that managing memory on our own is
difficult and error prone. Fortunately, it is not something that we
always have to do. Many programming languages provide tools to help
remove some of the burdens - as you work on the assignment for the
week you can take some time to learn at a conceptual level about
these tools. (You will NOT be using either of these tools this
week). This video introduces the big ideas:

{{< youtube videoid="yq1J9OiKqu8" title="Garbage Collection/Smart Pointers" >}}

Readings on garbage collection.

- [Garbage collection overview](https://plumbr.io/handbook/what-is-garbage-collection) - compares garbage collection to the alternatives
- [Garbage collection details](https://plumbr.io/handbook/garbage-collection-algorithms) - focus on Mark-Sweep and Mark-Sweep-Compact

Smart pointers are a tool available in C++ to make memory management
easier (but they don't help you much until you actually understand
pointers). Read pages 1-4 of the SmartPointers tutorial in classroom
link. That provides an overview of what they are... if you are
interested you can read the rest of the tutorial for more info on
the syntax and more complex samples.
