---
# Page metadata.
title: Final Project
summary: Build a data-driven dynamic website in a small group 

#Force layout as if no other content in folder
layout: single
weight: 110
---

## Goals

* Build a full stack web application
* Learn basic project management and collaborative software development skills

## Overview

Working as a small team, you will develop a data driven website using
node/express/mongoose.

The type of data your program works on can be whatever you like and can be based
on something in the real world or completely factious. The main requirement is that
there must be one type of "complex" data for each team member to work on. A "complex"
piece of data is one with at least 4 attributes and that needs to represent some
kind of connection to at least one other type of data.

Say you are building a program about a Library. Types of data you might represent might
include Books, Patrons, Branches, etc... A **Patron** that just had a
name, cardNumber, address, and phone number would not be "complex" as it does not
reference any other of the project data types. However if **Patron** also tracked
a list of books that are currently checked out, or on a "favorites" list, it would
be "complex". Similarly, top make a **Branch** "complex", it would have to do something
like have a list of all the books that are at the branch, or the patrons who
have a library card at that branch, etc...

Each group member is responsible for their own "silo" or work in the project:
building functionality for one of the "complex" types of data. There are some places where
your work will depend on basic portions of your team mates work, but only ~10%
of the grade is a shared grade that depends on participation from all members. Most of
the points will come from building functionality around your particular data item - 
the basic requirement is an interface for CRUD operations (Create a record, Retrieve
and display record(s), Update existing records, and Delete records).

Your group should design your project to make sure there are enough "complex" items
to provide every group member with one to work on. As a group, you may need to create
some extra complex or simple data types to support your complex ones. (For example, in
the Library example, you might need a simple Book data type for Branches and Patrons
to work with.) You do not need to provide web pages for working with any of these
"extra" data types - it is sufficient to set up a schema for them and populate
the data base with some items to work with.

Your work for this project may not recycle work for earlier assignments or make direct
use of any of the samples from the course. Obviously, you will use similar ideas and
techniques, but all your work on this project should be new for the project.

## Submission

See elearn for instructions on submitting mid-term and final deliverables.

In general, you will need to make sure your code is pushed to github and turn in
a PDF describing some of that you did.

Your project must be runable from your repository without any changes or
additions. This means that DB credentials, API keys, etc... must be stored
in the repository. For a real project this would be a big no no - things like
that should either be stored in a config file that is not checked into source
control or stored in environmental variables set on each machine.

To run your project I should be able to just do `npm install` and `npm run start`
and then visit `localhost:3000/`.

## Scoring Overview

Although you will be doing the project in a small group, most of the score
is awarded individually.

### Midterm deliverables - 20 pts

There will be at least two mid-term deliverables where your team is responsible for
demonstrating working versions of portions of your site. Completing these on time
will be worth 20% of the overall grade.

### Data - 10 pts

You were responsible for a type of data with multiple fields that includes references
to some other data records. There is a schema defined for your data type and the
database is pre-populated with a decent number of sample/starter records.

### Server functionality - 5 pts

The server as a whole functions to serve your pages and handles basic errors (404/500).

*One score awarded to everyone on team.*

### Displays data records - 10 pts

Clean, attractive pages to display existing records. Well structured pages with
clean, basic styling is the goal. These do not need to be masterpieces of visual
design, but should have some basic CSS to make them presentable and use ids and classes
in the HTML to enable further styling.

You should display some information about related objects and links to them.

**Writeup Question 1:**
What data did you work on?

### Page Cohesiveness - 5 pts

The individual pages use a consistent navigation scheme and basic styling. 
The primary  navigation looks similar across all the pages.
There is a logical "home" page to the site.  

It is fine if "something extra" features that someone adds to their pages are
make them stand out. But, they should still share some of the same basic page structure
and navigation.

*One score awarded to everyone on team.*

### Supports Create/Update/Delete operations - 30 pts

Provide ways to delete records, update existing records, and add new records. You should
support editing the associations for your object (reference(s) to other data items).

Delete operation should make sure nothing else in the database still refers to the removed
object.

Pages for doing this should follow the same basic guidelines as for the "Display" pages.

### Planning & Communication - 5 pts

The team can provide evidence of task tracking and collaboration. The easiest ways
to provide this are:

* Project boards on your github repo.
* A link to a google doc with meeting notes.

*One score awarded to everyone on team.*

**Writeup Question 2:**
Provide a link to where I can find this. Google doc, project boards, etc... If necessary,
attach to submission as a separate PDF.

### Something extra - 15pts

Doing a good job on the expected work is 85% of the assignment. The last 15% can
be earned by doing something(s) not explicitly requested.

**Writeup Question 3:**
What is your something extra? What did you have to learn to get it done? What
was most challenging about it?

Here are some suggestions:

* Implement one or more "user focused" pages. These should allow an end user
to interact with the records in some "real world" fashion more complex than simple
create/update logic.

    Example: in a library
    program, add a feature to allow a user to checkout and return books. Books that are
    checked out are listed on the user's profile. A book that has been checked out is not
    available to other users.
* Build an AJAX based page that allows someone to dynamically sort/filter
your data.
* Do something interesting with cookies/sessions to track "favorites",
"recently viewed", or something similar.
* Make a json web request API for your data and document it. It should support
most of the same basic CRUD options that your website interface does.
* Find a JS library that draws charts/graphs and incorporate it into one or
more pages to visualize your data.
* Handle file uploads as part of your data. (e.g. You can upload an image
that goes with a new record being added.)
* Do something **really** complex with the styling for your pages. 
A couple of style rules on top of a bootstrap based layout does not cut it here.
* Learn about [SASS](https://sass-lang.com/) and use the npm based [Dart SASS](https://www.npmjs.com/package/sass)
to preprocess your CSS. This one isn't much use unless you are also doing some substantial
CSS styling.

To earn the full 15%, you need to put significant effort in above the basic requirements.
Effort can come through figuring out how to incorporate some complex idea, or
via writing lots of code yourself. You can do multiple smaller "something extras"
or one that is complex enough on its own to be significant.

Hopefully, you throw yourself into going deep into one or more things that sounds interesting
to you. If you do that, you probably are going meet the "significant effort"
requirement naturally. You are welcome to ask me for some feedback on whether something
sounds like it is in the ballpark for qualifying for full credit. However, I will not
do a formal evaluation of your work prior to grading. (In other words, you can't keep
checking with me: 'is this enough?', 'how about now, is this enough?'... to min/max
what you do.)

The "something extra" is per student. Group mates can do completely separate
"extras", in which case the "extra" only has to exist for their pages/data items.
