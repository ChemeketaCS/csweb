---
# Page metadata.
title: Assignment 5
summary: JS

#Force layout as if no other content in folder
layout: single
weight: 50
---

{{% cs290General %}}

## Goals

* Use JS Objects
* Retrieve remote data using javascript
* Modify a web page dynamically with javascript

## Overview

You will be implementing a web page that can retrieve and display information from
a publicly available data api.

For parts of this assignment, you will need to describe what you did in a PDF you will
submit to elearn. Use google docs or Word to make a document and then save it as a PDF to submit.

Make a directory `objects` in your Assignments repository. Do all your work in this directory.

## Data

Find a web based data source from which your application can retrieve a list of one
or more items via an API.

Here is an extensive list of options:
https://github.com/public-apis/public-apis

You should probably stay away from options that require OAuth authorization. To use anything that
requires an apiKey, you will have to register for an account with the source (usually pretty
free and simple) and then request/generate an apiKey that will be used to identify your application
(and make sure they can ban you if you are abusing their resources).

Different sources will have different levels of documentation - you may want to search around
for something that has decent examples of using it.

From your data source, you should select one type of data that you are going to retrieve and display.
It must be something with at four attributes. (A data source that returns just **name** and **title**
for a list of **books** would not be sufficient as there are only two attributes per item.) If there
are more than four attributes, it is fine to ignore some of them.

**Writeup Question #1:** Describe the data you are retrieving in a few sentences. (What kind of
data, what attributes are you focused on.)

## JS Object Use

Make a .js file. In it, you should define either an ES6 class, or a js function that defines a class
that represents the objects you are retrieving from the data source.

Your "class" should have fields for each of the data attributes you are working with, a constructor,
and some kind of member function/property (or prototype function) that is used to retrieve some calculated
value. (For example, if you retrieve a **Person** object with a **birthday** field, you might add
an **age** property or **getAge()** method that calculates how old they are and returns that.) It is
OK if the work done by the function is not that complex.

{{% alert info %}}
Defining a class just for the limited work in this project is design overkill. Most developers would
just use the objects returned in the JSON without bothering to formalize them into a particular
type. The value of defining a class for the data would only come into play as you used those
objects across many different pages or in much more complex logic.
{{% /alert %}}

**Writeup Question #2:** Describe the property or method you implemented in a sentence or two.

## Page Generation

Make an `index.html` page that makes use of your .js file.

Your page should let the user enter some piece of information, use that to request specific data
from the data source, store the results to an array of objects, then display the results as some
kind of well formatted data on the webpage.

Note that retrieving data will give you a list of untyped objects. For full credit, you should
use that list to generate a list of objects of the "class" you defined, then use that list
to generate the web page contents.

Each item that was retrieved should be displayed as some kind of HTML entity on the page along
with the at least four attributes that you are focusing on. The different pieces of information
should be contained in separate HTML entities so they could easily be further styled. (All
the information should not just be a blob of text in the HTML file.)

You should do some styling to make the presentation look organized and appealing. Try
to do something dynamic with the rendering, so that one or more attributes of an object are displayed
visually (as an icon or image) or affect the styling in some way (color used for displaying
the object).

You should build display entities using actual js constructs, not by making one giant text string
with the HTML you want. To avoid style deductions, avoid having one giant function that does
all the work to build the page. (Consider making a function that takes a js object and produces
an HTML entity that can be added to the page.)

**Writeup Question #3:** If you are doing something dynamic - describe it briefly so I know what
I am looking for. Otherwise not required.

We have not covered forms in general, but here is an HTML snippet you can use to make a text field
where the user can enter some information and a button to execute the search. If you want more than
one input, make more label/input pairs and make sure that each input has a different id and each
label's for matches the id of the input it describes.

~~~ html
<label for="inputField1">Enter a search string:</label>
<input type="text" id="inputField1" value="Some default value here">
<button class="btn btn-primary" id="searchBtn">Search</button>
~~~

Please make sure *"Some default value here"* is changed to something that actually works to search
with.

Then, in your javascript do this to retrieve what the user typed (once per input):

~~~ js
const inputValue = document.querySelector('#inputField1').value;
~~~

## Scoring Overview

Successfully retrieve data - 20 pts
: For full credit, your request should use the user input to request specific data.
Note you can log data to the console and still earn this even if you don't generate HTML.
Must have writeup to receive any credit.

Class/Object use - 10 pts
: For full credit you must use your "class" and define/use some custom.
Must have writeup to receive any credit.

Display data - 20 pts
: For full credit, you should do something interesting and dynamic while displaying the data.
However, clean, well structured HTML is more important than "pretty". "B" level credit can
be earned for simply producing well structured HTML. To score full credit, must have writeup.
