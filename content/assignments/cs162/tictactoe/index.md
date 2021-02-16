---
# Page metadata.
title: Tic Tac Toe
summary:  Class definition and object use

weight: 10
---

{{% cs162General %}}

## Objective

Upon completion of this lab the student will be able to create classes to represent complex data types.

## Requirements

*Submit files: TicTacToe.h, TicTacToe.cpp*

For full credit your code should compile and run with this [main.cpp file](main.cpp). You
will not turn the file in, I will use my own copy to test your code.

{{% alert warning %}}
Since I will use my own version of main.cpp, do not modify it to match your code!
You can/should modify main.cpp to test out your code but make sure my version still works
with your program.
{{% /alert %}}

I should be able to build your code with:  
`g++ -std=c++11 TicTacToe.cpp main.cpp -o program.exe`

## Overview

Implement the class TicTacToe shown below. It is an object that represents the
state of a game of TicTacToe and has methods to make moves and check if someone
has won. Unless you chose to do the challenge, it does not have to **play** the
game, just keep track of a game.

{{< figure src="tictactoe.png" alt="TicTacToe Class" >}}

Write a .h and a .cpp with the appropriate parts of your code. The TicTacToe class
should not have any input code and the only output code should be in the printBoard method.

## Implementation Details

### Variables

**board** should be a 3x3 array of chars. It stores the current state of the board.

The **currentPlayer** keeps track of whose turn is next. This should always either
be 'X' or 'O'.

You should not need other class level variables. If you add any, make sure they do not duplicate
existing information or anything that can be determined from existing information.

### Functions

Below are descriptions of what the functions should do. You can add extra functions if you
like, but must implement the ones listed in the UML and they must behave as described below.

{{% alert warning %}}
Your .h file should have Doxygen comments for each function.
{{% /alert %}}

#### TicTacToe()

*Not listed in UML by convention as the default constructor is the only option*

Sets all **board** squares to empty value. Sets **currentPlayer** to 'X' (X always goes first).

{{% alert info %}}
There is no magic way to initialize all elements of an array with one statement inside the
constructor. You need to initialize the array where it is declared or use a loop to initialize
the elements in the constructor.
{{% /alert %}}

#### void print()

Print the current board state to the console, include row, col numbers, something like:

       1   2   3
    1  X   -   -
    2  -   O   -
    3  -   -   X

#### char getCurrentPlayer()

Returns the player who goes next ('X' or 'O')

#### bool isValidMove(int row, int col)

Should take in a row and column in human numbers (1-3) and check to see if the given location
on the board is empty. If so, return true. Otherwise, return false.

#### void makeMove(int row, int col)

Takes in a row and column in human numbers (1-3). Sets that location to hold the mark of the
current player. Then changes the current player to the other player (switches from 'X' to 
'O' or vice verse).

#### char getWinner()

Checks to see if a player has won (they have three in a row, three in a column, or three
on one of the two diagonals). If so, return the winner ('X' or 'O'). If no one has won,
returns '-'.

#### bool isDone()

Returns true if someone has won or there are no more moves to make.

## Advice

**Build one part at a time.** Start by commenting out everything in the [main.cpp file](main.cpp) I provide.
Then add this code:

{{% sample_run %}}
TicTacToe game;                      //Make a tictactoe object called game
game.print();                        //check out what game looks like
{{% /sample_run %}}

That code will test your constructor and print functions. You can work on and test just those functions.

Once they are working, you can add this to test the  makeMove and getCurrentPlayer functions:

{{% sample_run %}}
game.makeMove(2,2);                  //take middle square 
game.print();                        //check out what game looks like now
cout << game.getCurrentPlayer() << endl;  //see whose turn it is
{{% /sample_run %}}

Then, ask you work on each additional function, add some code to test it in main. Once you are done
testing everything, you can restore my original main.cpp code and play a game of TicTacToe!

{{% alert warning %}}
It is better to compile against all of the code in my main and have some functions that don't work right
it is to turn in a file that is missing functions.

Missing functions == failure to compile == capped at 50%.
  
To make sure you compile against the provided code you may want to start by **stubbing** out every
function before you worry about starting to implement them. A **stub** function is one that just
returns some default value without even trying to do its job correctly. The ides is to get something
that compiles to start with, and then worry about making it correct.

* A stub void function does nothing in its body
* A stub function that returns an int or bool just returns some default value like 0 or false
* A stub constructor just sets the member variables to some default values
{{% /alert %}}

## OPTIONAL CHALLENGE PROBLEM

*This is ungraded - it is simply a fun extension if you get done early and want to extend your program*

Add a function to have the computer make a move for the current player:

**void makeAutoMove();**

You can make it pick random (available) squares or actually work at making it smart. Just like
makeMove, it should both make the move and then switch the current player.
