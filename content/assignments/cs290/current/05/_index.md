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

* Retrieve remote data using asynchronous javascript
* Modify a web page dynamically with javascript

## Overview

You will be implementing a web page that can retrieve and display information from
a publicly available data api.

For parts of this assignment, you will need to describe what you did in a PDF you will
submit to elearn. Use google docs or Word to make a document and then save it as a PDF to submit.

Make a directory `ajax` in your Assignments repository. Do all your work in this directory.

In it, make an `index.html` page and a javascript file that the html makes use of.

## Data

Find a web based data source from which your application can retrieve a list of one
or more items via an API. (You may not use any of the APIs used as samples: BrewDog
and FallGuys.)

To find an API, you can browse this list of options:
https://github.com/public-apis/public-apis

If choosing from this list, you will need to make sure that the API you select
supports CORS. Many of the ones that are listed as **Unknown** do, but not all. 
To do a quick test, do a simple `fetch` using the API then check the console.
You will know that an API does not support CORS if you see an error like the one below:

{{< figure src="cors-error.png" >}}

To use anything that
requires an apiKey, you will have to register for an account with the source (usually free and pretty
easy) and then request/generate an apiKey that will be used to identify your application
(and make sure they can ban you if you are abusing their resources).
You should probably stay away from options that require OAuth authorization.

Or you can find one using RapidAPI:
https://rapidapi.com/category

All of the ones from rapidapi will be CORS compliant. The gotcha here is that many of the 
APIs are paid or have very limited free quotas. Don't select
something where you only get a few queries a day or 100 a month. You might exhaust all of those
before you finish the project and I grade it!

Different sources will have different levels of documentation - you may want to search around
for something that has decent examples of using it.

From your data source, you should select one type of data that you are going to retrieve and display.
It must be something with at four attributes. (A data source that returns just **name** and **title**
for a list of **books** would not be sufficient as there are only two attributes per item.) If there
are more than four attributes, it is fine to ignore some of them.

Write code to retrieve data from the API and log it to the console. It is fine to hard code
some particular search (e.g. set it to always retrieve something like `"/books/author/seuss/"`).

{{% alert info %}}
If your data source requires an API key, it will have to be embedded in your webpage. That would
be a **Bad Idea** on a publicly accessible web page. Unfortunately, there is no better way to do things
until we learn how to do this server side. Fortunately, your repo is not public.
{{% /alert %}}

**Writeup Question #1:** Describe the data you are retrieving in a few sentences. (What kind of
data, what attributes are you focused on.)

<!-- ## JS Object Use

Define either an ES6 class, or a js function that defines a prototype
that represents the objects you are retrieving from the data source.

Your "class" should have fields for each of the data attributes you are working with. (It is fine
for it to not have any attributes in the original data source that you are ignoring).
It should have a constructor,
and at least one member function or get/set based property (or prototype based function if you are
using an old style prototype) that is used to retrieve some calculated value. For example, if you
retrieve a **Person** object with a **birthday** field, you might add an **get age** or
**getAge()** method that calculates how old they are today
and returns that.) It is OK if the work done by the function is not that complex.

Store the data you retrieve into an array that contains objects of your class. Then log the items
to the console. For instance, if I retrieved a list of books, I would make an empty array: 
`let bookList = [];` and then add individual Books I created using `new Book(...params here...)`.

{{% alert info %}}
Defining a class just for the limited work in this project is design overkill. Most developers would
just use the objects returned in the JSON without bothering to formalize them into a particular
type. The value of defining a class for the data would only come into play as you used those
objects across many different pages or in much more complex logic.
{{% /alert %}}

**Writeup Question #2:** Describe the property or method you implemented in a sentence or two. -->

## Page Generation

When the data is retrieved, use it to generate content on the webpage to display the items. Each
item that was retrieved should be displayed as some kind of HTML entity on the page along
with the attributes (at least four) that you are focusing on. The different pieces of information
should be contained in separate HTML entities so they could easily be further styled. (All
the information should not just be a blob of text in the HTML file.)

You should do some styling to make the presentation look organized and appealing. Try
to do something dynamic with the rendering, so that one or more attributes of an object are displayed
visually (as an icon or image) or affect the styling in some way (color used for displaying
the object).

**Writeup Question #2:** If you are doing something dynamic - describe it briefly so I know what
I am looking for. Otherwise not required.

## Custom Query

Add one or more inputs and a button that can be used to execute some kind of custom query on the API
and refresh the page with the retrieved data. The any existing data should be cleared when the
new data is displayed.

For example, I might add a text field where the user
can enter an author name and a button that will get that value and retrieve `"books/author/" + authorName`.

We have not covered forms, but here is an HTML snippet you can use to make a text field
where the user can enter some information and a button to execute the search. If you want more than
one input, make more label/input pairs and make sure that each input has a different id and that each
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

<!-- Class/Object use - 10 pts
: For full credit you must use your "class" and define/use some custom method/property.
Must have writeup to receive any credit. -->

Display data - 20 pts
: For full credit, you should do something interesting and dynamic while displaying the data.
However, clean, well structured HTML is more important than "pretty".

    * 14 pts max - Clean HTML, no styling
    * 17 pts max - Some styling
    * full credit - Dynamic styling of objects based on data - must have writeup

Custom query - 10 pts
:  