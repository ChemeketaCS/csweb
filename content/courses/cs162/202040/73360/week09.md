---
title: Week 9 - Pointer Based Structures
linktitle: Week 9 

weight: 90
---

## Learning objectives

Upon finishing this week, you should be able to:

* Construct and iterate through a linked list
* Use recursive functions to traverse linked structures
* Use the std:list class

## Suggested pacing

### Day 1

* Read Ch 20.1-20.2
* LinkedList WS

### Day 2

* Linked List Functions & Recursion
* LinkedList CPPLab

### Day 3

* Trees & Graphs
* Start assignment

### Day 4

* Std::List - Read Ch 22.1, 22.2, 22.5
* Do Std::List CPPLab

## Online Activity Outline

### Linked Lists Intro

We learned one way to build "a list of items" - use an array to store them.
Linked Lists are another way to build the same high level structure. Only in a
linked list, we use a chain of objects or structs that connected by pointers
to hold all the data.

Read Ch20.0-20.2 and watch these videos:

{{< youtube videoid="A_qKfKatbVA" >}}

{{< youtube videoid="Ii-b315b_D0" >}}

Then tackle the Linked List WS.

### Linked Lists Functions

To simplify working with a list of Nodes, we can write functions to help out:

{{< youtube videoid="s-PuhBvG1OU" >}}

{{< youtube videoid="capRYi9RJx0" >}}

Do the Linked List CPPLab

### Linked Lists Functions

More complex structures can also be built with pointers, like trees and graphs.
Watch this video about those kinds of structures:

{{< youtube videoid="xB6cwWGk8M4" >}}

You should be ready to tackle the last assignment.

### The STL and std::list

The Standard Template Library is a collection of generic
(templated) algorithms largely focused on
storing and working with collections of data. In CS162 and CS260 we are learning
about these algorithms and structures and how they work. But when a developer
needs to make use of one, they generally rely on a prebuilt version of a data
structure. Most languages provide prebuilt implementations of common data structures
and the STL is where we can find most of those in C++.

We have already learned about one structure in the STL - the **std::vector**. Much
like vector is the library implementation of an array based list,
there is a standard version of a linked list: **std::list**.

Read Ch22.1, 22.2, 22.5 and then tackle the std::list CPPlab.
