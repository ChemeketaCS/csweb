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

To start, make a directory `express` in your repository. Do all your work in that folder.

## Express Server Setup

In the `express` directory, set up an Express based web server. I should be able to launch
it with `npm install` and then `npm start` from the `express` directory and
then browsing to `localhost:3000`. Make sure that as you use npm to install packages, they
are being added to the package.json.

Your server should:

* Serves static files from a directory `public`. All plain html files/css/js, etc... should be
in public.
* Displays an index.html page by default. That page can be just a simple "Hello" page
with some very basic styling/layout. Title in a colored bar at the top, fixed width main container,
etc... Just enough styling to show that all the pages look the same. (You can use Bootstrap to help.)
* Displays a custom 404 page when a bad page is requested. It should share the same basic styling
as the index.html.

## EJS Rendering Single

For this part you can reuse the data source you used in assignment 5, or choose a new one.

Make an EJS based view for a type of data from your data source. This view page should share the same
basic styling as the static pages. The part of the page that displays the actual data should do
some basic styling to the data being displayed.

Add a route/controller to handle requests to display pieces of data pulled from your data source.
The exact data item to display should be determined by the last part of the request url - your controller
should use that information to retrieve a particular record via the API and display it using your view.

For example, if your data source is books, you might handle requests that look like `/book/mobydick/`
or `/book/greatexpectations/` and then use the API to search for `mobydick` or `greatexpectations`
and display that book using your view.

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
The items should be displayed in some kind of summary format that displays just a few fields
but makes one of the fields a link that takes you to a single item view of that item. You can
make this route parameterized or not. In other words, you could have a `/books/` that displays
a list of books or do something like `/books/XXXX/` that displays books from the year XXXX
(e.g. `/books/2020/` or `/books/2021/`).

Make sure that only a reasonable number (10-50) of items are displayed - it is fine to
have your controller only display some of the available records.

Again, this page should share styling with the other pages.

To your `index.html`, add one or more links to display a list of items. Add header or something
to the index to make it clear which link(s) are to single items and which are to lists of items.

## Scoring Overview

Serve static files - 15 pts
:  Server serves js/css/html pages from `public`.

index/404 - 10 pts
:  Pages have some basic design and are served from the static directory.

Single view implemented - 15 pts
:  

Multiple item view implemented - 10 pts
:  