---
title: Week 4 - Inheritance
linktitle: Week 4

weight: 40
---

## Learning objectives

Upon finishing this week, you should be able to:

-   Use inheritance to extend classes
-   Identify appropriate uses for abstract classes
-   Describe how virtual functions differ from regular ones and enable
    polymorphism

## Deadlines this week

-   Mon 11:59PM - Assignment 3
-   Thursday 11:59PM - CPPLab Inheritance 1
-   Friday 11:59PM - CPPLab Inheritance 2

## Suggested pacing

### Day 1

-   Inheritance
-   Read 15.1-15.5. Note about 15.4: We haven't talked about
    destructors yet... we will later - they are special functions
    that run as the object is removed from memory.
-   Do CPPLab Inheritance 1

### Day 2

-   Virtual Functions and Polymorphism, Abstract classes
-   Read 15.6-15.10
-   Do CPPLab Inheritance 2

### Day 3

-   Designing with inheritance, multiple inheritance, and object
    slicing
-   Read 15.11
-   Do design activity

### Day 4

-   Operator Overloading I
-   Read 14.1-14.3, 14.5-14.7
-   CPPLab - Operator Basics - Due Next Week

## Online Activity Outline

### Inheritance Basics

Inheritance is one of the fundamental tools for code reuse in Object
Oriented programming. It allows one class to define itself as a
specialized version of another class. Learncpp.com has a [nice
overview](http://www.learncpp.com/cpp-tutorial/111-introduction-to-inheritance/)
of why we care about inheritance and the conceptual idea.

Read 15.1-15.5. In 15.4 don't worry too much about what a
destructor is and why we need them - we will hit them later.

These videos offer some tips:

{{< youtube videoid="J1Zo-QoEODw" title="Inheritance Basics" >}}
{{< youtube videoid="9lPtNNtjf0I" title="Inheritance - Using parent constructors & functions" >}}

Read 15.9 and watch this video about the protected access modifier:

{{< youtube videoid="Bf6pLUObtRM" title="Protected" >}}

Do CPPLab Inheritance 1

### Virtual Functions, Abstract Classes and Dynamic Casting

Read 15.6-15.11

These videos touch on some of the key ideas:

{{< youtube videoid="aVC3PmmnVwY" title="Polymorphism" >}}
{{< youtube videoid="DyLBQhnAORM" title="Abstract Classes" >}}

Do CPPLab Inheritance 2

### Big Picture

These two videos briefly introduce the ideas of multiple inheritance
and interfaces and talk about how to go about using inheritance to
do class design:

{{< youtube videoid="XhmuQ8q2fhs" title="Multiple Inheritance" >}}
{{< youtube videoid="jD-SyFEGPdA" title="OODesign" >}}

Look in the classroom files for the **Inheritance Design Activity**.
It is a quick pen and paper exercise based on OO Design video.

### Operator Overloading Basics

Read 14.1-14.3, 14.5-14.7 on basic operator overloading. Just skim
14.3... it is showing you what a class looks like without using
operators. Operator overloading is not available in every language,
but is critical to being able to do things the C++ way when it comes
to writing generic code (how do you write a templated sort function
that can work on your custom class as well as basic data types? You
make sure your class knows about the < operator!).
14.2 introduces a class that implements functions that do what
operators should... it is the way we would do things in Java or
Python. The rest of the chapter looks at how to replace those with
actual operators.
Note that the 162 code repositry has a RationalOperatorsDay1 project
that has just these concepts and a RationalOperatorsFinal that has
the code including what we learn in the next section.
This video introduces the basics of operator overloading:

{{< youtube videoid="6DhingvywnU" title="Operator Basics" >}}

Do CPPLab Operator Basics.

## Extra Info

### Learncpp.com

This online tutorial covers *some* of the same ground as the Liang
readings:
[LearnCpp.com chapters 11.1-11.6](http://www.learncpp.com/)
