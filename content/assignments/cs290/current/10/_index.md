---
# Page metadata.
title: Assignment 10
summary: JS

#Force layout as if no other content in folder
layout: single
weight: 100
---

{{% cs290General %}}

## Goals

* Use cookies/sessions to track information between visits to a website.

## Overview

You will be making a simple application the tracks information about the user between visits.

Make a `usertrack` directory in your project. Make an express based application in it that
I can run using `npm install` and `npm start` and then browsing to `localhost:3000/`. Make
sure any installed packages are saved to package.json.

## Cookie Storage

Add a route/controller that sends `/views/` to a view that simply displays "You have viewed
this page XXX times on this computer" where XXX is the number of times the page has been loaded.
You should use a cookie to track the page views so that the count does not reset if the user
leaves the page.

Make a link in `index.html` to this URL.

## Session Storage

Add a route/controller that sends `/selections/` to a view that displays a form with a long
select list that allows for multiple selections. The list can be of anything but should have 15+ items.
Initially, nothing should be selected. When submitted, you should save the selected options to a
user session.

When the page is reloaded, if there are selections saved in the session, they should be restored
in the form.

Make a link in `index.html` to this URL.

## Scoring Overview

Cookie Storage - 30 pts
: 

Session Storage API - 2 pts
:  
