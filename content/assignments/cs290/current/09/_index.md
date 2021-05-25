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

* Use cookies/sessions to track information between visits to a website.

## Overview

You will be making a simple application the tracks information about the user between visits.

Make a `usertrack` directory in your project. Make an express based application in it that
I can run using `npm install` and `npm run start` and then browsing to `localhost:3000/`. Make
sure any installed packages are saved to package.json.

For parts of this assignment, you will need to describe what you did in a PDF you will
submit to elearn. Use google docs or Word to make a document and then save it as a PDF to submit.

## Investigation

**Writeup Question:**

Pick a website you interact with a fair amount and see what information is tracked via cookies
when you access it.

Include a screenshot of the chrome developer panel:

{{< figure src="cookies.png" alt="A list of cookies shown in the Chrome Developer panel, Application Tab" >}}

Then answer the following

1. What domains other than google are cookies being included from?
1. Is there any information other than id numbers being stored (anything that isn't just
a string of long numbers)
1. Can you figure out any of the programming language/platforms being used? Try googling
some of the cookie names.

## Cookie Use

Add a route/controller that sends `/` to a view that simply displays "You have viewed
this page XXX times on this computer" where XXX is the number of times the page has been loaded.
You should use a cookie to track the page views so that the count does not reset if the user
leaves the page.

## Session Use

To your view, add a form with one or more text fields and at least two radio buttons/checkboxes.
When submitted, you should save the submitted information to a user session.

When the page is reloaded (by browsing to `/` on your site), if there is information saved in the
session, it should be used to fill in the form so it looks like how the user last submitted it.

The session itself can be memory based or you can use MongoDB. If using MongoDB, make sure to
include a working connection string.

## Scoring Overview

Investigation- 10 pts
: If you do not do this problem, make sure

Cookie Storage - 20 pts
: 

Session Storage API - 20 pts
:  
