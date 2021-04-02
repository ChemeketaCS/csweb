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

You will be doing something very similar to last week only data to be displayed will come
from a database you create and populate. You can reuse parts of what
you did last week (express setup, basic page style). Feel free so by copy resources or
code from your `express` folder.

{{% alert warning %}}
If you do reuse your express setup, you do not want to copy your node_modules folder.
Instead, copy use `npm install` to install copies of the 
{{% %}}

To start, make a directory `database` in your repository. Do all your work in that folder.
I should be able to test it by doing `npm install` and `npm start` in that folder and
then browsing to `localhost:3000`.

You will have to install mongoose using npm - when you do so, make sure it gets saved to your
package.json.

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

Set up a database on cloud.mongodb.com. Populate it with at least 10 records that
match your schema. You should do this by making a `addData.js` script to the
root project and set it up to create and save the records when you do `node addData.js`.

{{% alert info %}}
You do **NOT** need to do something as complex as the `populate.js` script shown in the
library sample. That is overkill.
{{% /alert %}}

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

Make a route/controller/view `/YOURTYPE/` that displays a list of all the data items using some
basic formatting.

When items are displayed, all fields should and you should make use of the virtuals you defined.
(Display them or make use of them to affect the styling).
The URL should be used to make a hyperlink that in theory would display just that object. It does
not actually have to work - you do not need a route/view to handle those links.

Make an `index.html` that has a clear link to display the list page. The index should be displayed when
your server is started.

## Parameterized Route

Make a route/controller that is parameterized to select some group of objects. Something like `/books/year/XXXX/`
that displays books from a certain year (e.g. `/books/year/2020/` or `/books/year/2021/`).

You can reuse your existing view from above or make a new one.

{{% alert info %}}
Spaces and many special characters are hard to deal with in urls - I recommend you avoid using
a field that involves strings that may have spaces or other special characters. For the books sample,
year is a better choice than author (assuming author is a string) as author probably has spaces in it.
{{% /alert %}}

Make an `index.html` that has 2+ links that point at this route and display different
lists of information. The index should be displayed when your server
is started.

## Scoring Overview

Mongoose Schema - 10 pts
:  Schema created and documented in PDF.

MongoDB - 15 pts
:  Database is setup and populated, evidence in PDF.

Objects Rendered - 20 pts
:  

Parameterized Route - 5 pts
:  
