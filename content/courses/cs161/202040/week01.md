---
title: Week 1 - Introduction to C++ Programming
linktitle: Week 1

weight: 10
---

## Learning Objectives

Upon finishing this learning module, you should be able to:

* Describe how a C++ program goes from source code to working program
* Identify the functions of basic components of a C++ program
* Do basic console input/output
* Use assignment and the basic math operators

## Schedule Checklist

### Day 1

* Setup access to Revel Introduction to Programming with C++ - see syllabus for link
* Review Syllabus and Class Policies. Take class policies quiz & background survey
* Read Ch 1.1-1.6
* Install QtCreator at home

### Day 2

* Declare variable, assign values, do math. Use the debugger.
* Finish Ch1, Ch 2.4-2.6
* Do MentalCodeDebugging WS (in Files area of eLearn)

### Day 3

* Write a program that accepts input, calculates an answer and outputs it.
* Ch 2.1-2.3 and 2.8-2.10

### Day 4

* Wrap up samples.
* Development advice.
* Read Ch 2.14

## Course Intro

Review the Syllabus (in eLearn) and Course Policies (sidebar here).

Then do the Background survey and Class Policies quiz in eLearn. The Class Policies quiz can be
taken as many times as you like before the deadline. Make sure to get 100%!

## CS Background

Ch 1.1-1.6 will be mostly review if you took CS160. If not, don't panic about
memorizing every detail.

## Getting Started With QT Creator

Start by [installing and setting up Qt Creator][qtinstall].
The video below demonstrates the last part of the installation - placing
the [QtProject][qtproject] folder in the correct location as well as how to
use QTCRreator to make a build a project:

[qtinstall]:http://computerscience.chemeketa.edu/guides/qtcreator-setup/
[qtproject]:https://computerscience.chemeketa.edu/CSResources/QtCreator/QtProject.zip

{{< youtube videoid="OMG5vfI1CXA" title="QTCreator Basics" >}}

If you get stuck installing QTCreator, the [repl.it](https://repl.it/languages/cpp) website can
be used as a short term alternative for writing and running code. Use it while you work on getting QT
up and running. It is **NOT** a long-term solution.

This video explains how to make use of course code samples:

{{< youtube videoid="3uHKR4rPeYI" title="Using Samples" >}}


{{% alert info %}}
The videos here may show versions of the website or QTCreator that don't exactly match
the current versions.
If you can't find something, or anything doesn't work as the video says it
does and you can't easily see how to fix it, please raise the issue in the discussion forum.

For any video, you can click in the lower right corner to watch on YouTube. You can then use
the settings icon there (Gear symbol at bottom of video) to watch at higher quality. Doing
so can make a big difference when trying to read code examples.
{{% /alert %}}

{{% alert warning %}}
All code you submit must build using standard C++. Using QTCreator will help make sure you
write code that will be acceptable. It will also make it easier to test out my code samples.

If you try to use another tool for programming (XCode on Mac, Visual Studio on Windows) and
don't know what you are doing, you are going to have a harder time and be more likely to
turn in code that does not work correctly. Start out with QTCreator and experiment with
other tools as you get more experience.
{{% /alert %}}

## C++ & Development Basics

Work your way through the rest of Ch 1. This video has a quick recap to what the parts of a
very basic program do:  
{{< youtube videoid="sFV8NGpYzQ4" title="Hello World" >}}

Read 2.4-2.6 and watch this video:
{{< youtube videoid="sn3G5sdJsQE" title="Variables" >}}

The debugger is a CRITICAL tool for learning programming. It is what lets you look at what
your code is doing step by step. This video introduces it:
{{< youtube videoid="lRW1-gXp5yU" title="Debugging" >}}

Do the **MentalCode** worksheet to practice using the debugger and test your understanding of how math
works in C++ (See the **Files** link in Elearn/Canvas to access this and future worksheets). There
is a key you can use to check your work on the front of the sheet. The back you should be
checking with the debugger!

Once you are done with it, watch this video about some of weird answers:
{{< youtube videoid="Q0oeZZ411z0" title="Math Weirdness" >}}

Now you should loop back and read 2.1-2.3 if you haven't. This video reviews key bits about getting
input:
{{< youtube videoid="9RxOgpTQ5ls" title="Inputs" >}}

Start the assignment as you finish 2.8-2.10 and 2.14 and 15. This video talks through
building the time program from 2.10 to show how you
should approach building programs... one step at a time:

{{< youtube videoid="Pg0RWChqu5k" title="Time" >}}

## Extra Info

### Learncpp.com

The [Learn C++](http://learncpp.com/) online tutorial covers some of the same ground as the Liang readings. Use it as a supplement or second opinion if you ever need one on a topic. This week overlaps somewhat with their chapters 0, 1.1–1.3, 2.1–2.5, and 3.1–3.2.

{{% alert warning %}}
Learncpp.com shows how to use multiple different IDE's for writing code. Until you know how to test to see if your code is standards compliant, I highly recommend sticking with QtCreator and the provided templates.
{{% /alert %}}

### Compiling details

Looking for more information on what exactly happens when code is compiled?
Read this [compiling and linking tutorial](http://www.tenouk.com/ModuleW.html).
