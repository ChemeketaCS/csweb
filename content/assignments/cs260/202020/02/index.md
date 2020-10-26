---
# Page metadata.
title: Assignment 2
summary: Array-based and linked lists.

layout: single
---

Upon completion of this assignment you will be able to use array-based lists and
linked lists for storing and manipulating data.

## Setup

Begin by accepting the assignment repository listed in Elearn.

The two data files you need are provided here:

* [25000AddressesA.txt](25000AddressesA.txt)
* [25000AddressesB.txt](25000AddressesB.txt)

Download them and place into the folder with your cloned code. We will not be adding them to the repository.

## Submission

You should submit the following:

* In Elearn: A pdf document with your responses to write up questions.

* Push final changes to github before the assignment deadline. You should get in
the habit of pushing changes every time you get a new part of the assignment working.

## Overview

In this assignment you will be implementing a linked list and implementing some functions
in both an array-based list and a linked list to compare them.

The following files are provided. File names in *italics* are files you probably
should not have to modify unless you want to add extra functions.

* ***Address.h*** and **Address.cpp** which implement an `Address` stuct as well as a
factory class for reading in Addresses from the text files.

* ***ArrayList.h*** which has a version of the templated `ArrayList` from class.
This version declares a few new functions which are not implemented.

* ***AddressArrayList.h*** and **AddressArrayList.cpp** which will provide specialized
implementations of some functions for `ArrayList<Address>`. It also has a print function
for displaying parts of an `ArrayList<Address>`.

* **AddressLinkedList.h** and **AddressLinkedList.cpp** which provide the declaration
and implementation for a non-templated `AddressLinkedList` that holds `Address` structs.

* **main.cpp** that has some starter code that uses the factory class to read records
into two `ArrayList<Address>`

## Assignment Requirements & Output

* You should write one main function that does each of the assignment parts in order.
You should use functions to make your main a manageable length and easy to understand.
* Implement functions as efficiently as reasonably possible.
(Reasonable means you pick the optimal BigO based on learned structures.)
* Your code should not have memory leaks or other memory related errors. Check with Dr. Memory.
* You are not to use any library containers, but you can use utilities functions like std::swap.
* Do not prompt for ANY input other than the **size** main already prompts for.

### Output

Anything you are asked to print out should be printed in your final program with a clear label.

Label each section's output and print something like this before each section:
```
-----------------------------Section 1----------------------------
…
```

There should not be a lot of extra debugging output.

## Grading

Your code will be built and tested using the Linux based Chemeketa Development Environment. Your
code must compile and run in that environment to receive credit.

{{% alert warning %}}
I will score the output of your program as is. I will not fix parts of your code so that I can
test other parts. If your program dies trying to run part 2 of an assignment, you will NOT get
credit for the output of any parts after that, even if they would work perfectly.
{{% /alert %}}

You can get partial credit for code that is mostly there but broken. The maximum amount of
credit awarded for each section will be:

* Code runs and provides correct output - full credit.
* Code runs and provides incorrect output - partial credit, potentially quite high.
* Code does not run or produce output (potentially because the program crashed in a previous
section)- partial credit - generally less than incorrect output.
* Code that is commented out - partial credit. Less than incorrect output. If part of a program
crashes but later parts work correctly, comment it out and leave a note in the output like
"Part 4 disabled… causes crash" so I know to go check out what you did.
* Code that never runs because something before it crashed. Same as commented out code.

## Part 0

(0% of grade - required for assignment to be graded)

Make a makefile called **MyMake** - when the make utility is executed with it, it should build an
executable called **linux/assign2.exe** from your code files. Test this early and often.

The existing main reads in a **size**. It will read in that many total records, half from file A
and half from file B.  Anywhere below that instructions refer to **size**, you should use that value.

## Part 1

(15% of grade: 10% code, 5% writeup)

In AddressArrayList.cpp, implement the combine function. See AddressArrayList.h
for documentation.

In main, use it to combine aListB into aListA.

**Print out the number of items in aListA and aListB.**  

**Print out addresses with index (size/2 - 2) to (size/2 + 1) from aListA.**
(This should be last two from original listA and first two from original listB)

### Writeup (Answer these questions in a document you will upload to elearn)

1A) Describe your combine algorithm in high level terms or pseduocode.

1B) What is the Big-O? Why?

{{% alert info %}}
Hint - sanity check your Big-O by running multiple problem sizes and looking at timing results.
Do they make sense for what you claimed?
{{% /alert %}}

## Part 2

(15% of grade: 10% code, 5% writeup)

In AddressArrayList.cpp, implement the extractAllMatches function. See the .h file for documentation.

In main, use it to extract all of the Oregon addresses from aListA into a new list, aListC.

**Print out the lengths of aListA and aListC.**

### Writeup

2A) Describe your algorithm for extracting the items of one array-based list to another.

2B) What is the Big-O? Why? *(Hint the worst case here is that every item has to get
extracted, but you do not know that beforehand).*

## Part 3

(30% of grade)

{{% alert info %}}
In the read of the assignment you will be implementing a linked list that only has to deal with
Address structs. You can implement it with a dummy node at head or not. The list should not
leak memory – I recommend you use Dr.Memory or similar to check that it does not (I will).

The .h declares a list of functions you are likely to want or at least find useful.
You do NOT have to implement all of them. If you never use something, it is OK to leave it unimplemented.
{{% /alert %}}

Add code to AddressLinkedList.cpp so that you can do the following in main:

Make two new AddressFactory objects and read size/2 items from fileA and fileB
into two linked lists: linkListA and linkListB. Items should be added to the lists so they
are in the same order as in the files (add to end of lists).

**Use printRange to print indexes 2-4 (items 3-5) of each list.** (You may assume size will
always be big enough that the lists are at least 5 long).

## Part 4

(20% of grade: 15% code, 5% writeup)
Add code to AddressLinkedList.cpp so that you can do the following in main:

Copy linkListA and linkListB into two new lists, linkListC and linkListD.

Use the combine function to merge linkListD into linkListC. See the .h for documentation of
expected behavior.

**Print out the number of items in linkListC and linkListD.**

**Print out addresses with index (size/2 - 2) to (size/2 + 1) from linkListC using printRange.**
(This should be last two from original linkListA and first two from original linkListB) 

### Writeup

4A) Describe your combine algorithm in high level terms/pseduocode.

4B) What is the Big-O? Why?

## Part 5

(15% of grade: 10% code, 5% writeup)

Add code to AddressLinkedList.cpp so that you can do the following in main:

Use the extractAllMatches of the Oregon addresses from linkListC to a new linkListE.
See the .h for documentation.

**Print out the lengths of linkListC and linkListE.**

**Use printRange to print out the first two records of linkListE.**

### Writeup

5A) Describe your algorithm for extracting the items of one linked list to another.

5B) What is the Big-O? Why?

## Part 6

(5% of grade)

Add code to AddressLinkedList.cpp so that you can do the following in main:

Use the interleave function to mix linkListB into linkListA. See the .h for documentation.

**Print the first 5 records from linkListA.**
