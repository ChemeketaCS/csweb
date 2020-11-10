---
# Page metadata.
title: Assignment 3
summary: Stacks and Heaps

layout: single
---

Upon completion of this assignment you will be able to implement stacks and priority queues
and use them for problem solving.

## Setup

Begin by accepting the assignment repository listed in Elearn.

Then add this data file:

* [Document.html](files/Document.html) *(You may need to right click the link and Save
As to save the file instead of opening it.)*

It will be used for the Stack part of the assignment. We will not check it into source control.
I will grade with my own version of the document. So while you can modify it to test your code,
your code needs to work with the original version of the document.

All your files will need to remain in the same folder. To use QTCreator to work on your code,
you will need two different QTCreator projects (.pro files) that live in the same folder.
This is easiest to do by making a project elsewhere and then copying the .pro file into
your repository.

## Submission

You should submit the following:

* In Elearn: A pdf document with your responses to write up questions.

* Push final changes to github before the assignment deadline.

## Overview

In this assignment you will be implementing two separate programs. One will use a stack to
handle a parsing problem. The other will use compare using a priority queue to a sorted
array to keep track of the most important packet of data as your program processes them.

The starter code includes the following files. Files in *italics* should not need to be modified

For the stack program:

* **Stack.h** in which you will implement a LinkedList based stack

* **htmlParse.cpp** where you will implement the main function for the stack program

For the priority queue program:

* **PriorityQueue.h** in which you will implement your priority queue.

* ***DataStream.h*** and ***DataStream.cpp*** which have functions to generate fake packets of data.
You do not have to worry about any of the implementation code in the .cpp.

* **processPackets.cpp** has a main function you will use for the priority queue program

## Assignment Requirements & Output

* You should write one main function that does each of the assignment parts in order.
You should use functions to make your main a manageable length and easy to understand.
* Implement functions as efficiently as reasonably possible.
(Reasonable means you pick the optimal BigO based on learned structures.)
* Your code should not have memory leaks or other memory related errors. Check with Dr. Memory.
* You are not to use any library containers to implement your Stack or PriorityQueue.
You **can** use utilities functions like std::swap. It is also OK to use std:: algorithms
and vector in your other .cpp files.

    {{% alert info %}}
This is different than previous assignments!
    {{% /alert %}}

* Do not prompt for ANY input other than what is specified for in the descriptions below.

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

Make a makefile called **MyMake** - when the make utility is executed with it, it should build
two separate programs:

* **linux/assign3Stack.exe** from htmlParse.cpp
* **linux/assign3PriorityQueue.exe** using processPackets.cpp and DataStream.cpp

## Part 1

(25% of grade)

In Stack.h, implement a templated stack constructed with a **singly linked list**.

You should not modify the signature of existing functions that are declared, but can add additional ones.

You are not to use any iteration in implementing Stack.h (no **for/while/do…while**).
**Any repetition must be done with recursion.**

You will not be turning in any standalone tests of this part, but you will want to do some simple
testing in main to verify this is working before getting too deep into part 2. (I have my own tests
I will run it against.) Make sure DrMemory doesn't complain about memory issues.

## Part 2

(20% of grade)

The file Document.html is a simplified HTML document where there are spaces between each token
(piece of information). Each token is either:

* An HTML start tag : something that looks like **\<tag>**.
A tag always has < > around a word. It indicates the start of a new section of the document.
* An HTML end tag : something that looks like **\</tag>**.
An end tag always looks like </ > with a word in between. It indicates the end of a section.
An end tag should always match the most recent start tag. (The current section must end before
sections started even earlier may end).
* A plain word : something that looks like **word**
(See this page for background on HTML if you need it: http://htmldog.com/guides/html/beginner/tags/.

Modify HTMLParse.cpp's main function to read in the file Document.html, and for each word, output
the html tags it is inside. (Knowing that would tell us how to format the word as we render the
page.) For full credit, the tags should appear in order from oldest to newest like this:

    <html><body><h3> My
    <html><body><h3> webpage
    <html><body><p> This
    <html><body><p> is
    <html><body><p> some
    <html><body><p><b> special
    <html><body><p> text. 
    <html><body><p><i><b> This
    …

If your program detects a bad ending tag (one that does not match the current section), you should **print out an error message and halt**. If you finish reading the document without ending all the sections of the document, you should **report an error message**. (You will have to modify Document.html to test this!)

{{% alert warning %}}
Your program MUST read "Document.html" don't change the name or add path information.

Hint: This document is designed to be easy to read one string at a time using >>.
{{% /alert %}}

## Part 3

(10% of grade : all writeup)

In processPackets.cpp there is an existing program that is designed to simulate receiving
and storing packets for processing. Packets come in in batches and each packet (defined in
DataStream.h) has a priority and data:

    struct Packet {
        //16 bit numeric value representing priority. 
        //Higher priority = more important
        uint16_t priority;
    
        //Contents of packet
        std::string data;
    }
    
When the program runs it will expect read a single line of input like:  
`g 10000 p r 5000 p g 10000 p r 15000 q`

That would indicate that the program should do the following:  
**g**et 10000 packets and store them  
**p**rint the highest priority packet  
**r**emove 5000 packets  
**p**rint the highest priority one that remains  
**g**et 10000 more packets and store them  
**p**rint the highest priority packet  
**r**emove 15000 packets  
**q**uit  

The current program uses a sorted vector to store packets waiting to be processed (removed).
Every time a packet comes in, it uses binary search to find the proper stores the packet into
the vector so that the packets in the vector are always in order, with the highest priority
packet in back. To remove a packet, it simply removes the last item from the vector.

**Run it with the following script:**  
`g X r X q`  
For X values of 1000, 4000, 16000, and 64000

### Writeup

3A) Provide a table of times taken to get and then remove n packets for n = 1000, 4000, 16000, 64000

3B) What is the Big-O of the existing algorithm for getting n packets? Explain your reasoning.

3C) What is the Big-O for the existing algorithm for removing n packets? Explain your reasoning.

3D) How long would this algorithm take to get and then remove 10,000,000 packets? Show work.

## Part 4

(25% of grade)

In PriorityQueue.h, implement a priority queue based on an array implementation of a max heap.

You should not modify the signature of existing functions that are declared, but can add additional ones.

You will not be turning in any standalone tests of this part, but you will want to do some testing
in main to verify it is working (Again - I'll run my own tests!). Make sure DrMemory doesn't
complain about memory issues.

## Part 5

(20% of grade: 10% code, 10% writeup)

Replace the vector based code in processPackets.cpp with code to make and use a PriorityQueue
to store the packets. Make sure it still works for a script like:

`g 1000 p r 500 p g 1000 p 1500 q`

Then test it with:  
`g X r X q`  
For X values of 1000, 4000, 16000, 64000, and 256000

### Writeup

5A) Provide a table of times taken to get and then remove n packets for n = 1000, 4000,
16000, 64000, and 256000

5B) What is the Big-O of the new algorithm for getting n packets? Explain your reasoning.

5C) What is the Big-O for the new algorithm for removing n packets? Explain your reasoning.

5D) How long would this algorithm take to get and then remove 10,000,000 packets? Show work.
