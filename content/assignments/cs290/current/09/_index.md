---
# Page metadata.
title: Assignment 9
summary: JS

#Force layout as if no other content in folder
layout: single
weight: 90
---

{{% cs290General %}}

## Goals

* Use express to provide a Data API.
* Implement complex client side updates via AJAX.

## Overview

This week, you will be updating your `databases` directory to provide a data API that
produces json versions of your data. You will then use it to display and filter data
via AJAX on a plain HTML page.

For parts of this assignment, you will need to describe what you did in a PDF you will
submit to elearn. Use google docs or Word to make a document and then save it as a PDF to submit.

## Data List API

Add a route/controller `/api/YOURDATATYPE/` (like `/api/books/`) that returns all items
from your database as a JSON list.

Make a link in `index.html` to this URL.

## Data Filtered List API

Make a route/controller that is parameterized to select some group of objects and return it
as a json list. Something like `/books/year/XXXX/` (e.g. `/books/year/2020/` or `/books/year/2021/`).
Like in the past, you may want to avoid using a field that will have spaces or special characters in it.

Make 2+ links in `index.html` that link to this URL with different parameters.

## Display List

Add a plain html file `ajax.html` at the root level of your site. Make a link to it on your `index.html`.

This file should use javascript to retrieve all of your items via the `/api/YOURDATATYPE/` route
and then display them in an HTML table. This table needs only basic formatting and the data in the
table does not need to be formatted.

## Filterable List

Add an input above your table that can be used to filter the data in the table.
For example, I might have a select drop-down menu with various years that allow the user to pick a
year of book they want to see. There should be a button that does not actually submit the form/page
but instead just triggers javascript to retrieve a new list of data using your
parameterized API and then update the table to display those items (probably by clearing the existing
rows and then adding new ones). 

**Writeup Question #1:** Provide a screenshot of using this input to specify some value and the
table that results.

## Sortable List

Make 2+ columns of your table have a button that says "Sort" in the header. Clicking "Sort" should
trigger js that sorts the existing data by that field and updates the table to show the new ordering.

You should not do a new request via the API. The sort should be done using the last data retrieved.
That means any time you retrieve a list, you need to store it in some page level variable for later
access.

## Scoring Overview

Data List API - 15 pts
: 

Data Filtered List API - 10 pts
:  

Display List - 15 pts
:  Working create form with link from index.

Filterable List - 5 pts
:  Working create form with link from index.

Sortable List - 5 pts
:  Do appropriate validation. Writeup clearly describes and documents any issues.