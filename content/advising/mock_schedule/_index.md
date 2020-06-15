---
title: CS Mock Schedule Builder
linktitle: Mock Schedule Builder
type: docs
#date: "2019-05-05T00:00:00+01:00"
draft: false
menu:
  advising:
    weight: 90

# Prev/next pager order (if `docs_section_pager` enabled in `params.toml`)
weight: 2
---


<div class="d-none d-print-block">
  <h2>Mock Transfer Schedule for <span id="schoolname">Unknown School</span></h2>
</div>
<div class="d-print-none">
  <p>
  Enter information about your school, math placement and whether you are starting CS in your first term at Chemeketa or later. If you do not place into math 111 or above, you will have to take additional math courses.
  </p>

  <form>
  <div class="form-row">
  <div class="form-group col-md-6 col-xl-3">
  <label for="school">Transfer School</label><br />
  <select id="school" class="form-control">
    <option value="UNKNOWN">Unknown School</option>
    <option value="OREGON-TECH">Oregon Tech</option>
    <option value="OREGON">Oregon</option>
    <option value="OSU-APPLIED">OSU-Applied</option>
    <option value="OSU-SYSTEMS">OSU-Systems</option>
    <option>PSU</option>
    <option>WOU</option>
  </select>
  </div>
  <div class="form-group col-md-3">
  <label for="math">Math Placement</label><br />
  <select id="math" class="form-control">
    <option>111</option>
    <option>112</option>
    <option>251</option>
    <option>252</option>
    <option>Past 252</option>
  </select>
  </div>
  <div class="form-group col-md-3">
  <label for="CS">CS Start Term</label><br />
  <select id="cs" class="form-control">
    <option value="Early">Fall</option>
    <option value="Late">Spring</option>
  </select>
  </div>
  </div>
  </form>
</div>

<table id="schedTable">
</table>


{{% alert warning %}}
Warning - this tool is intended for exploration. The schedules it produces are **NOT** intended to be used as is - use it as a starting point for planning your own schedule.
{{% /alert %}}


<div id="schoolNotes">
<h4>School Specific Notes</h4>
{{% alert info %}}
<ul></ul>
{{% /alert %}}
</div>

<h4>General Notes</h4>
{{% alert info %}}
* This assumes you finish an ASOT-CS or AAOT degree at Chemeketa. If you do not finish the complete degree, you need to make sure to meet the general ed requirements of the school you transfer to.
* Comm 111: Although there are other options to satisfy the ASOT-CS/AAOT, many schools require Comm 111 as part of their major requirements.
* To earn the ASOT-CS or AAOT you must earn 90 credits of qualifying classes. This schedule does not necessarily include 90 credits.
* Make sure one arts/social sciences course meets the Cultural Literacy requirement.
{{% /alert %}}


<script type="text/javascript" src="mock_schedule.js" defer></script>
<link rel="stylesheet" href="mock_schedule.css">
