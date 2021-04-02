---
# Page metadata.
title: Assignment 8
summary: JS

#Force layout as if no other content in folder
layout: single
weight: 80
---

{{% cs290General %}}

## Goals

* Use HTML Forms
* Validate Data

## Overview

This week you will be extending your work from last week and making a form that can be
used to add new records and update existing ones. You will continue working in the `database` directory.

If you need/want to modify your schema to make it easier to do something interesting
this week, or because a choice you made last week turns out to be really challenging to
implement as a form, you may do so. But if so, you should make sure to update all of your
premade objects so they conform to the new schema.

For parts of this assignment, you will need to describe what you did in a PDF you will
submit to elearn. Use google docs or Word to make a document and then save it as a PDF to submit.

## Form

Make a form that corresponds to your data item. There should be some kind of input for
each field in the item. You should use appropriate controls for inputting values - not everything
should be a plain text input. Dates should use date inputs, enums should use a select or
radio buttons, bools check boxes, relation to other objects some kind of select list, etc...

Eventually, this form will need to be an EJS based view. If you want to start off that way,
set do this work at the same time you do the [Create](#create) part below. If you want to
just focus on the form, make a plain HTML file to work in. You can then merge that work into
a view as you do the rest of the assignment.

**Writeup Question #1:** Provide a screenshot of your form. Briefly describe what part
of the form was the most complex to figure out.

## Create

Add a route/controller/view for `/YOURTYPE/create/` that can be used to access your form to
create a new item. Submitting the form, if successful, should add a new object to your
database and then display the list of objects (`/YOURTYPE/`).

You should do validation on all the entered data using any combination of browser and/or
server side validation.

In your `index.html` add a link that goes to the create page.

**Writeup Question #2:** List your fields. For each one, how is it validated? Is there
anything you can think of that might cause problems you could not figure out how to
validate for?

## Update

Make a route/controller for `/YOURTYPE/update/ID/` that uses the same view as create
to display an existing object (identified by ID) in your form and allow changes to be made.
A successful submission should update the existing object and display the list of
objects (`/YOURTYPE/`).

Again, should do validation on all the entered data using any combination of browser and/or
server side validation.

In the list display of your object (`/YOURTYPE/`) add links or buttons to the display for
each object that link to this update page and allow you to modify the object.

## Scoring Overview

Form - 15 pts
:  

Create - 15 pts
:  Working create form with link from index.

Validation - 10 pts
:  Do appropriate validation. Writeup clearly describes and documents any issues.

Update - 10 pts
:  
