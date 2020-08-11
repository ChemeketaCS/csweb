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
## Online Schedule

CS160 is offered in Spring and Fall online. It may sometimes also available in Winter or summer.

CS161/162/260 are offered online in a sequence that runs Fall/Winter/Spring.

## Ordering

Computer Science and Math courses must be taken in the order shown below:

```mermaid
graph TD

  subgraph CS
  CS160([CS160<div class='terms'>All</div>])-->CS161([CS161<div class='terms'>F W</div>]);
  CS161-->CS162([CS162<div class='terms'>W Sp]);
  CS162-->CS260([CS260<div class='terms'>F Sp</div>]);
  CS161-->CS271([CS271<div class='terms'>W Sp</div>]);
  CS162-->CS290([CS290<div class='terms'>Sp</div>]);
  end
  MTH111([MTH111<div class='terms'>All</div>])-->MTH112([MTH112<div class='terms'>All</div>]);
  subgraph Math
  MTH111-. co or pre .->CS160
  MTH111-->MTH231([MTH231<div class='terms'>F W</div>]);
  MTH231-->MTH232([MTH231<div class='terms'>W Sp</div>]);
  MTH112-->MTH251([MTH251<div class='terms'>All</div>]);
  MTH251-->MTH252([MTH252<div class='terms'>All</div>]);
  end
```
