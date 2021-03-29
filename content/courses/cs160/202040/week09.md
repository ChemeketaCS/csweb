---
title: Week 9
summary: Databases, OSes, Parallel Processing

weight: 90
---

## Learning objectives

Upon finishing this learning module, you should be able to:

* Discuss and describe the jobs of an operating system and the major resources it handles
* Explain the advantages and challenges of parallel processing
* Describe how databases are designed to maintain consistency in the face of failures and concurrent changes
* Write simple SQL queries
* Write while loops in javascript

## Suggested Pacing

Day 1
: Do the programming.

Day 2
: Tackle the Operating Systems and Parallel Processing material.

Day 3
: Do the Algorithm of the Week.

Day 4
: Do the SQL Section.

## Programming

* Complete [Code.org](https://studio.code.org/home) Unit 5, Ch 2, Lesson 13, Parts 1-28.

## Operating Systems

* Read [CS160 Reader - Operating Systems](http://computerscience.chemeketa.edu/cs160Reader/OperatingSystems/index.html)

* **Optional**:  This video reinforces the big ideas of the reading:

{{< youtube videoid="GjNp0bBrjmU" >}}

## Parallel Processing

* Read [CS160 Reader - Parallel Processing](http://computerscience.chemeketa.edu/cs160Reader/ParallelProcessing/index.html)

## Algorithm of the Week: Databases & Consistency

* Start with [CS160 Reader - Databases](http://computerscience.chemeketa.edu/cs160Reader/NineAlgorithms/DatabasesAndConcurrency.html).
It provides a quick introduction to help with the Nine Algorithms reading.

* Read Ch 8 of Nine Algorithms book. You can skip the entire section titled **The
Prepare-Then-Commit Trick For Replicated Databases**. (Start reading again at
**Relational Databases And The Virtual Table Trick**).

## Structured Query Language

* Do the following SQL Tutorials. They introduce the real language used by many databases
    to specify queries. This video explains how to use them:

    {{< youtube videoid="frzjo7qhaFo" >}}

    * [Select queries](https://sqlbolt.com/lesson/select_queries_introduction)
    * [Queries with Constraints Part 1](https://sqlbolt.com/lesson/select_queries_with_constraints)
    * [Queries with Constraints Part 2](https://sqlbolt.com/lesson/select_queries_with_constraints_pt_2)
    * [Filtering and ordering](https://sqlbolt.com/lesson/filtering_sorting_query_results)  
    *Tip: This tutorial does not spell out what ASC and DESC mean.
    ASC is short for "ascending"- going up from smallest to largest.
    DESC is "descending" - listed from largest to smallest.*

* If you feel like you need more practice, check out the **SQLPractice** worksheet.

## Optional Extras

Video cards (GPUs) are different than CPUs because they are optimized for parallel processing.
They are designed to process hundreds or thousands of similar jobs at the same time. Traditionally,
they were mostly used for graphics. But they are also good at the kinds of tasks that
machine learning requires. This video explains more:

{{< youtube videoid="XKOI9-G-wk8" >}}
