---
# Page metadata.
title: Assignment 1
summary: HTML

#Force layout as if no other content in folder
layout: single
weight: 10
---

{{% cs290General %}}

## Goal

Create valid webpages using tables, images, lists, and other basic elements.

## Requirements

Clone the assignment starter repository (see elearn). You will do all the work
for this assignment in the `aboutme` directory. The directory is set up to run
a basic web server you can use to view your files. Make sure node/npm is
installed on your system, then navigate to the directory and do this once
to install needed packages into a `node_modules` folder:
{{% sample_run %}}
npm install
{{% /sample_run %}}

Then, to run the server, do:
{{% sample_run %}}
node serve.js
{{% /sample_run %}}

Make the webpages listed below - it is fine to make more than the listed three.
Your HTML should be well formed and cleanly formatted. You can name each file whatever
you like other than **Home** which must be `index.html`.

All your web pages should share some common elements. They should each have a `<nav>` area at
the top of the page with a list of links to all of the pages in your site.
They also should have a `<footer>` with some "Page by" or copyright message.

Every page should have a `<title>` and a heading at the top that names the page. All content
should be grouped into reasonable "chunks" using divs or other organizing tags. Something like:

{{< figure src="pageFormat.png" width="80%" >}}

For one part of this assignment, you will need to describe what you did in a PDF you will
submit to elearn. Use google docs or Word to make a document and then save it as a PDF to submit.

## Pages

### Home

*filename: index.html*

This should be a page about you. You should have *at least* four "chunks" of information. A chunk
might be: an image (possibly with caption), your contact information, a personal statement,
a list of schools attended, etc...

Each "chunk" should have a heading that describes it.

{{% alert info %}}
This is a private repository, so you don't have to worry too much about exposing anything private.
But still best not to put anything into it that you would not be comfortable making public.
{{% /alert %}}

### Hobby/Interest

Make a page that describes a hobby or an interest you have. This page must have the following items:

* At least three images. If they are your own images, add them to your repository. If they are
external image, link to that image and make sure to list the source it is being loaded from below
the picture. (Image from: site.com).  
Each image should have some associated information: a title,a caption, etc...
* Multiple paragraphs of text divided into at least two sections, each titled with a heading.
* Some kind of list of links to places to learn more.

### Coursework

Make a page that lists the degree you are working on and shows your progress towards the degree
in a table like the one below. (It is OK to pick a random [Chemeketa degree](https://www.chemeketa.edu/programs-classes/degrees/)
or a degree from the school you are going to transfer to if you aren't working on a Chemeketa degree.)

Your table must have the following features:

* The top row and column should be headers. You must have some headers that span multiple
rows or multiple columns.
* At least 10 courses listed - subjects should be bold, numbers plain text. Fine to make up data if
you have not taken that many.

{{< figure src="courseTable.png" width="80%" >}}

You can use this style information to get borders for your table (place it in the \<head> of your document):
~~~html
<style>
    table {
      border-collapse: collapse;
    }
    td {
      padding: 5px;
      border: 1px solid black;
    }
</style>
~~~

## Validation

Install the HTML Validator (see Resource Links in the 290 course pages). Run it on each of your
three pages. Take a screenshot of the results (just the **HTML errors and warnings** summary) for
each page and paste them into a document you will submit as a PDF.

## Scoring Overview

Home page - 10 pts
: Contains required elements.

Hobby/Interest page - 15 pts
: Contains required elements.

Coursework page - 10 pts
: Contains required elements.

Common formating (nav/footer) - 10 pts
: Required elements are common across all pages.

Valid HTML - 5 pts
: No validation errors or warnings for any pages.
