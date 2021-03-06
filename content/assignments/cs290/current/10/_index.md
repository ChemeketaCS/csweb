---
# Page metadata.
title: Assignment 10
summary: JS

#Force layout as if no other content in folder
layout: single
weight: 100
---

## Goals

* Become familiar working on remote servers.

## Overview

All your work will be done on a remote server. See the assignment in elearn for details
on its address and your account info.

When you are complete, do a submission to elearn with just a note "Done".

You may need to refer to this [linux command line tutorial](https://ubuntu.com/tutorials/command-line-for-beginners#1-overview)
or a [command line cheat sheet](https://files.fosswire.com/2007/08/fwunixref.pdf).

## Login

You need to log in and change your default password to something new. You will not be able to
connect with an sftp client unless you do this first.

You will connect to it using `ssh YOURNAME@x.x.x.x` where **YOURNAME** is your my.chemeketa username
and **x.x.x.x** is the server address given in the assignment in elearn.

You will be asked for your password (the default one is listed on the assignment in elearn). Once you
enter it, you will be prompted to make a new password.

* First you type the old password again, then the new one twice.
* Then you are logged out automatically. Reconnect using your new password.

## Add a webpage

nginx is set up to serve up static files from the folder `www` in your home
directory. If I try to request to `xxx.xxx.xxx.xxx/~ascholer/` it will serve
up the file `~ascholer/www/index.html`. If I try to request
 `xxx.xxx.xxx.xxx/~ascholer/foo.html`, it would serve up `~ascholer/www/foo.html`.

Log into the server and make a `www` directory in your home
folder and in it add a simple **index.html** page. Your index.html should be
an actual html file (has \<head>, \<body>,etc...) but the contents can just be
"Hello world".

You can do this using an sftp client OR by remoting in with ssh and using
a text editor like **nano** or **vim** directly from the command prompt.

## Add an ssh key

Use `ssh-keygen` to make a public/private key pair on your computer. Make sure
to save the keys to `.ssh/` in your home directory. If you have never made a key
before, you can use the default name. If you already have a `.ssh/id_rsa`, you
will want to make a different name.

Upload your public key to the server. Then make the folder `.ssh` and move
the key into it. Rename it `authorized_keys`. You now should be able to login
by specifying that identity file using something like (where x.x.x.x is the
server address):

    ssh YOUR_SERVER_ACCOUNT@xxx.xxx.xxx.xxx -i ~/.ssh/YOUR_PRIVATE_KEY_NAME

{{% alert info %}}
If you were trying to add a second key, you would need to add the new public
key as a second line to the existing **authorized_keys** file.
{{% /alert %}}

{{% alert warning %}}

* If you are on a linux, you can use ssh-copy-id to automatically install your
public key to a remote server... google for instructions.

* If you have an unupdated copy of windows, you may not have ssh-keygen.
In that case, you can run it on the server, and copy the private key back
to your computer using sftp.

{{% /alert %}}

## Scoring Overview

Add personal webpage - 30 pts
: 

Setup ssh key - 20 pts
:  

<!-- {{% cs290General %}}

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
:  Do appropriate validation. Writeup clearly describes and documents any issues. -->
