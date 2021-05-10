---
# Page metadata.
title: Assignment 7
summary: JS

#Force layout as if no other content in folder
layout: single
weight: 70
---

{{% cs290General %}}

## Goals

* Setup a MongoDB database
* Use Mongoose to work with MongoDB to generate dynamic web pages

## Overview

To start, make a directory `database` in your repository. You will likely want to
use the `express` generator to make it (`express database -view=ejs`)
as you will need it to be an express based server. Alternatively, you can manually setup the folder.

You will have to install mongoose using npm - when you do so, make sure it gets saved to your
package.json.

I should be able to test your work by doing `npm install` and `npm start` in your
`database` folder and then browsing to `localhost:3000`.

For parts of this assignment, you will need to describe what you did in a PDF you will
submit to elearn. Use google docs or Word to make a document and then save it as a PDF to submit.

## Mongoose Schema

Pick a kind of data to represent that has at least 5 fields. Not all of the fields may
be the same data type (can't just have 5 strings) and one of the fields should be something
other than a plain string/numeric (date, reference to another object of the same type,
enum, array, etc...).

You may not use the same kind of data you used in weeks 5 or 6. You also may not use a kind of
data related to your final project.

Develop a mongoose schema for your object. Add at least two virtual fields:

* One should get a URL for the object. This url should look like `/book/123/`
and be unique for each object. The `_id` field is a good source for unique data to make the URL from.
* The other(s) should do some simple calculation or processing of the existing
fields and return the result.

**Writeup Question #1:** Show the code for your schema and the virtual(s).

## MongoDB

Set up a database on cloud.mongodb.com. Populate it with at least 4 records that
match your schema. You should do this by making a `addData.js` script to the
root project and set it up to create and save the records when you do `node addData.js`.

Credentials to connect to your database should be stored in your repository so that
I do not have to modify anything to test out your code.

{{% alert warning %}}
For real projects, storing credentials in source control is a BIG no no. They should be
stored in a config file that is not checked into source control or set up as environmental
variables in the OS that are read by the program.
{{% /alert %}}

**Writeup Question #2:** Provide a screenshot of your MongoDB.com database that shows a few
of your data items in the collection (doesn't have to show all).

{{< figure src="mongodb.png" alt="MongoDB view showing multiple records" width="80%" >}}

## Rendering List of Objects

Make a route/view for `/` that displays a list of all the data items in a view.

You do not need to do any fancy styling of the data. You are only required to render a series
of list items or divs for each item that show a piece of information or two
about the record (title, name, something else key about it) and use the URL virtual
to make a hyperlink that will link to a page that displays that record. (You will make that
link work in the next part.)

## Display Single

Make a route/controller/view that is parameterized to select a single object. The route should
correspond to the URL virtual in your object. (So if the URL for a book is `/books/123/`, the
route `/books/123/` displays that book.)

When items are displayed, you should use all fields and virtuals. (Display them or make use of
them to affect the styling). You do not need to do anything super fancy style wise with the data,
just make sure it is all displayed in some html tags (not just as a wall of text).

I should be able to test this by loading `/` and then clicking links.

## Scoring Overview

Mongoose Schema - 15 pts
:  Schema created and documented in PDF.

MongoDB - 15 pts
:  Database is setup and populated, evidence in PDF.

Objects Rendered - 10 pts
:  

Display Single - 10 pts
:  
