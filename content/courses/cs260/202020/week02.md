---
# Page metadata.
title: Week 2 - Sorting algorithms
linktitle: Week 2

weight: 20
---

## Learning objectives

Upon finishing this learning module, you should be able to:

* Implement Quicksort and Mergesort
* Identify the efficiency and properties of common sorting algorithms
* Reason about the efficiency of an array based list

## Day 1

### Debugging at scale

Watch this video with tips about debugging at scale:

{{< youtube videoid="F_EiY1Y_8VM"  >}}

### Quadratic Sorts

* Read Liang Ch7.10 and 19.1-19.3

* Watch:

{{< youtube videoid="z_zNtuFVDTE" >}}

* Do the Quadratic Sort Worksheet

* Do the Quadratic Sort CPPLab and practice implementing selection sort and insertion sort.

* Extra optional resources:
  * [CS160 Reader Algorithms Chapter](http://computerscience.chemeketa.edu/cs160Reader/Algorithms/index.html)
  * [Youtube series on sorts](https://www.youtube.com/playlist?list=PLJse9iV6Reqg-IffRqjxebaPg0zaPxWlt)

## Day 2

Mergesort, Recursion & Big O

* Read Liang Ch 18.4.1-18.4.4, Ch19.4.

  {{% alert info %}}

  Please note that the merge sort shown in the book is slightly different than the one I talk about and ask you to build. The book version makes a new array for each merge. This ends up making O(N) memory allocations to sort an array of size N. That is wildly inefficient, even if it still runs in nlogn time.

  {{% /alert %}}

* Watch:

{{< youtube videoid="8oEEFbqhCW4" >}}

{{< youtube videoid="hQv-sOkBUJw" >}}

* Do the Merge Sort Worksheet to think through the work needed to do a merge
* Do the Merge Sort CPPLab

## Day 3

Quicksort

{{% alert info %}}
There is another common partition algorithm that is less efficient than the one shown here and the book.
I expect you to know how this one works, so if you use an alternate source, make sure you are learning the
right algorithm.
{{% /alert %}}

* Read Liang Ch19.5

* Watch:

{{< youtube videoid="8oEEFbqhCW4" >}}

* Do Quicksort WS to practice partitioning.

* Do Quicksort CPPLab

## Day 4

Bucket and Radix Sort

* Read 19.7

* Do Radix Sort WS

## Other Resources

* [Sorting Algorithms](http://computerscience.chemeketa.edu/UCSFDataStructures/ComparisonSort.html)
interactives

* See [CS160 Reader Algorithms Chapter](http://computerscience.chemeketa.edu/cs160Reader/Algorithms/index.html)
for demos of searching and Insertion, Selection & Merge sort

* [Sorting Algorithms Compared](https://www.toptal.com/developers/sorting-algorithms)
All kinds of algorithms run on all kinds of data

## Assignment 1

Keep chipping away at assignment 1. As you finish each chunk of content this week, you are probably
ready to tackle another part of the assignment. Do the writeup as you go. Earning the points for
it will take less time than writing and debugging code for a part of the assignment. Don't save
it until the coding is done.