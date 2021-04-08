/**
  */
#include <iostream>
#include <iomanip>
#include <string>

#include "TicTacToe.h"

using namespace std;

int main()
{
    //create a ticTacToe object
    TicTacToe theGame;
	char c = theGame.getCurrentPlayer();
	cout << c << "'s turn" << endl;
	theGame.makeMove(1, 1);
    theGame.print();
	cout << "Check Taken square isValid - want 0: " << theGame.isValidMove(1, 1) << endl;
	cout << "Check Empty square isValid - want 1: " << theGame.isValidMove(2, 2) << endl;
}
