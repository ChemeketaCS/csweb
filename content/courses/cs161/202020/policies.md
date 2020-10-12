---
title: Class Policies & Tips
linktitle: Class Policies

weight: 6
---

## Communication

General questions about the course, content and assignments should be
done via the discussion board in eLearn. It is also where I will post
any important announcements—you are responsible for checking it
regularly. I monitor the board regularly, but if you read a question
from another student on the discussion board and think that you can
help, please do so\! That said, **the discussion board is not the
appropriate place to post your code and ask "what is wrong???"** If you
want to ask about code you have written for an assignment, you need to
follow the guidelines for "Getting and giving help" listed below.

For questions or issues of a personal nature (your grade, sending me
your code to ask a specific question, etc...) please ask in person in
class or office hours or use email. I check my email during every office
hour, and often in between them—I generally reply to all emails within
24 hours. When emailing a question about your own code, the clearer and
more specific you are, the more likely you are to get a clear response
to your question. Make sure to describe: what you think the problem is,
what you think the problem might be related to, what you have already
tried and to include the relevant code. If you email me code with
minimal extra information ("it keeps crashing and I don't know why"),
expect to just get questions ("What have you tried?") in response.

## The Work

Plan on spending 8-12 hours per week working on this course outside of
the classroom (12-16 total for online students). Predicting how long it
will take to write a computer program can be very difficult to
estimate—do not count on being able to block out a set number of hours each
week to complete your work.

{{% alert warning %}}
Due dates for the assignments and quizzes are firm.
This is not a self-paced course.
{{% /alert %}}

The kinds of assignments for this class include:

### CPPLab

CPPLab is a tool we use in CS161/162 to get the little practice
essential to really learn how to program. Exercises in it are
specifically intended to encourage you to practice throughout the week
instead of doing all your practice the night the main assignment is due.
**You do not receive any points for submitting these assignments late.**

CPPLab is graded on a very generous curve: I take the square root of
the percentage you earn on each assignment, and use that as your grade on
the assignment. (For example, you solved 3 out of 4 problems. That would be
0.75, but I take square root to get .866 or 86.6%.) Your total score is
the average of those "curved" scores. (For example, you get 86.6% on one
assignment and 100% on the next, so your average is 93.3%.)

If you do the math you will notice that scoring 0/4 on one assignment
and 4/4 on the next ends up with a significantly lower score than
getting 2/4 on both assignments. That is intentional—CPPLab is about
trying little bits of code while topics are fresh in your head. You will
get more out of doing at least some of each assignment than
occasionally binging.

Moral of the story: These are a small part of your grade, but an
essential part of learning the material. Make sure to try each problem,
and hopefully get most of them done, but do not spend so much time trying
to solve every problem that you don't have time to get the main
assignments done.

### Weekly Assignments

This is where you demonstrate an ability to solve problems with
algorithms and fluently write clean code. You can turn in updated
versions of any of the assignments any time before they are due. If I
see multiple versions of an assignment, **I will grade the one with the
latest date on it.** Late assignments are worth at *most* 70% of the
total, and only for a maximum of 1 week after the due date. Assignments
that fail to compile are worth at most 50%.

Make sure to follow any instructions about file names—there are often
specific names you must give the files you submit for labs. Do not
submit extra files (e.g. project files your development environment
creates).

Assignments are generally graded and returned within one week of the due
date. I use rubrics to provide feedback—these are available for your
review in the eLearn class site as soon as your assignment is graded.

### Quizzes and Exams

Quizzes will be taken outside of class through elearn. You will have a
couple day window to take each quiz. There are no quiz makeups or
retakes, though I will replace your lowest quiz with your score on the
final if that helps your grade.

