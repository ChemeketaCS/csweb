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


# Prev/next pager order (if `docs_section_pager` enabled in `params.toml`)
weight: 90
---

## Ordering

Computer Science and Math courses must be taken in the order shown below. A **?**
indicates the course may or may not be offered in that term.

{{< diagram >}}
graph TD;
  subgraph CS;
  CS160([CS160<div class=&quot;terms&quot;>All</div>])-->CS161([CS161<div class=&quot;terms&quot;>F W Sp</div>]);
  CS161-->CS162([CS162<div class=&quot;terms&quot;>F W Sp</div>]);
  CS162-->CS260([CS260<div class=&quot;terms&quot;>F Sp</div>]);
  CS161-->CS271([CS271<div class=&quot;terms&quot;>W Sp?</div>]);
  CS162-->CS290([CS290<div class=&quot;terms&quot;>Sp</div>]);
  end;
  MTH111([MTH111<div class=&quot;terms&quot;>All</div>])-->MTH112([MTH112<div class=&quot;terms&quot;>All</div>]);
  subgraph Math;
  MTH111-. co or pre .->CS160;
  MTH111-->MTH231([MTH231<div class=&quot;terms&quot;>F W</div>]);
  MTH231-->MTH232([MTH231<div class=&quot;terms&quot;>W Sp</div>]);
  MTH112-->MTH251([MTH251<div class=&quot;terms&quot;>All</div>]);
  MTH251-->MTH252([MTH252<div class=&quot;terms&quot;>All</div>]);
  end;
{{< /diagram >}}

## Online Offerings

Online, asynchronous offerings of CS classes are normally offered on the following schedule:

{{< diagram >}}
graph LR;  
  CS160([CS160<div class=&quot;terms&quot;>F W Sp</div>])-->CS161([CS161<div class=&quot;terms&quot;>F W</div>]);
  CS161-->CS162([CS162<div class=&quot;terms&quot;>W Sp</div>]);
  CS162-->CS260([CS260<div class=&quot;terms&quot;>Sp</div>]);
{{< /diagram >}}
