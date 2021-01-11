---
title: Week 2 - Unit Testing, More OOP and Composition
linktitle: Week 2

weight: 20
---

## Learning objectives

-   Describe and apply the principles of Unit testing and Test Driven
    Development
-   Use objects as input and output for functions
-   Recognize how and when to appropriate use const and static class
    members
-   Use composition to build objects from other objects

## Deadlines this week

-   Monday 11:59PM - Assignment 1.
-   Fri 11:59PM - CppLab Object Oriented Thinking
-   Saturday 11:59PM - CppLab Composition

## Suggested pacing

### Day 1

-   Introduction to Unit Testing
-   Work through [UnitTesting Guide](https://docs.google.com/document/d/1tF7Jkm_mLEq4P0pT1dOoTe5SwzvICl33bw2mofmol4M/edit?usp=sharing)
    Make sure to pull an updated copy of the CS162 source code
    before starting.

### Day 2

-   Read 10.3-10.4
-   Objects, Functions, & Arrays
-   Read 10.5-10.6, 10.10
-   Static, Const, Interacting Objects - note the book does not have
    great examples of interacting objects…review class power
    points/examples for those.
-   CPPLab - OOThinking

### Day 3

-   Read 10.8 and - learncpp.com Ch 10.1/10.2 for Composition
-   Read 10.7, 10.11 - OODesign
-   CPPLab - Composition

### Day 4

-   Pointer review
-   Read 11.2-4, 11.6, 11.7
-   [Git Tutorial](https://docs.google.com/document/d/1S8dMsT6B2B7jW2Z0OWoV6TT8GOlYkDa9Bw0mhrUTuSU/edit?usp=sharing) -
    follow the instructions in parts 2/3 to make your own cs162
    repository and add some files to it.

## Online Activity Outline

### Unit Tests & Test Driven Development

Watch these videos:

{{< youtube videoid="ySz6evqLciY" title="Unit Testing Concepts" >}}
{{< youtube videoid="Up1X-tjkEds" title="Unit Testing Details" >}}

Work through the [UnitTesting Guide](https://docs.google.com/document/d/1tF7Jkm_mLEq4P0pT1dOoTe5SwzvICl33bw2mofmol4M/edit?usp=sharing).
You can find the starter code in Github (UnitTestDemo).
You will have to write unit tests for your code this week, so make
sure to practice getting things set up. You can peek at my
UnitTestDemoCompleted folder in the Github repository for examples
of written unit tests.

These optional readings explain test driven development:

-   [This stack overflow thread](http://stackoverflow.com/questions/1383/what-is-unit-testing)
    has nice concise descriptions of what unit testing is and why it
    is good. Read the first three responses to the question.
-   [A thorough reading on test driven development](http://www.jamesshore.com/Agile-Book/test_driven_development.html).
-   If you prefer learning via humorous slide shows, try this: [Unit testing presentation](http://www.masukomi.org/talks/unit_testing/#1)
    (Press arrow keys to advance/backup)

### Object Passing & Objects with Arrays

Read 10.3-10.4.

Grab an updated copy of the CS162 Github repository and try out the
code in the ObjectFunctionsArrays project. This video explains it:

{{< youtube videoid="IFLzCK1cGSE" title="Objects With Functions & Arrays" >}}

### Static, Const and Interacting Objects

Read 10.5-10.6, 10.10 - Static, Const, Interacting Objects.

The book does not have good examples of interacting objects…review
video, sample code for those (Circle functions that take a Point).

{{< youtube videoid="I0rid-WHwxI" title="Const Members & Interaction" >}}
{{< youtube videoid="Qj24oibttyw" title="Static Members" >}}

Do CPPLab - OOThinking.

### OOD and Composition

Read 10.7 and 10.11 for general advice about designing objects - I have one extra point to add:

**Single Representation:** We only want to represent each piece of
information once. If you already have a piece of data represented in
a class, or the information to calculate it, you should not store it
again. For example, in the Circle class, we might have a getArea()
function, but do not have an area variable. getArea() can calculate
the area whenever it is needed by using the radius which we already
store. If we stored area explicitly, it would be much easier to do
something dumb like change the radius of the circle and forget to
update the area. Only if after testing do we realize the calculation
takes an inordinate amount of time (say we need to get a circle's
area thousands of times per second) should we worry about explicitly
storing the calculated value.

Read 10.8 about Composition. I think the treatment there is a bit weak, so I also recommend reading
[learncpp.com](http://www.learncpp.com/) Ch 10.1/10.2 about Composition.

This video walks through a sample of using composition.

{{< youtube videoid="0anNt7QAsCw" title="Object Composition" >}}

### Pointers Review

This material really goes with next week…you do not need it for this
week's assignment.

Learning to think in terms of pointers is one of the biggest
abstractions you will have to learn in CS. Go back to week 10 of
CS161 and watch the pointer basics video. Reread 11.1 and 11.2.

Read 11.3-11.4, 11.6. This material expands on the basics from 161.

Watch this video (related code is in the Github repository):

{{< youtube videoid="t1VDYJ_k1Fo" title="Pointers & Functions" >}}

Do the Pointer Worksheet from the Classroom files link - it is
similar to the one from CS161 but has more problems. Start by
reading the PointerWSExample file - it shows you how you should
record the effects of lines of code. Use the PointerWSKey to check
your work.

### Git Setup

In week 1 we introduced source control so that you could access my
code. Now is a good time for you to set up your own repository for your
code. Doing so (and using it) means you will be able to always access
your code wherever you are.

Follow the instructions in parts 2 and 3 of the [Git Tutorial] to make
your own CS162 repository and add some files to it.

  [Git Tutorial]: https://docs.google.com/document/d/1S8dMsT6B2B7jW2Z0OWoV6TT8GOlYkDa9Bw0mhrUTuSU/edit?usp=sharing

## Extra Info

### Learncpp.com

This online tutorial covers *some* of the same ground as the Liang readings:
[LearnCpp.com chapters 8.10-8.11, 10.1-10.2](http://www.learncpp.com/)