The Midterm and Final are pen and paper exams that take place in class.
They must be taken on the date scheduled. Online students will have a
couple day window to take these exams at an approved testing center.
[Free test proctoring](https://www.chemeketa.edu/students/student-services/testing-services/) is offered at Chemeketa.
It is the student's responsibility to make an appointment for testing in
the specified window for the midterm and for the final. If you cannot do
the testing at Chemeketa, you must get approval for another test site
(most colleges offer proctoring services for a small fee). This will
likely take a few days to get set up, so make sure to plan ahead\!

{{% alert warning %}}
During remote operations due to COVID-19, the pen-and-paper exams in
this course will also be given through elearn. All of the information
about proctoring above is irrelevant in this case.
{{% /alert %}}

## Study groups and student collaboration

I encourage students to study together and talk about the material in
the course. However, students are responsible for doing their own work.
Specific advice on what is considered acceptable:

### Quizzes

Quizzes are to be done without any collaboration.  

### CPPLab practice problems

Work with whoever you like. It is fine to collaborate in real time
with other people. It is not appropriate to share code on the course
discussion boards until after an assignment is complete (don't post
your code and ask "What is wrong with this?"). See the "Getting and
giving help" section below.

### Weekly assignments

Assignments are to be done individually. You should not share
(email, dropbox, github, etc...) with anyone else—either to ask
for help or to attempt to provide it. I will use an automatic tool
to scan assignments for code that is duplicated in different
submissions. If I have doubts about whether you wrote your own
program, I may require you to come to office hours for a "code
interview" where I ask you to explain the code, its development, and
how you might modify it.

## Getting and giving help

You should not share your code with anyone other than me, either as part
of asking a question or answering someone else's question. That means
you should not ask for help by giving your code to someone (or posting
it on the discussion board) and saying "why doesn't this work?". You
should never "help" someone by sending them your code and saying "this
is how I did it". So how do you give/get help?

1.  Talk general strategy:
    
    As a Question: *"Hey, I know I need to chop up this string, what
    functions can I use to do that?"*
    
    While giving advice: *"I found I had to use two loops so I could
    solve that problem."*

2.  Point someone to examples from the class/book/other resources:
    
    *"Oh, you should check Ch5.8—it shows how to do that."* or *I used
    the StructSample project as a starting point for this project."*

3.  Make up random examples using snippets of code not directly related
    to the assignment. If someone asks *"How do you know if
    string.find() can't find what you are looking for?"*, you might
    answer:
    
    *It returns -1, something like this:*  
    ```
    string foo = "something";
    int location = foo.find("q");
    if(location == -1)
        //it is not there
    ```

4.  If you are debugging a syntax error on one line of code, it is
    reasonable to show/share that line of code. Example: *Why does this
    line of code give me an error that says "expression is not
    assignable"?*  
    ```   
    4 = x;
    ```

5.  It is permissable to give someone debugging assistance in a live
    format (face to face or screensharing). During this process, you
    will quite likely by necessity see their code. That is OK, but you
    should help them by helping them track down what is going wrong in
    their program, not by telling them how to fix their code. If someone
    has a problem you can't help them work through by talking at a
    general level, that is a sign they have bitten off too much and once
    and do not really understand what they have written. Encourage them
    to back track and focus on a smaller, simpler chunk of work—to
    find and focus on the first line of code that goes wrong.

## Technical Issues

### Technical Support

Everyone taking this course needs regular access to a working computer
with internet access. If you do not have access to such a computer at
home you need to expect to spend a significant amount of time in the
open computer lab at Chemeketa.

All of the software used in this course is freely available and can run
on Windows, Linux or Macs OS X. Although I am happy to help you
troubleshoot software issues in office hours, making sure you have a
working development environment is your responsibility.

### Development Environment

QtCreator is the software we use in the computer lab. It and the gnu g++
compiler are the official development environment. You should install it
at home and become comfortable working with it. You can find
instructions for downloading it in the resources tab of my CS161
webpage.

If you chose to use another development environment (XCode, Visual
Studio, etc...), you must make sure you know how to use it to produce
platform neutral code—i.e. your code must compile on my machine using
the gnu compiler without any modifications.
