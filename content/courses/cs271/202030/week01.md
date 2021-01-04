---
title: Week 1 - Introduction to Architecture
linktitle: Week 1

weight: 10
---

## Learning Objectives

Upon finishing this learning module, you should be able to:

* Describe computer organization, architecture, and systems as interrelated fields of study.
* Work fluently with binary/Boolean values.
* Read circuit diagrams of small combinational circuits.
* Explain how computers perform higher-level operations in terms of lower-level ones.

## Deadlines this week

* Wednesday 11:59pm - Background Survey

## Schedule

### Day 1

* Overview of architecture and its relationship with organization and systems
* Levels of abstraction

### Day 2

* Review of binary arithmetic and Boolean logic
* Start assignment

### Day 3

* Introduction to digital logic
* Combinational circuits
* Binary arithmetic circuits

### Day 4

* Circuit normalization and optimization

## What is architecture?

Computer architecture is about the boundary between hardware and software.
It takes different kinds of work to make good hardware and to make good
software, and people typically specialize on one side of the boundary or
another. However, it is impossible to design really good hardware without
knowing what the software needs to do, and it is impossible to design
really good software without knowing how the hardware will do it.

[Fred Brooks](https://en.wikipedia.org/wiki/Fred_Brooks) coined the name
architecture to describe this abstraction that connects hardware and software:

> Computer architecture, like other architecture, is the art of determining the needs of the user of a structure and then designing to meet those needs as effectively as possible within economic and technological constraints.

Below the level of the architecture lies the field of computer organization,
which has a focus on the hardware than can achieve the software's goals. Above
the level of the architectures lies the field of computer systems, which is
programming but at the lowest possible level, with the fewest abstractions.
This course will start at the bottom, at the level of individual logic gates,
and work upwards, coming to a conclusion just below the kinds of programming
people typically start with in e.g. CS161. The main thread that links together
this journey will be programming in assembly language.
