---
title: Week 5 - Operators
linktitle: Week 5

weight: 50
---

## Learning objectives

Upon finishing this week, you should be able to:

-   Create classes that work using standard operators
-   Write code using exceptions and try/catch

## Deadlines this week

-   Mon 11:59PM - Assignment 4
-   Wed 11:59PM - CppLab Operator Basics
-   Fri 11:59PM - CppLab Operators Advanced
-   Sat 11:59PM - CppLab Exceptions
-   Sat 11:59PM - Quiz 2 open in elearn Thurs-Sat covering weeks 3-5.
    (Includes all topics from this week)

{{% alert info %}}
There is no assignment this week!
{{% /alert %}}

## Suggested pacing

### Day 1

-   Operator Overloading II
-   Read 14.4, 14.8-14.12
-   CPPLab - Operators Advanced

### Day 2

-   Exceptions
-   Read 16.1-16.3, 16.9. Skim 16.5, 16.6
-   Do Exceptions CPPLab

### Day 3

-   Midterm Study Guide
-   Quiz/CPPLab Study Hall

### Day 4

-   Quiz

## Online Activity Outline

### Operator Overloading - Trickier Topics

Read 14.4, 14.8-14.12. I think the stream extraction operator (\>\>)
example from 14.9 is pretty poor - normally we would not write an
extraction operator to prompt the user. Instead it should do something
like suck in "12/32" and parse it into a RationalNumber. See the video
and my version of RationalNumber in the Github repository for an example
of a more typical implementation.

{{< youtube videoid="b2zazXIAIyE" title="Advanced Operators" >}}

Do CPPLab Operators - Advanced.

### Exceptions

Exceptions are a mechanism used by C++ and many other languages for
error handling. The basic idea is pretty simple - a way to say "we have
a problem" all the way up the call stack (the functions that have called
other functions to get to where we are) until we find a part of the code
that knows how to deal with an error. It allows low level components
that recognize an error ("Ack, I can't open the database!") to abort
what is happening in a controlled manner and send a message to higher
level code that knows how to deal with it in a way appropriately in the
actual program. For a interactive program, the correct response might
be to prompt the user for a new password. For an automated program that
runs on a server the best thing to do might be to record an error message
to a file and move on.

Read 16.1-16.3, 16.9. Skim 16.5 & 16.6 (the concepts aren't super
deep... you should be able to skim rapidly) and watch these two videos:

{{< youtube videoid="Vcy46kOuK48" title="Exception" >}}
{{< youtube videoid="qKzYoKVhkq8" title="Exception Types and Patterns" >}}

Check out the exception code from the 162 repository... it has lots of
little examples in text files you can copy and paste into main to try out.

Do CPPLab Exceptions

### Exam & Quiz

Make sure to take quiz 2 and prep for the midterm. See the files
link for a practice midterm. It will have some "theory" -
diagramming memory on the stack and identifying when we get which
version of a virtual function. The rest of it will be writing code
for OOP style problems using inheritance, aggregation, composition
and basic objects.

