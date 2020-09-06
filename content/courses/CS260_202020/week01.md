---
# Page metadata.
title: Week 1 - Algorithm Complexity
summary: Big O

# Add menu entry to sidebar.
# - name: Declare this menu item as a parent with ID `name`.
# - weight: Position of link in menu.
menu:
  cs260:
    name: Week 1
    weight: 10
---

## Learning objectives

Upon finishing this learning module, you should be able to:

* Analyze simple functions in terms of BigO
* Reason about the relative efficiencies of different BigO categories
* Use a makefile to build a C++ program
* Implement Binary Search

## Setting Up

You will want to get the following setup on your computer if they are not already from CS162:

* QTCreator - not required, but my sample code is set up as QTCreator projects.
You probably will want some IDE with a debugger. See the Resource Links.

* Chemeketa Linux Dev Environment (VirtualBox & Vagrant). See install and use instructions
under Resource Links. See this video for how to use it:

{{< youtube videoid="CtjCECDGefM" title="Working With Projects & Files" >}}

## Day 1

Read the syllabus and class policies. Take the background survey and class policies quiz in
elearn.

### Big O

* Watch:

{{< youtube videoid="oZ_jtc2oIe4" >}}

{{< youtube videoid="qlJxHETrh2w" >}}

* Read CS160 Reader chapter 8.10 and 8.13.

* Do BigO Estimation WS. See Class Files Link for this and all future worksheets.

* Optional additional source: Tim Budd notes, Ch 4, pg 1-6.

## Day 2

### Git Crash Course

* Watch

{{< youtube videoid="yC0BSx-Emtg" title="Git & Github" >}}

* Use part 1 of the [Git Crash Course](https://docs.google.com/document/d/1S8dMsT6B2B7jW2Z0OWoV6TT8GOlYkDa9Bw0mhrUTuSU/edit)
to get access to my samples.

* Use part 4 of the Git Crash Course instructions to make a repository for assignment 1.
In that repository, make a file README.md and add some text to it. Then commit the change and push
it to github. Look at your github account on the web to verify the push.

* Extra Git resources:

  * [Visual Git Reference](https://marklodato.github.io/visual-git-guide/index-en.html) -
  Visual explanation of basic git commands
  * [LearnGitBranching](https://learngitbranching.js.org/) - Interactive tour of basic git commands.
  * [Pro Git Book](https://git-scm.com/book/en/v2) - Free book on Git.

### Makefiles

* Work through Parts 0 and 1 in my Makefile Tutorial in the Classroom Files Link.
You will need the skills from Part 1A for assignment 1. You will not need Part 2 until assignment 2.
There is also a copy of my Command Line Quick Reference in the same folder.

* Extra info:

  * [Extended Command line tutorial](http://www3.ntu.edu.sg/home/ehchua/programming/howto/CMD_Survival.html)

  * [Extended Make tutorial](http://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)
(Most of the examples are C based. Just sub in g++ instead of gcc for C++.)

## Day 3

Big-O Continued

* Watch

{{< youtube videoid="lz9OgxoCNDk" >}}

{{< youtube videoid="lAQaHmJiiO8" >}}

* Readings: Liang, Ch 18.1-18.3

* Do BigO Analysis Worksheet

## Day 4

### C++ timing and memory

* Watch

{{< youtube videoid="mxKL-M1CqXo">}}

* Play with the code sample in the ClockTesting project in the cs260Code repository

### Searching Algorithms

* Watch

{{< youtube videoid="2VwBUVMOdtU">}}

* Read Liang Ch 7.9 and 17.5.2 (linear search and binary search done iteratively and recursively)
* Optional second source reading: Linear and Binary search in the
[CS160 Reader Algorithms Chapter](http://computerscience.chemeketa.edu/cs160Reader/Algorithms/index.html)
* Do Searching WS
* Do Searching CPPLab - you can find the code as a QTCreator project in the Search project in the
cs260Code repository

## Assignment 1

We won't finish with the material for assignment 1 until next week. But, as soon as your learn how to
use git to setup the assignment, you are ready to get started on parts 1 & 2 - they are CS161 level code.
See weeks 5 (File IO) and 9 (Structs) from [CS161]({{< ref "/courses/cs161/" >}}) if you need to review
reading in the data. Get this done this week. Really. You will be sad if you do not.
