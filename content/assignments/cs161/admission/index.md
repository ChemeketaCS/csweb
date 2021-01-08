---
title: Admission
summary: Assignment covering conditionals

weight: 20
#last used 
---

{{% cs161General %}}

## Objective

Upon completion of this assignment the student will be able to use
conditional structures to make complex decisions in code.

## Assignment Instructions

*Submit file: assign2.cpp*

U of O has decided that reading all those application essays from high school
seniors is too much work. They want you to automate the selection process for
them using student's GPAs and SAT scores. You need to write a program that will
read in a person's GPA, and if needed, SAT score and print out whether the student
is **admitted**, **waitlisted** or **denied**. Use the following chart to decide:

<style>
table {width: 80%; display: table; margin: 2em auto;}
</style>

|     GPA      |     SAT      |     Status      |
|-  |-  |-  |
|     4.0+      |     any      |     Admit      |
|     3.5-3.99      |     above 1400       |     Admit      |
|     3.5-3.99      |     1100-1400      |     Waitlist      |
|     3.5-3.99      |     below 1100      |     Deny      |
|     3.0-3.49      |     above 2000       |     Admit      |
|     3.0-3.49      |     1500-2000      |     Waitlist      |
|     3.0-3.49      |     below 1500      |     Deny      |
|     Below 3.0      |     2200 or above      |     Admit      |
|     Below 3.0      |     below 2200      |     Deny      |

{{% alert info %}}
Note that your program should always print one and only one message (either
"Admit", "Waitlist", or "Deny"). Make sure to test different combinations
and watch for edge conditions!
{{% /alert %}}

### Sample run 1: (user input in red)
{{% sample_run %}}
Enter GPA: `4.2`  
Admit
{{% /sample_run %}}

### Sample run 2: (user input in red)
{{% sample_run %}}
Enter GPA: `3.0`
Enter SAT: `2000`  
Waitlist
{{% /sample_run %}}

### Sample run 3: (user input in red)
{{% sample_run %}}
Enter GPA: `2.1`
Enter SAT: `2230`  
Admit
{{% /sample_run %}}