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
	cout << "Winner: " << theGame.getWinner() << endl;
	cout << "Done: " << theGame.isDone() << endl;
	char c = theGame.getCurrentPlayer();
	theGame.makeMove(1, 1);
	theGame.makeMove(2, 1);
	theGame.makeMove(1, 2);
	theGame.makeMove(2, 2);
	theGame.makeMove(1, 3);
    theGame.print();
	cout << "Winner: " << theGame.getWinner() << endl;
	cout << "Done: " << theGame.isDone() << endl;
	cout << "------------------" << endl;
	
    TicTacToe theGame2;
	theGame.makeMove(1, 1);
	theGame.makeMove(1, 3);
	theGame.makeMove(1, 2);
	theGame.makeMove(2, 2);
	theGame.makeMove(2, 1);
	theGame.makeMove(3, 1);
    theGame.print();
	cout << "Winner: " << theGame.getWinner() << endl;
	cout << "Done: " << theGame.isDone() << endl;
}
