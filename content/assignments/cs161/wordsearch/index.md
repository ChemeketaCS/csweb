---
title: Word Search
summary: Assignment covering multidimensional arrays

weight: 80
#last used 202030
---

{{% cs161General %}}

## Objective

Upon completion of this assignment the student will be able to use
multidimensional arrays.

## Submission

* `wordSearch.h`
* `wordSearch.cpp`
* `assign8.cpp`

*I should be able to compile and run your program with:*

    g++ -std=c++11 wordSearch.cpp assign8.cpp -o program.exe
    program.exe       (./program.exe on a mac)

## Background

A word search is a puzzle where you try to find words hidden in a large grid of characters
like the one below. The hidden words below are: **double, heap, int, main, program, stack, void**

{{% sample_run %}}
`H`  B  G  Q  W  R  G  X  X  I
`E`  Y  U  A  S  L  J  A  W  J
`A`  X  `D`  V  A  B  `I  N  T`  H
`P  R  O  G  R  A  M`  H  A  A
K  L  `U`  O  B  M  F  J  L  W
P  M  `B`  O  M  O  `M`  V  T  Q
J  Z  `L`  V  D  N  `A`  Z  H  D
G  Y  `E`  D  `V  O  I  D`  F  D
X  L  D  M  N  M  `N`  O  P  A
`S  T  A  C  K`  U  V  M  J  P
M  A  B  V  V  P  L  Y  T  Z
E  T  U  H  F  O  I  X  W  G
{{% /sample_run %}}

## Assignment

Your assignment is to write some functions that could be used to help build
a word search puzzle. You will not be actually building a "real" program
that a user would interact with to make a puzzle. Instead,
you are writing some functions and code to test those functions. The functions
you are writing would be useful building blocks for building a "real"
program that someone might use.

I have provided for you an almost-complete version of the header you will use,
[`wordSearch.h`](wordSearch.h). It is missing Doxygen comments—you should write comments for
each function in the header. The functions are explained below.

Then create `wordSearch.cpp` and define the functions declared in `wordSearch.h`.
Write code to test them in a main function in `assign8.cpp`. You should test each
unction at least once, though if it can provide different results (like return true/false),
you will need more than one test to prove that the function works in
different cases.

{{% alert warning %}}
Functions that do not have sufficient code to test them will NOT
receive full credit. I will also test your code with my own tests, but I want to see
what you have done 
{{% /alert %}}

Although a "real" program would start with an empty grid, as you are writing your
test code you probably will want to start off with some words already loaded so
you can easily test your print functions right off the bat. Feel free to hard
code a starting array like this:

    char puzzle[ROWS][COLS] = {
            {'H','_','_','_','_','_','_','_','_','_'},
            {'E','_','_','_','_','_','_','_','_','_'},
            {'A','_','D','_','_','_','I','N','T','_'},
            {'P','R','O','G','R','A','M','_','_','_'},
            {'_','_','U','_','_','_','_','_','_','_'},
            {'_','_','B','_','_','_','M','_','_','_'},
            {'_','_','L','_','_','_','A','_','_','_'},
            {'_','_','E','_','V','O','I','D','_','_'},
            {'_','_','_','_','_','_','N','_','_','_'},
            {'S','T','A','C','K','_','_','_','_','_'},
            {'_','_','_','_','_','_','_','_','_','_'},
            {'_','_','_','_','_','_','_','_','_','_'}
    };

## Functions

If you want, you can add additional functions you find useful,
but you cannot change these and must provide all of them for full credit.

{{% alert info %}}
A real program would also need/want some other functions (checking diagonal fit,
placing words vertically, etc...). We are just are focusing on an interesting
subset of likely functions.
{{% /alert %}}

### void printKey(const char grid[ROWS][COLS])

Print out the current puzzle grid in a format like that shown below:

{{% sample_run %}}
H  _  _  _  _  _  _  _  _  _
E  _  _  _  _  _  _  _  _  _
A  _  D  _  _  _  I  N  T  _
P  R  O  G  R  A  M  _  _  _
_  _  U  _  _  _  _  _  _  _
_  _  B  _  _  _  M  _  _  _
_  _  L  _  _  _  A  _  _  _
_  _  E  _  V  O  I  D  _  _
_  _  _  _  _  _  N  _  _  _
S  T  A  C  K  _  _  _  _  _
\_  _  _  _  _  _  _  _  _  _
\_  _  _  _  _  _  _  _  _  _
{{% /sample_run %}}

### void printPuzzle(const char grid[ROWS][COLS])

Print out the current puzzle grid, but where there are empty spaces, print random characters.
This should NOT actually modify the puzzle grid – the random characters are just
shown in the output.

{{% sample_run %}}
H  B  G  Q  W  R  G  X  X  I
E  Y  U  A  S  L  J  A  W  J
A  X  D  V  A  B  I  N  T  H
P  R  O  G  R  A  M  H  A  A
K  L  U  O  B  M  F  J  L  W
P  M  B  O  M  O  M  V  T  Q
J  Z  L  V  D  N  A  Z  H  D
G  Y  E  D  V  O  I  D  F  D
X  L  D  M  N  M  N  O  P  A
S  T  A  C  K  U  V  M  J  P
M  A  B  V  V  P  L  Y  T  Z
E  T  U  H  F  O  I  X  W  G
{{% /sample_run %}}

