---
# Page metadata.
title: Assignment 4
summary: JS

#Force layout as if no other content in folder
layout: single
weight: 40
---

{{% cs290General %}}

## Goals

* Solve problems with Javascript

## Overview

You will be implementing some logic for a dice game.

Make a directory `dicegame` in your Assignments repository. To that directory add these two files (right click and Save as - if you click on them you
they will open in your browser):

* [index.html](files/index.html)
* [diceGame.js](files/diceGame.js)

You will not have to (and probably should not) modify the provided HTML file. All of your
work should be in the js file. In it are some provided functions you should make use of.
You do not have to understand how they work (some use tricks we have not talked about yet),
but should know what is there and make use of them.

At the top of the file are two functions you need to write - `roll()` and `score()`.

### roll()

This should roll the unlocked (white) dice. When a die is rolled it should be set to
a random number between 1 and 6.

Example: If the dice look like the picture below, the first, second, and fifth dice
should be rolled. 

{{< figure src="dice.png" >}}

### score()

This should display in the text area all of the valid ways to score the values currently shown on
the dice. (There is a provided function to set the text in the textarea. Pass it one long string with
`\n`'s to break up the lines.)

The scoring logic you are to implement is described here: https://www.dicegamedepot.com/yahtzee-rules/

Example: In the screenshot below, the dice can be scored as a Full House, Three of a Kind, Fours, Ones,
or as Chance. It can't be scored as Five of a kind, Four of a kind, Small/Large straight, Twos/Threes/Fives/Sixes
so those options are not displayed.

You should break up the logic for various ways to score into individual functions.

{{% alert info %}}
Algorithm advice: Implementing the various scoring algorithms is will generally be easier if you
start by getting the dice values into an array and then sorting that. Looking at `[1, 2, 4, 4, 6]`
is much easier than `[2, 4, 1, 6, 4]`.
{{% /alert %}}

The Test buttons can be used to easily test your algorithms. They will set the dice to something that
can score that category and then call your score() function.

{{< figure src="diceGame.png" >}}

## Scoring Overview

Roll - 10 pts
: 

Score - 40 pts
: For full credit, the logic **MUST** be broken up into reasonable functions to handle various
parts of the job. Points will be awarded for handling the different kinds of scoring methods:

    * Chance : 5 pts
    * Numbers (1s/2s/3s...) : 10 pts
    * Three/Four/Five of a kind : 10 pts
    * Full House : 5 pts
    * Straights : 10 pts
