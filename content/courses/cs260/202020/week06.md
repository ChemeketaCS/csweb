---
# Page metadata.
title: Week 6 - Binary Search Trees
summary: Binary Search Trees

# Add menu entry to sidebar.
# - name: Declare this menu item as a parent with ID `name`.
# - weight: Position of link in menu.
menu:
  cs260:
    name: Week 6
    weight: 60
---

## Learning objectives

* Implement a Binary Search Tree
* Use a stack to iterate through a BST

## Gnarly Trees
Gnarly Trees is a data structure simulator that is particularly valuable for learning how
trees work. You can download it from the [Gnarly Trees webpage](https://people.ksp.sk/~kuko/gnarley-trees/)
or this direct link. You will need to have [java installed](https://www.java.com/en/download/) on your computer to us it.

This video shows how Gnarl Trees works:
{{< youtube videoid="kNNUq-SDw4E" >}}

## Day 1

Priority Queues and HeapSort

* Watch:
{{< youtube videoid="HHCF0zS0HSc" >}}

* Read Ch 19.6.5 and 20.9

* Here is a [heap sort simulation you can try out](http://computerscience.chemeketa.edu/UCSFDataStructures/HeapSort.html)

* Do the Heaps CPPLab where you will implement the logic for a Max Heap

## Day 2

### Trees

Watch this video on trees:
{{< youtube videoid="TPoJKV7Qmm4" >}}

### BSTs

* Read Liang Ch21.0 - 21.2

* Watch this video on BST basic operations:
{{< youtube videoid="JY8GzoRWxrE" >}}

* Experiment with Gnarly Trees. Chose DataStructures->Dictionaries->BST.

* Do the BST WS

* Do the BST Basics CPPLab

## Day 3

BST's continued

* Read Ch21.3

* Watch these videos:

{{< youtube videoid="1ZeH64e_I5o" >}}

{{< youtube videoid="VY3nGvR8C3Q" >}}

* Experiment with Gnarly Trees. Chose DataStructures->Dictionaries->BST

* Do the BST Memory CPPLab

* Do the BST Removal WS

* Do the BST Removal CPPLab

## Day 4

Tree Iterators

* Read Ch21.4.

{{% alert info %}}
The chapter iterator converts the whole tree to a vector, which is quite wasteful.
In class we are studying a different internal representation using a stack.
So don't worry too much about the code sample shown in 21.4
{{% /alert %}}

* Watch this video on transforming lists to BSTs and iterators:
{{< youtube videoid="w_7m2sNYrq8" >}}

* Do the BST IterationByHand WS

## Assignment 3

Complete assignment 3 while you work on this week's material.
