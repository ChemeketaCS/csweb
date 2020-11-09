---
title: Climb Statistics
summary: Assignment covering arrays
---

{{% cs161General %}}

## Objective

Upon completion of this assignment the student will be able to write
programs that use arrays.

## Files to submit

* `hikeFunctions.h`
* `hikeFunctions.cpp`
* `assign7.cpp`

## Climb Statistics

Elevation information about a hike is recorded like the table shown
below indicating that the hike starts at 1200 feet, after 1 mile is at
3000 feet, etc... This hike is 8 miles and consists of 9 data points:

| Mile | Elevation |
| --- | --- |
| 0 | 1200 |
| 1 | 3000 |
| 2 | 3450 |
| 3 | 2800 |
| 4 | 2900 |
| 5 | 1550 |
| 6 | 1750 |
| 7 | 1110 |
| 8 | 1200 |

Write a program that declares in main:

```
const int HIKE_LENGTH = 9;
```

This will represent the number of data points in the hike (not the
number of miles). Then declares an array of ints of size `HIKE_LENGTH`.
(I should be able to change the number of elevation points your code is
working with by changing that one const. You should not have the \"magic
number\" 9 in your code - use `HIKE_LENGTH`.)

You should then read in `HIKE_LENGTH` elevations into the array (assume
we always input the data in order: mile 0, then 1, then 2...). After
doing so, print:

* The highest point in the first half of the hike, the highest point
  in the second half of the hike and the highest point overall in the
  hike. (If there are an odd number of elevation readings, count the
  middle point as being in the first half).
* The average elevation of the hike to two decimal places.
* The number of peaks, where a peak is a mile marker that is higher
  than the markers before and after it. (The first and last markers will
  never be considered peaks).
* The number of difficult segments of the hike - ones with an
  elevation change over 1000 ft (going up or down)
* The total vertical feet covered in the hike. (Add up the change
  between each marker and the next. Note that both up and down count
  as elevation change here: going up 800 ft and then down 300 ft would
  be a total change of 1100 ft.)

### Sample run

{{% sample_run %}}
Enter elevations: `1200 3000 3450 2800 2900 1550 1750 1110 1200`
Highest points:
   First half: 3450
   Second half: 1750
   Overall: 3450
Average elevation: 2106.67
Peaks: 3
Difficult segments: 2
Elevation change: 5280
{{% /sample_run %}}

### Functions

You should write and use the following functions to help do your work.
You can add others as you see fit. Declare your functions in `hikeFunctions.h`,
define them in `hikeFunctions.cpp`, and use them in your `main` function in
`assign7.cpp`.

* `void getData(int heights[], int size)`

  Read elevation data into the array from the console.

* `int getHighestPointBetween(const int heights[], int startMile, int endMile)`

  Return the highest elevation between the two mile markers (inclusive).
  For the data shown above, asking for highest between 3 and 5 should
  result in 2900. Asking for the highest between 0 and 8 should
  result in 3450.

* `double getAverage (const int heights[], int size)`

  Return the average elevation.

* `int getNumPeaks(const int heights[], int size)`

  Return the number of peaks in the hike

* `int getNumSteepSegments(const int heights[], int size)`

  Return the number of segments that end with a change of more than
  1000 feet. For the numbers shown above, there would be 2 steep
  segments (from 0-1 and 4-5).

* `int getTotalChange(const int heights[], int startMile, int endMile)`

  Return the total elevation change over the range from startMile to
  endMile (inclusive). Note that any change (uphill or downhill) is
  positive change.

  For example, using the sample data from earlier in the document,
  the total change starting from mile 1 and ending at mile 3 should
  be 1100,
  because from 1 to 2 we go from 3000 up to 3450 (a change of 450),
  and from 2 to 3 we go from 3450 to 2800 (a change of 650).

{{% alert warning %}}
A solution without these functions will take a significant penalty even
if it produces the correct output.
{{% /alert %}}

{{% alert info %}}
Hint... while testing you might want to avoid typing in all that input
and just hard code some example numbers into `main`:

```
int elevations[] = {1200, 3000, 3450, 2800, 2900, 1550, 1750, 1110, 1200};
```

Once you are done with the other functions or about to turn in the
assignment, remove the hard coded array and call `getData` instead.
{{% /alert %}}
