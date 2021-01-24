---
title: Week 7 - Templates
linktitle: Week 7

weight: 70
---

## Learning objectives

Upon finishing this week, you should be able to:

-   Create and use generic functions using templates
-   Create and use generic array based data structures

## Deadlines this week

-   Mon 11:59PM - Assignment 5
-   Fri 11:59PM - CppLab Templated Functions
-   Sun 11:59PM - CppLab Vector Basics

## Suggested pacing

### Day 1

-   No class

### Day 2

-   Templates Intro
-   Read 12.1-12.3
-   CPPLab Templated Functions

### Day 3

-   Templated container classes
-   Read 12.4-12.5

### Day 4

-   Vectors & Iterators
-   CPPLab Vector Basics
-   Read 12.6, 12.7, skim 12.8
-   Read Liang Ch 22.3, you can skim once you get to 22.3.1, 22.4.

## Online Activity Outline

### Templates Intro

Read 12.1-12.3

Watch this video on working with templates

{{< youtube videoid="cbB4CcKPIU8" title="Templates" >}}

CPPLab Templated Functions

### Templated Array Based Container Classes

Read 12.4-12.5. Note we are going to come back to 12.6/12.7 later -
but feel free to peek at them now. The ArrayList sample code I show
in the video below is essentially a simplified version of vector.

Watch these videos on the book Stack class and the ArrayList class
you can find in the Github repository. Building a similar container
class is your project this week.

{{< youtube videoid="gSTrVTz3FFg" title="Stack" >}}
{{< youtube videoid="LP_piALUPfI" title="ArrayList" >}}

### Vectors & Iterators

Read 12.6-12.7 and about Vectors as drop in replacements for arrays.
Watch this video:

{{< youtube videoid="9nRYJ0EYr9g" >}}

Read Liang Ch 22.3, you can skim once you get to 22.3.1. Also read
22.4. Watch the video below and make sure to check out the sample
code on Github.

{{< youtube videoid="1vm6nH0O7AY" >}}

Do the Vector Basics CPP Lab.

### Optional - Check out Boost::Units

Template based programming is responsible for some of the coolest "tricks"
possible in C++. Boost is an open source library of C++ code - most of
which involves templates. Boost::Units provides a way to use templates to
check dimensional analysis at compile time. If you just store different
units all as doubles, there is no way for the compiler to catch errors
like myArea = length + width.  Boost::units gives explicit templated
types to those ideas. For more details, you can read the [Boost::units
quick start].

  [Boost::units quick start]: http://www.boost.org/doc/libs/1_55_0/doc/html/boost_units/Quick_Start.html

Setting up Boost can be a bit of a chore - if you want to try out some
code, grab the BoostUnits.zip file from the classroom files.  It has a
project set up with all the needed parts of the boost libraries.

## Extra Info

### Learncpp.com

This online tutorial covers *some* of the same ground as the Liang
readings:
[LearnCpp.com chapters 13.1-13.6 and 9.14-15](http://www.learncpp.com/)
