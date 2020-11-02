---
# Page metadata.
title: Assignment 4
summary: BSTs

layout: single
---

Upon completion of this assignment you will be able to use a binary search tree to implement
an efficient sorted collection.

## Setup

Begin by accepting the assignment repository listed in Elearn.

Then add these data files:

* [IPListA.txt](files/IPListA.txt)

* [IPListB.txt](files/IPListB.txt)

They will not be included in the repository - I will use my own copies of those files. Make
sure not to rename them or reformat the contents and write code that depends on
the new contents.

## Submission

You should submit the following:

* In Elearn: A pdf document with your responses to write up questions.

* Push final changes to github before the assignment deadline.

## Overview

In this assignment you will be implementing a Set data structure and using it
to process a large number of records.

The starter code includes the following files:

* **MySet.h** in which you will implement a BST based set. You may add any needed code to
this file, but should not modify existing function declarations in MySet (I may run
my own tests that depend on those functions).

* **main.cpp** where you will implement tests/demonstrations of your code

## Assignment Requirements & Output

* You should write one main function that does each of the assignment parts in order.
You should use functions to make your main a manageable length and easy to understand.
* Implement functions as efficiently as reasonably possible.
(Reasonable means you pick the optimal BigO based on learned structures.)
* Do not prompt for ANY input other than what is specified for in the descriptions below.
* Your code should not have memory leaks or other memory related errors. Check with Dr. Memory.
* You may use std::vector as a helper inside individual functions. But your Set should be
built using SetNode's, and not rely on any std::container for data storage.

    {{% alert info %}}
This is different than previous assignments!
    {{% /alert %}}

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

Make a makefile called **MyMake** that builds **linux/assign4.exe** with the default (first) rule.

## Part 1

(30% of grade: 25% code, 5% writeup)

The file **IPListA.txt** has a list of IPv4 (Internet Protocol version 4) addresses that have
accessed a server. We are going to load them into a set to identify all the unique addresses
that have accessed the site. IPv4 addresses have the format xxx.xxx.xxx.xxx where each group
of xxx is a number from 0-256. We will treat addresses as strings instead of structs or
something else more complicated. For ease of doing so, the IP addresses are 0 padded
(7 is written as 007).

Add code to main.cpp and implement needed functions in MySet.h to do the following:

* Read in an int **size**, anywhere the assignment refers to **size**, use this number.
This should be the ONLY input your program requests.

* Read in **size** records from IPListA.txt and add them to a MySet\<string> called **setA**.

{{% alert warning %}}
A Set should not allow duplicate items (that would be a Multiset). Make sure your Set ignores
attempts to add duplicates.

Your Set should work for any data type that supports the comparison operators (<, > ==).
Do not write code that expects to be working with a string or any other specific data type.
{{% /alert %}}

**Print out the number of items (unique addresses) in setA**

**Print out the depth of setA.**

### Writeup

1A) Give the time taken to read in the data for sets of sizes 10,000, 100,000, and 1,000,000.

1B) Estimate the time to read in 10,000,000 records. Show work.

## Part 2

(10% of grade:  5% code, 5% writeup)

Add code to main.cpp and implement needed functions in MySet.h to do the following:

**Call getSmallest on setA and print the result.**

### Writeup

2A) Give the time it takes to do getSmallest with problem size of 1,000,000.  
*Hint: You likely need a timing loop to do this! Time just getting the value, not printing
it over and over.*

2B) Use the results and the bigO of getSmallest to estimate the time to do getSmallest
on a set with 10,000,000,000 items (ten billion).

## Part 3

(15% of grade)

Add code to main.cpp and implement needed functions in MySet.h to do the following:

* Copy setA into setA2.
* Call removeLargest 10 times on setA2 and **print out the result of each call**. The
removeLargest function should NOT call remove to do the work - it should be
standalone from part 4.

**Print out the number of items (unique addresses) in setA2.**

### Writeup

3A) Provide a table of times taken to get and then remove n packets for n = 1000, 4000, 16000, 64000

3B) What is the Big-O of the existing algorithm for getting n packets? Explain your reasoning.

3C) What is the Big-O for the existing algorithm for removing n packets? Explain your reasoning.

3D) How long would this algorithm take to get and then remove 10,000,000 packets? Show work.

## Part 4

(15% of grade)

Addresses that look like 192.168.XXX.XXX are used as local addresses - we want to remove them so as to ignore local traffic. 

Add code to main.cpp and implement needed functions in MySet.h to do the following:

* Copy setA into setA3.
* Call the function getLocalIPs to create a vector containing all the IP address that
start with 192.168.
* Remove each of those addresses from setA3.

**Print out the number of remaining items in setA3.**

{{% alert info %}}
Note: getLocalIPs will take a lot of time to run with DrMemory (building all the strings involves lots
of memory work). To do a quicker DrMemory check on part 4 while debugging, you might want to
comment out your call to getLocalIPs and manually build a vector with some IP addresses. Make
sure to restore the full list when you are done testing. Here is a sample of what you might use
to do some basic checks:

    vector<string> localIPs;
    //these IPs are in the first 20 records of list A
    localIPs.push_back("192.168.221.196");
    localIPs.push_back("192.168.170.023");
    localIPs.push_back("192.168.163.204");
    localIPs.push_back("192.168.088.223");
    localIPs.push_back("192.168.044.124");
    //this one is not in list at all
    localIPs.push_back("192.168.001.123");

{{% /alert %}}

## Part 5

(10% of grade)

Add code to main.cpp and implement needed functions in MySet.h to do the following:

* Use the getRange range function to get a vector containing all of the records from setA
that are greater than or equal to "100.000.000.000" and less than "110.000.000.000".

**Print out the time getRange took.**

**Then print out the number of items in the vector and the first 5 IPs from it.**

## Part 6

(15% of grade: 10% code, 5% writeup)

Add code to main.cpp and implement needed functions in MySet.h to do the following:

* Read in size number of records from IPListB.txt and add them to a MySet\<string> called setB.
* Use the intersectionWith function to get setAIB - the set of IP addresses that are in
both setA and setB.

**Print the size of this set and the smallest item in the set.**

### Writeup

6A) Give a table of the time to run intersectionWith on at least three different sizes that
produce measurable times. Pick sizes that increase in by a constant multiple. (Something
like 1000, 10000, 100000 or 2000, 4000, 8000)

6B) Give the BigO of your algorithm. Explain why your algorithm is that BigO (describe
how the algorithm does its job and how that determines the BigO).

## Part 7

(5% of grade)

Add code to main.cpp and implement needed functions in MySet.h to do the following:

* If you did not do so as part 6, read size number of records from IPListB.txt and add
them to a MySet\<string> called setB.
* Use the unionWith function to get setAUB - the set of IP addresses that are in either setA and setB. 

**Print the size of this set and the smallest item in the set.**
