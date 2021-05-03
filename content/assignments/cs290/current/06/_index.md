---
# Page metadata.
title: Assignment 6
summary: JS

#Force layout as if no other content in folder
layout: single
weight: 60
---

{{% cs290General %}}

## Goals

* Setup a basic Express based server
* Use EJS to generate pages

## Overview

You will be implementing a running web server using Express and using it to serve
dynamic web pages.

You will be making a directory `myserver` in your repository. Do all your work in that folder.

## Express Server Setup

Make an `myserver` directory and in it, set up an Express based web server. I should be able to
launch it with `npm install` and then `npm start` from the `myserver` directory and
then browsing to `localhost:3000`. Make sure that as you use npm to install packages, they
are being added to the package.json and that you checkin both the package.json and the
package-lock.json.

Your server should:

* Serves static files from a directory `public` (inside `myserver`). All plain html files/css/js,
etc... should be in public.
* Displays an index.html page by default. That page can be just a simple "Hello" page
with some very basic styling from a stylesheet.
* Displays a custom 404 page when a bad page is requested. It should share the same basic styling
as the index.html loaded from a common stylesheet.

You can either set this up by hand or express-generator and then customize the results.

* If you use express-generator, make sure to use `express myserver --view=ejs` to specify ejs as the
template language).
* If you setup by hand, make sure to add a script to your package.json to run your main .js file
when I do `npm start`.

## EJS Rendering Single

For this part you can reuse the data source you used in assignment 5, or choose a new one.
(Since we will be working on a server instead of in a webpage you can now make use of
APIs that do not support CORS.)

Make an EJS based view for a type of data from your data source. This view page should share the same
basic styling as the static pages. The part of the page that displays the actual data does NOT need
any fancy styling - just generate some very basic html. Maybe put the name/title in an h1 and then
each other piece of data in a series of paragraphs or as list items (description list would be a
good fit). You should display at least 4 pieces of data for the record - it is fine to ignore others.

Add a route/controller to handle requests to display pieces of data pulled from your data source.
The exact data item to display should be determined by the last part of the request url - your controller
should use that information to retrieve a particular record via the API and display it using your view.

For example, if your data source is books, you might handle requests that look like `/book/mobydick/`
or `/book/greatexpectations/` and then use the API to search for `mobydick` or `greatexpectations`
and display that book using your view. If your data source does not have a route that allows you to
ask it for particular records, you can retrieve all the records, and then write your own code to
pick which to display.

{{% alert info %}}
If your data source has some unique identifier like an id number for each record, that would be the
logical thing to use in your route. Something like `/book/194/` that uniquely selects book number 194.

If not, try to select some field that will let you as uniquely as possible select specific items. It
would be better to use a book's title field than its publish year as the title is more likely to be
unique or at least have unique strings within it.
{{% /alert %}}

To your `index.html`, add a few links that offer to display items. They should link to URLs that will
display different items.

## EJS Rendering Multiple

Make a route/view that displays a list of data items of the same type as your Single item.
You can make this route parameterized or not. In other words, you could have a `/books/` that displays
a list of books or do something like `/books/XXXX/` that displays books from the year XXXX
(e.g. `/books/2020/` or `/books/2021/`).

Again, this page should share styling with the other pages. The list of items you display
can be very simple - just one or two fields of which one is a link to the single item view.
For example you might display the name of a book as a hyper link to the book followed by
the name of the author.

Make sure that only a reasonable number (10-50) of items are displayed - if the data source
you retrieve from has hundreds of records, only display the first 50 or so.

To your `index.html`, add one or more links to display a list of items.

## Scoring Overview

Serve static files - 15 pts
:  Server serves js/css/html pages from `public`.

index/404 - 5 pts
:  Pages have some basic design and are served from the static directory.

Single view implemented - 20 pts
:  

Multiple item view implemented - 10 pts
:  
