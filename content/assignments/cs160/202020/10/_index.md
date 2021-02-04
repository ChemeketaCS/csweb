---
# Page metadata.
title: Assignment 10
summary: Future and limits of computing

math: true
layout: single
weight: 100
---

{{% cs160General responses="https://docs.google.com/document/d/1X_Cs5EB6oovhlp6NlmyN5qKz0zgHmBnB16ZnqcIWxzE/copy" %}}

## Computability

1. I want to prove the following statement using **proof by contradiction**. What should I assume as the
first step of my proof?

    Statement: *There is no largest prime number.*

1. Let us assume that there is a perfect antivirus program. It examines a program and says
"Yes" if the program will infect our computer. It says "No" if the program will not infect our computer.

        Antivirus (Program):
          If Program causes infection
            Report "Yes"
          Else 
            Report "No"

    If such a program existed, we could write a program Evil that accepts a program as its input
    and asks Antivirus to look at it. If Antivirus says "Yes", Evil stops without doing anything
    else. If Antivrius says "No" about the program, Evil infects the computer:

        Evil (Program):
          If Antivirus(Program) says "Yes"
            Exit
          Else
            Infect computer

    Make an argument for how this program Evil shows that the program **Antivirus** cannot be written.

## Limits and Future

3. Algorithm A takes $5n^2$ steps of work to complete a task of size **n**. Thus for a task of size 4,
it takes $5 \times 4^2$ or 80 steps of work.  
    Algorithm B takes $1.5^n$ steps of work to complete a task of size **n**. Thus it would take
    $1.5^4$ or 5.0625 units of work to solve a problem of size of 4.

    1. Which algorithm is non-polynomial?
    1. Why is the polynomial algorithm considered more doable than the non-polynomial one?

1. How many states can a quantum computer with 50 qubits be testing simultaneously?

1.  
    1. What difficult mathematical task is RSA web security based on?
    1. Why could quantum computing spell trouble for the RSA algorithm?

## Programming

Complete Code.org programming lessons for this week. This work will go in your
**Practice** grade.

### Assignment Problems

These are a graded part of this assignment.

6. Write code to square every number in a list (multiply it by itself).
(You can use 5.2.15.6 to do the work)

1. Write code to print out a true/false answer to say if a list has any numbers less than 3.
(You can use 5.2.15.10 to do work)

1. Submit code for the highest "level" below you got working correctly. Submit the text
version of your code.
    * Level 1: Working version of (5.2.17.8)
    * Level 2: Working version of (5.2.17.11)
    * Level 3: Working version of (5.2.17.13)
    * Level 4: Working version of (5.2.17.18)
