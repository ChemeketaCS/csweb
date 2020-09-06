---
# Page metadata.
title: CS260 Class Policies & Tips

# Add menu entry to sidebar.
# - name: Declare this menu item as a parent with ID `name`.
# - weight: Position of link in menu.
menu:
  cs260:
    name: 'Class Policies & Tips'
    weight: 9

---

## The Work

### Worksheets, Programming Practice

You will be given problem sets to practice with concepts we are learning. This work is not
collected or graded, but is essential to perform well in the course.

### CPPLabs
These are programming practice assigned during each week. They are designed to get you to
tackle the material in manageable pieces at a steady pace.
**You do not receive any points for submitting these late.**

CPPLab is graded on a very generous curve... I take the square root of the decimal percent
you earn on each assignment - that is your grade on the assignment.
(e.g. you solved 3 out of 4 problems. That would be 0.75, but I take square root to get .866 or 86.6%).
Your total score is the average of those "curved" scores. (i.e. you get 86.6% on one assignment
and 100% on the next, your average is 93.3%).

### Assignments
These are where you demonstrate your ability to apply what you are learning to solve problems.
The assignments for this class are of larger scale than those in CS161 or 162 - budgeting
time effectively and working well in advance of the due dates is essential.

Assignments generally have multiple parts and each one will print some output to demonstrate
that the code you wrote does the job it was supposed to. Code that does not run because of an
error in an earlier part of the assignment will likely be marked down as there is no proof
it works. If one part of your assignment causes a crash, do your best to comment it out so the
rest of your program can run and demonstrate that it works.

**Working Code > Code that mostly works > Commented out code > Code that crashes.**

Assignments that do not compile from the command line in the Chemeketa Development Environment
will not be scored.

You can turn in updated versions of assignments any time before the due date. If I see multiple
versions of an assignment,I will grade the one with the latest date on it.

You receive three flex days to use as extensions on these assignments. If an assignment comes in
late, 1 day of late will be automatically used for each day or part of a day it is late.
Flex days used = (hours_late / 24.0) rounded up. You will not receive any grade penalty for
"flexed" assignments. Once your flex days are exhausted, you will not receive credit for late
work. Once you are nearing the deadline for an assignment, or into the flex zone, I strongly
encourage you to turn in an assignment that builds and completes just part of the requirements
rather than stressing out about completing every part of the assignment.

Assignments are generally graded and returned within one week of the due date. I use electronic
(eLearn) grading forms that are available for your review in the eLearn class site as soon as
your assignment is graded.

### Midterms and Final Exams

These are pen and paper exams that will be taken in class. There are no retakes.
Make up/early exams are only allowed for students who have true emergencies or contact me
in advance about a scheduling conflict beyond their control.

## Student Collaboration

I encourage students to study together and talk about the material in the course. Students
are however responsible for doing their own work. Specific advice on what is
considered acceptable:

### Practice worksheets and CPPLabs

Fine to work together or to compare notes. However, be mindful of the fact that everyone
needs to learn the material. Watching someone else solve a problem or looking at their
answer generally does not lead to mastery. Comparing answers and talking through tricky
problems or ones you answered differently is a great way to solidify your understanding.
Looking at someone else's work so you can see the right answers without talking through
them generally leads to a false sense of security.

### Assignment Collaboration

Assignments are to be done individually. You should not share (email, dropbox, github,
etc...) with anyone else - either to ask for help or to attempt to provide it. I will
use an automatic tool to scan assignments for code that is duplicated in different
submissions. If I have doubts about whether you wrote your own program, I may require
you to come to office hours for a "code interview" where I ask you to explain the code,
its development, and how you might modify it.

### Discussion Board

The discussion board is a great place to ask general questions about course content.
It is not the appropriate place to post your entire program and ask "what is wrong???"
If you want to ask about an assignment, you need to do so without posting your code.
That means asking general questions: *"I am trying to do X, but my code keeps doing Y...
anyone else had this problem?"*, *"Anyone remember where I can find an example of X"*,
*"I keep getting this compiler error: BLAH BLAH BLAH... what does it mean?"*

If you absolutely can't think of how to ask a general version of your question, ask it
in office hours or via email.

### How to Get and Give Help

You should not share your assignment code with anyone other than me, either as part of
asking a question, or answering someone else's question. That means you should not ask
for help by giving your code to someone (or posting it on the discussion board) and
saying "why doesn't this work?". You should never "help" someone by sending them your
code and saying "this is how I did it".

So how do you give/get help?

1. Talk general strategy:  
    
    As a Question: *"Hey, I know I need to chop up this string, what functions can I use to do that?"*
    
    While giving advice: *"I found I had to use two loops so I could solve that problem."*

1. Point someone to examples from the class/book/other resources:  
*"Oh, you should check Ch5.8 - it shows how to do that." or I used the StructSample project
as a starting point for this project."*

1. Make up random examples using snippets of code not directly related to the assignment. If someone
asks *"How do you know if string.find() can't find what you are looking for?"*, you might answer:
    *"It returns -1, something like this:"*
    ```
    string foo = "something";
    int location = foo.find("q");
    if(location == -1)
        //it is not there
    ```

1. If you are debugging a syntax error on one line of code, it is reasonable to show/share that line
    of code.
    
    Example: *Why does this line of code give me an error that says "expression is not assignable"?*
    ```
    4 = x;
    ```

1. It is permissable to give someone debugging assistance in a live format (face to face or
screensharing). During this process, you will quite likely by necessity see their code. That is OK,
but you should help them by helping them track down what is going wrong in their program, not by telling
them how to fix their code. If someone has a problem you can't help them work through by talking at a
general level, that is a sign they have written too much code at once and do not really understand what
they have written. Encourage them to back track and focus on a smaller, simpler chunk of work - to find
and focus on the first line of code that goes wrong.

## Technical Issues

### Technical Support

Everyone taking this course needs regular access to a working computer with internet access.
If you do not have access to such a computer at home you need to expect to spend a significant
amount of time in the open computer lab at Chemeketa.

All of the software used in this course is freely available and can run on Windows, Linux or Macs
OS X. Although I am happy to help you troubleshoot software issues in office hours, making sure you
have a working development environment is your responsibility.

### Development Environment

The code samples provided will be set up as QTCreator projects, but can be built and run from the
command line. All work you turn in will be compiled and run in a virtual machine. You will be expected
to set up a virtual machine on your computer and test in that environment.