### int countSpaces(const char grid[ROWS][COLS])

Returns out how many blank spaces there are in the current puzzle. 

### bool checkHorizontalFit(const char grid[ROWS][COLUMNS], int startRow, int startCol, const string& word)

Returns true if the given word can fit horizontally in the indicated starting row and column.
To 'fit' a word needs to not extend past the last column AND all the letters in the word
need to not conflict with existing words in the grid. This should NOT actually change the grid.

Example: given this starting grid:
{{% sample_run %}}
H  _  _  _  _  _  _  _  _  _
E  _  _  _  _  _  _  _  _  _
A  _  D  _  _  _  I  N  T  _
P  R  O  G  R  A  M  _  _  _
_  _  U  _  _  _  _  _  _  _
_  _  B  _  `_  _  M  _  _  _`
_  _  L  _  _  _  A  _  _  _
_  _  E  _  V  O  I  D  _  _
_  _  _  _  `_  _  N  _  _  _`
S  T  A  C  K  _  _  _  _  _
\_  _  _  _  _  _  _  _  _  _
\_  _  _  _  _  _  _  _  _  _
{{% /sample_run %}}

Trying to place MEMORY at row 5, col 4 would fit.
As shown in the top highlighted area, it overlaps correctly with the M from MAIN.

Trying to place MEMORY at row 8, col 4 would NOT fit.
As shown in the bottom highlighted area, it conflicts with the N in MAIN.

Trying to place MEMORY at row 0, col 10 would NOT fit.
It would extend off the grid

### bool placeHorizontal(char grid[ROWS][COLS],  int startRow, int startCol, const string& word)

Checks if the word can be placed legally at the indicated row and column.
If so, updates the grid and returns true. Otherwise returns false.

Given the starting grid from **checkHorizontalFit**, placing MEMORY at row 5, col 4 would
result in the grid below and return true.

{{% sample_run %}}
H  _  _  _  _  _  _  _  _  _
E  _  _  _  _  _  _  _  _  _
A  _  D  _  _  _  I  N  T  _
P  R  O  G  R  A  M  _  _  _
_  _  U  _  _  _  _  _  _  _
_  _  B  _  `M  E  M  O  R  Y`
_  _  L  _  _  _  A  _  _  _
_  _  E  _  V  O  I  D  _  _
_  _  _  _  _  _  N  _  _  _
S  T  A  C  K  _  _  _  _  _
\_  _  _  _  _  _  _  _  _  _
\_  _  _  _  _  _  _  _  _  _
{{% /sample_run %}}

### void placeDiagonal(char grid[ROWS][COLS],  int startRow, int startCol, const string& word)

Places the given word going diagonally down to the right from the given starting row and column.
It does NOT have to check if the word will fit - you can assume it always will.

Given the  grid from **placeHorizontal**, placing WHILE at row 6, col 5 would result in the
grid shown below. The I from VOID and MAIN would be wiped out by the H from WHILE.

{{% sample_run %}}
H  _  _  _  _  _  _  _  _  _
E  _  _  _  _  _  _  _  _  _
A  _  D  _  _  _  I  N  T  _
P  R  O  G  R  A  M  _  _  _
_  _  U  _  _  _  _  _  _  _
_  _  B  _  M  E  M  O  R  Y
_  _  L  _  _  `W`  A  _  _  _
_  _  E  _  V  O  `H`  D  _  _
_  _  _  _  _  _  N  `I`  _  _
S  T  A  C  K  _  _  _  `L`  _
\_  _  _  _  _  _  _  _  _  `E`
\_  _  _  _  _  _  _  _  _  _
{{% /sample_run %}}

### void printLargestGaps(const char grid[ROWS][COLS])

Print out the size and location of the largest horizontal opening in each row.

If there is a tie, print the first of the largest gaps. For this grid:

{{% sample_run %}}
H  _  _  _  _  _  _  _  _  _
E  _  _  _  _  _  _  _  _  _
A  _  D  _  _  _  I  N  T  _
P  R  O  G  R  A  M  _  _  _
_  _  U  _  _  _  _  _  _  _
_  _  B  _  _  _  M  _  _  _
_  _  L  _  _  _  A  _  _  _
_  _  E  _  V  O  I  D  _  _
_  _  _  _  _  _  N  _  _  _
S  T  A  C  K  _  _  _  _  _
_  _  _  _  _  _  _  _  _  _
_  _  _  _  _  _  _  _  _  _
{{% /sample_run %}}

You should print (without the *italics notes*):

{{% sample_run %}}
Row      Gap Size     Start Col
0        9            1
1        9            1
2        3            3
3        3            7
4        7            3
5        3            3            *(This ties with the gap at 6)*
6        3            3            *(Another tie)*
7        2            0            *(Another tie)*
8        6            0
9        5            5
10        10          0
11        10          0
{{% /sample_run %}}
