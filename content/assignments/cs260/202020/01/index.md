---
# Page metadata.
title: Assignment 1
summary: Searching and Sorting
---

Upon completion of this lab the student will be able to implement common algorithms
for searching and sorting data as well as analyze the time required to run those algorithms.

## Setup

Begin by accepting the assignment repository: [https://classroom.github.com/a/OuUd4DJH](https://classroom.github.com/a/OuUd4DJH)

A file with 100,000 names is provided here: [people.txt](people.txt)

Download it and place it into the folder with your cloned code - make sure it is called **people.txt**.
We will not be adding it to the repository - I will use my own copy of the file when I run your
code. So you can modify it for testing purposes, but make sure your code does not depend on
your changes.

You can make a QTCreator project in that folder to work with the code. But make sure that you
don't make it as a subfolder of the git project. The easiest thing to do is probably 

## Submission

You should submit the following:

* In Elearn: A pdf document with your responses to write up questions.

* Push final changes to github before the assignment deadline. You should get in
the habit of pushing changes every time you get a newpart of the assignment working.

## Overview

Each line in the provide text files is a record in the format: *ID, LastName, FirstName, ZipCode*
You will have to read in this file and store the records in an array of Person structs.

Starter code for a struct Person and some functions that will work with that struct are provided
in the repository. The .h has a section of code that you are NOT allowed to modify - make sure
not to change anything in that area. You are allowed to add code before or after that section
if you wish.

In this assignment you are not to use any library searching or sorting algorithms or
container classes (like vector). You may use library algorithms for other tasks (e.g. copying the array).

## Assignment Requirements & Output
You should write one main function that does each of the tasks below in order. You should use
 functions to make your main a manageable length and easy to understand.

Anything you are asked to print out should be printed in your final program with a clear label.

Label each section's output, print something like this before each section:
```
-----------------------------Section 1----------------------------
Last person read was: Bashirian, Barry
…
```

There should not be a lots of extra debugging output.

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
executable called **linux/assign1.exe** from your code files. Test this early and often.

{{% alert info %}}
There should not be an extension on the makefile filename. Make sure you do not turn in MyMake.txt
{{% /alert %}}

## Part 1

(20% of grade)

Add a **main.cpp** with a main function.

In it, *read in a single integer* (from the console) representing ***size*** - the number of
records your program will read and work with. Anywhere else in the instructions ***size***
is mentioned, it refers to this one value. *This should be the only input your program
requires - do not ask for any other.*

Then read in ***size*** records from people.txt and place them all into two arrays:
**persons** and **personsSorted**.

Sort personsSorted using: `std::sort(personsSorted, personsSorted + size);` (This is an
exception to the no std:: algorithms rule.)

**Print out the name of the last person you read.**

{{% alert info %}}
Don't forget to make sure that the text file is in your working directory.

I will manage the working directory when I run your code. Just open "people.txt" and I will make
sure that the file is in the right place.
{{% /alert %}}

## Part 2

(15% of grade: 5% code/10% writeup)

Implement the **countLastName** function.

In main, use this function to **print out the number of people in the persons array with the
name "Mertz"**. Then **print out the time to run this function**.

### Writeup (Answer these questions in a document you will upload to elearn)

2A) Provide a table of the time taken to fine the "Mertz" matches for runs of size 100, 1000,
10000, and 100000.
(You likely will have to average a large number of runs to get a measurable time for smaller input sizes).

2B) What is the BigO of your countLastNames function? Briefly describe your algorithm/reasoning.

2C) How long in wall time would it take to process 1,000,000 names. Show work to justify your answer.

## Part 3

(20% of grade)

Implement the functions **binaryFindFirstByLastName** and **binaryFindLastByLastName**. They
should do a modified binary search to return the index of the first or last person respectively
with a given name. For full credit, they should run in guaranteed logn time.

In main, use them to search through personsSorted and **print out the indexes of the first and
last persons with the last names of both Abbott and Zulauf**.

Hints: Consider the array shown below. If you are searching for the first B, how will you know
it is time to stop? How will your strategy change if you are looking for the first A? How will
you know you are done if you are searching for the last B? How will it change if you are looking
for the last C?

| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
| - | - | - | - | - | - | - | - | - | - |
| A | A | A | B | B | B | B | B | C | C |

## Part 4

(15% of grade: 5% code/10% writeup)

Implement the **countLastNameInSorted** function to efficiently count the number of people with a
specified last name given that it only has to work on sorted data.

In main, use this function to **print out the number of people in the personsSorted array with
the name "Mertz"**. Then **print out the time to run this function**.

### Writeup

4A) Provide a table of the time taken to find the "Mertz" matches for runs of size 100, 1000,
10000, and 100000.
(You likely will have to average a large number of runs to get a measurable time for smaller input sizes).

4B) What is the BigO of your countLastNameInSorted function? Briefly describe your algorithm/reasoning.

4C) How long in wall time would it take to process 1,000,000 names. Show work to justify your answer.

## Part 5

(15% of grade)

Implement the **partialZipSort** function using any quadratic sort algorithm.

In main, use it to sort indexes 2-7 of the persons array by zip code. Then **print out the first 10
people (last name, first name, zip)** to verify the sort worked. (Not all 10 people should be
sorted, indexes 0-1 and 8-9 are not part of the sorted group.)

## Part 6

(15% of grade: 10% code/5% writeup)

Implement the **nameSort** function using either mergesort or quicksort. It should sort so that people
are ordered by last name, and if they have the same last name, by first name.

In main, use it to sort the entire persons array. Print out the time that the sort took.
Then print out the first 10 records to verify the sort.

### Writeup

6A) Provide a table of the time given by the sort for a size of 100, 1000, 10000, and 100000

6B) How long in wall time would the process take for 1,000,000 names? Justify your answer (show math).
