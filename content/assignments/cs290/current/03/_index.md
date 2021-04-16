---
# Page metadata.
title: Assignment 3
summary: Accessibility and Bootstrap

#Force layout as if no other content in folder
layout: single
weight: 30
---

{{% cs290General %}}

## Goals

* Conduct an accessibility audit and design with accessibility in mind 
* Use Bootstrap to assist with layout and style

## Overview

Continue working in the `aboutme` directory.

You can either audit the pre or post bootstrap version of your pages.

If you are in the middle of making changes with bootstrap, and you want to work on the
audit, you can use git to travel back to an earlier version of your pages.
Commit any new work, then use github or the
`git log` command in your assignment folder to identify a commit before you started Bootstrap work.
Find the long hexadecimal commit id. You can checkout that commit by typing the first 7 or so characters.
Lets say your commit id is `ecfe9729601b1746a7c2a177d9be88a9424afc31`, you would do:

    git checkout ecfe972

(This will check out the commit as a detached head - you will not want to make any new commits
unless you first make a branch.)

When done with the audit, you can use `git checkout XXXXX` where XXXXX is your most recent
commit id to restore your work in progress.

The accessibility audit you will submit as a PDF.

You will also need to describe the work you do for parts of the assignment. This should be submitted
as a separate document from the accessibility audit.

## Accessibility Audit

Complete an accessibility audit of your work on assignment 1 and 2. Focus on your
index page and your hobbies/interests page. For each question that requires a
screenshot, provide one of each page.

[Accessibility Audit Template](https://docs.google.com/document/d/1Bp3t2i_kt24Ktbf1ckuKZL3QWaj2FiM-9WJHzBedxRk/copy)

When complete, safe as a PDF for submission.

Here is a [sample of what a completed audit should look like](https://docs.google.com/document/d/1wByxNwg7YGKotEEzcVhctzh5InFXj68pDaBVEpqGTwo/view).

You can receive full credit even if there are issues at this stage as long as you document
and explain them where required.

## Accessibility Improvements

Fix any issues identified in your audit. If you time traveled to do your audit, make sure to
checkout your most recent commit before doing more work.

Then, mark up your table to improve its accessibility. Add a `caption` to the table and
`scope` attributes to all `th` tags. (Unless you already have those.)

You can find good examples of using these tags here:
https://www.w3.org/WAI/tutorials/tables/

**Writeup Question #1:** Briefly list what fixes you made. Use a list instead of a paragraph.

## Accessibility Investigation

Pick a public webpage. Use the accessibility audit tools to evaluate how accessible it it.

* **Writeup Question #2a:** What is the URL of the page?
* **Writeup Question #2b:** What are 2-3 things that the page does well to support accessibility?  
    *Hint: You can use Lighthouse on it and look at "Passed Tests" in the accessibility section.*
* **Writeup Question #2c:** What is an accessibility issue you can identify in the site?

## Bootstrap

Modify your webpages to make use of Bootstrap. As part of doing this, you may want to
remove some of your old style rules.

You should make use of Bootstrap to style some of the following features:

* The nav menu on each page
* Your images
* The table on your coursework page
* Layout of one or more pages using Bootstrap's grid

You do **NOT** have to completely redo everything using Bootstrap.

**Writeup Question #3:** Briefly list what changes, what features of Bootstrap you incorporated
into your project.

## Scoring Overview

Accessibility audit - 20 pts
:  

Accessibility improvements - 5 pts
: Must include documentation in the writeup to score points.

Accessibility investigation - 10 pts
:  

Bootstrap use - 20 pts
: Must include documentation in the writeup to score points. For full credit, you should
incorporate Bootstrap into multiple areas of your pages.

    * Incorporate it into every page and multiple different elements: Max score 20
    * Incorporate it into every page at least once, multiple elements on one page: Max score 17
    * Incorporate it into multiple elements on one page: Max score 14
