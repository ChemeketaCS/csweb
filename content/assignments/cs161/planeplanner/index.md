---
title: Plane Planner
summary: Assignment covering multidimensional arrays

weight: 80
---

{{% cs161General %}}

## Objective

Upon completion of this assignment the student will be able to use
multidimensional arrays.

## Files to submit

* `airplane.h`
* `airplane.cpp`
* `assign8.cpp`

## Plane Planner

An airline needs to keep track of where passengers are sitting on a
plane with 12 rows and 6 seats in each row. The first and last seat (A
and F) in a row are window seats. The middle two (C and D) are aisle seats.

A printout of the seating chart should look something like the following,
where X indicates an occupied seat and _ indicates an open seat.

{{% sample_run %}}
Seat   A B C D E F
Row 1  _ _ X _ X X
Row 2  _ X _ X _ X
Row 3  _ _ X X _ X
Row 4  X _ X _ X X
Row 5  _ X _ X _ _
Row 6  _ X _ _ _ X
Row 7  X _ _ _ _ X
Row 8  _ X _ X X _
Row 9  X _ X X _ X
Row 10 _ X _ X X X
Row 11 _ _ X _ X _
Row 12 _ _ X X _ X
{{% /sample_run %}}

{{% alert info %}}
Although we typically number the rows like 1–12 for humans,
remember that the indices will start from 0 in your code.
{{% /alert %}}

Your assignment is to write some functions that could be used to write
a program for tracking and assigning seats.

I have provided for you an almost-complete version of the header you will use,
[`airplane.h`](airplane.h). It is missing Doxygen comments—you should write comments for
each function in the header. They are explained below.

Then create `airplane.cpp` and define the functions declared in `airplane.h`.
Write code to test them in `assign8.cpp`. You should test each function at
least once, though if it can provide different results (like return true/false),
you will need more than one test to prove that the function works in
different cases.

{{% alert warning %}}
Functions that do not have sufficient code to test them will NOT
receive full credit.
{{% /alert %}}

## Functions

If you want, you can add additional functions you find useful,
but you cannot change these and must provide all of them for full credit.

* `void emptyChart(char grid[ROWS][COLS])`

  Fill the seating chart with all _ characters so that it is empty.

* `void loadTestChart(char grid[ROWS][COLS], string filename)`

  Open the file `filename` and read it to fill the seating chart.

  (I have provided a [sample data file](Seats.txt). Don't include
  it in your submission; I will use my own copy. Also, make sure
  that `loadTestChart` opens the provided `filename`, and does not
  depend on it being named the same as my sample.)

* `void printSeatingChart(const char grid[ROWS][COLS])`

  Print out a nicely formatted seating chart like the sample. It should
  include row and column headers.

* `int getEmptyCount(const char grid[ROWS][COLS])`

  Return the total number of open seats.

  (There are 37 in the provided chart.)

* `int getWindowCount(const char grid[ROWS][COLS])`

  Return the total number of open window seats. Seats A and F are the
  window seats in each row.
 
  (There are 12 in the provided chart.)

* `bool fillSeat(char grid[ROWS][COLS], int row, char seat)`

  Take in a human row number (1-12) and a char indicating which seat
  (like 'B'). If that seat is taken, return false. Otherwise, mark it
  filled and return true.

* `string findAdjacentSeats(const char grid[ROWS][COLS], int numSeats)`

  Find the first spot on the plane where numSeats number of passengers
  can all sit next to each other in the same row.  Return a string with
  all the seats in human format like: "2B 2C 2D".

  (For the provided chart, the first spot where two passengers can sit
  together is 1A 1B. The first spot where three can sit together is 6C 6D
  6E. The first spot where four can sit together is 7B 7C 7D 7E.)

  Hint: the easiest way to convert a number to a string is with the `to_string`
  function. Also, the `findAdjacentSeats` function is complicated; don't try to
  write it all at once. Think about smaller, simpler versions you can start
  with and build up to it.
