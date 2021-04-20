---
title: Course Ordering
linktitle: Courses
type: docs
#date: "2019-05-05T00:00:00+01:00"
draft: false

diagram: true

menu:
  advising:
    name: 'Course Ordering'
    weight: 90


js: ["course_ordering.js"]
css: ["course_ordering.css"]

# Prev/next pager order (if `docs_section_pager` enabled in `params.toml`)
weight: 90
---

## Ordering

Computer Science and Math courses must be taken in the order shown below. The terms listed for
each class are when they are normally offered - offerings in any particular term may be different
based on enrollment trends.

CS 271 and 290 are not currently offered online. Nor are MTH 231 and 232. Other math courses are
offered online during most, but not all, terms.

<div class="d-none d-lg-block">
{{< diagram >}}
graph TD;
  subgraph CS;
  CS160([CS160<div class=&quot;terms&quot;>All<br>Online F W Sp</div>])-->CS161([CS161<div class=&quot;terms&quot;>F W Sp<br>Online F W</div>]);
  CS161-->CS162([CS162<div class=&quot;terms&quot;>F W Sp<br>Online W Sp</div>]);
  CS162-->CS260([CS260<div class=&quot;terms&quot;>F Sp<br>Online Sp</div>]);
  CS161-->CS271([CS271<div class=&quot;terms&quot;>W Sp</div>]);
  CS162-->CS290([CS290<div class=&quot;terms&quot;>Sp</div>]);
  end;
  MTH111([MTH111<div class=&quot;terms&quot;>All</div>])-->MTH112([MTH112<div class=&quot;terms&quot;>All</div>]);
  subgraph Math;
  MTH111-. co or pre .->CS160;
  MTH111-->MTH231([MTH231<div class=&quot;terms&quot;>F W</div>]);
  MTH231-->MTH232([MTH232<div class=&quot;terms&quot;>Sp</div>]);
  MTH112-->MTH251([MTH251<div class=&quot;terms&quot;>All</div>]);
  MTH251-->MTH252([MTH252<div class=&quot;terms&quot;>All</div>]);
  end;
{{< /diagram >}}
</div>
