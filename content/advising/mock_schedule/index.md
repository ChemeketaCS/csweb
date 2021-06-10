---
title: CS Mock Schedule Builder
linktitle: Mock Schedule Builder
type: docs
#date: "2019-05-05T00:00:00+01:00"
draft: false
menu:
  advising:
    weight: 80

# Prev/next pager order (if `docs_section_pager` enabled in `params.toml`)
weight: 80

js: ["mock_schedule.js"]
css: ["mock_schedule.css"]
---

<div class="d-none d-print-block">
  <h2>Mock Transfer Schedule for <span id="schoolname">Unknown School</span></h2>
</div>
<div class="d-print-none">
  <p>
  Enter information about your school, math placement and whether you are starting CS in your first
  term at Chemeketa or later. If you do not place into math 111 or above, you will have to take
  additional math courses.
  </p>

  <form>
  <div class="form-row">
  <div class="form-group col-md-6">
  <label for="school">Transfer School</label><br />
  <select id="school" class="form-control">
    <option value="UNKNOWN">Unknown School</option>
    <option value="EOU">Eastern Oregon University</option>
    <option value="OIT">Oregon Tech</option>
    <option value="OSU-APPLIED">OSU-Applied</option>
    <option value="OSU-SYSTEMS">OSU-Systems</option>
    <option value="PSU">Portland State University</option>
    <option value="OREGON">University of Oregon</option>
    <option value="WOU">Western Oregon University</option>
  </select>
  </div>
  <div class="form-group col-md-3">
  <label for="math">Math Placement</label><br />
  <select id="math" class="form-control">
    <option value="111">111</option>
    <option value="112">112</option>
    <option value="251">251</option>
    <option value="252">252</option>
    <option value="XXX">Past 252</option>
  </select>
  </div>
  <div class="form-group col-md-3">
  <label for="CS">CS Start Term</label><br />
  <select id="cs" class="form-control">
    <option value="0">Fall</option>
    <option value="1">Winter</option>
    <option value="2">Spring</option>
  </select>
  </div>
  </div>
  </form>
</div>

<table id="schedTable">
</table>

{{% alert warning %}}
Warning - this tool is intended for exploration. The schedule it produces is **NOT** intended to
be used as is - use  as a starting point for planning your own schedule.

These plans are for students who will be transferring in Fall 2022 or later. If you are transferring
before then, you will want to focus on the [ASOT-CS degree](https://www.chemeketa.edu/media/content-assets/documents/pdf/degrees/ASOT---CS-Degree-Requirements-and-Advising-Guide.pdf)
{{% /alert %}}

<div id="schoolNotes">
<h4>School Specific Notes</h4>
{{% alert info %}}
<ul></ul>
{{% /alert %}}
</div>

<h4>General Notes</h4>
{{% alert info %}}

* Do not start taking science courses until you decide on a transfer target.
* Do not start take your second writing course (WR122 or 227) until you decide
on a transfer target.
* All Arts and Letters and Social Science courses should be ones on the.
[AAOT](https://www.chemeketa.edu/programs-classes/degrees/) course list
* Electives: To complete the CS Major Transfer Map (or the ASOT-CS) you must earn 90 credits
of qualifying classes. The schedule shown above does not necessarily include 90 credits.
Take elective classes to fulfill needed credits.
* All Oregon Universities have a foreign language admission requirement. Most students have
satisfied this via two years of the same language in high school. If you have not, you either
need to take two terms of a foreign language at Chemeketa or prove proficiency in a second language.
{{% /alert %}}
