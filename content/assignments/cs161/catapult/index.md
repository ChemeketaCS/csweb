---
title: Catapult Calculator
summary: Assignment covering standard math functions. 

math: true
---

{{% cs161General %}}

## Objective

Upon completion of this assignment the student will be able to use
standard math functions.

## Assignment Instructions

*Submit file: assign3.cpp*

Market research has indicated that the app store currently lacks a
catapult calculator. Filling this void could be the get rich opportunity
of a lifetime! Write a program that calculates whether a rock flung from
a catapult will make it over a wall and hit a target. Your program
should work for the scenario below:

![A catapult stands an unknown distance in front of a 75-foot-high wall, and 150 feet beyond the wall sits a 50-foot-wide castle.](files/catapult.pngg)

There is a 75 foot tall wall and the target is located 150 feet past it.
The target is 50 feet wide—we will ignore the height of the target and
assume that anything that lands within the area of its base would hit
the target. The catapault always launches rocks at a 45 degree angle,
and to make life easy we will assume that they are launched from a height of
0 feet.

Your program should read in a distance the catapault is from the wall
(in feet) and an initial velocity for the rock it throws and report
whether the shot: hits the wall, is too short, is too long, or hits the
target. If the shot does not hit the wall, report how far it traveled in
total.

This summary of [projectile motion](https://courses.lumenlearning.com/boundless-physics/chapter/projectile-motion/) has the equations you will need.
In particular, you will need the Parabolic Trajectory equation that
gives a height for the rock after it travels $x$ feet and the Range
equation.

Your program is reading in $u$ (initial velocity). Use the value
32.17405 for $g$ and 3.14159265359 for $π$.

{{% alert info %}}
Remember that $cos^2\ θ$ means $(cos\ θ)^2$.
{{% /alert %}}

### Sample run 1: (user input in red)

{{% sample_run %}}
Enter distance from wall: `200`
Enter velocity: `100`
Hits the wall!
{{% /sample_run %}}

### Sample run 2: (user input in red)

{{% sample_run %}}
Enter distance from wall: `200`
Enter velocity: `125`
Too far!
Rock traveled 485.64 feet.
{{% /sample_run %}}

### Sample run 3: (user input in red)

{{% sample_run %}}
Enter distance from wall: `200`
Enter velocity: `105`
Too short!
Rock traveled 342.667 feet.
{{% /sample_run %}}

### Sample run 4: (user input in red)

{{% sample_run %}}
Enter distance from wall: `200`
Enter velocity: `115`
Hit!
Rock traveled 376.079 feet.
{{% /sample_run %}}

### Sample run 5: (user input in red)

{{% sample_run %}}
Enter distance from wall: `300`
Enter velocity: `125`
Hit!
Rock traveled 485.64 feet.
{{% /sample_run %}}
