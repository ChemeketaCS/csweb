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

You can add validation rules to a schema without having to worry about updating the data. But,
if any of your existing records violate the rules you set up, you will not be able to
save modifications to them without conforming to the validation rules you have set up.

For parts of this assignment, you will need to describe what you did in a PDF you will
submit to elearn. Use google docs or Word to make a document and then save it as a PDF to submit.

## Schema Based Validation

Setup Mongoose validation rules in your Schema. You can test these with your load data
script. Modify it so that your starter data violates some of the rules and try to rerun
the script. Calls to save() on invalid data should result in an error. Then fix the
data so it is valid and confirm the load script still works.

**Writeup Question #1:** List your fields. For each one, how is it validated? Is there
anything you can think of that might cause problems you could not figure out how to
validate for?

## Form and Create

Add a route/controller/view for `/YOURTYPE/create/` that can be used to access a form to
create a new item for your schemaa. Submitting the form, if successful, should add a
new object to your database and then display the list of objects (`/YOURTYPE/`).

The form should have some kind of input for each field in the item.
You should use appropriate controls for inputting values - not everything
should be a plain text input. Dates should use date inputs, enums should use a select or
radio buttons, bools check boxes, relation to other objects some kind of select list, etc...

Your form should have client side validation where supported with HTML basic features. (i.e. 
Use things like required and max - but you don't have to write any custom js validation logic.)

In your `index.html` add a link that goes to the create page.

## Update

Make a route/controller for `/YOURTYPE/update/ID/` that uses the same view as create
to display an existing object (identified by ID) in your form and allow changes to be made.
A successful submission should update the existing object and display the list of
objects (`/YOURTYPE/`).

In the list display of your object (`/YOURTYPE/`) add links or buttons to the display for
each object that link to this update page and allow you to modify the object.

## Accessibility Audit

Use the
[Accessibility Audit Template](https://docs.google.com/document/d/1Bp3t2i_kt24Ktbf1ckuKZL3QWaj2FiM-9WJHzBedxRk/copy)
to do an audit of your form page. You only need to complete sections 3, 6, and 7.

When complete, safe as a PDF for submission (you will submit it and the writeup as separate documents).

## Scoring Overview

Schema Validation - 10 pts
:  Must have writeup.

Form - 10 pts
:  Has a form that corresponds to data type. Has client side validation.

Create - 10 pts
:  Can successfully save new items using the form.

Update - 10 pts
:  Can use the form to load existing objects and successfully save them after making changes.

Audit - 10 pts
:  
