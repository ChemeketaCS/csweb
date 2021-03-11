
#include <iostream>

using namespace std;

#include "wordSearch.h"


int main()
{
	char puzzle[ROWS][COLS] = {
	 {'_','_','_','_','_','_','_','_','_','_'},
	 {'_','_','_','_','_','_','_','_','_','_'},
	 {'_','_','_','_','_','_','_','_','_','_'},
	 {'_','_','_','_','_','_','_','_','_','_'},
	 {'_','_','_','_','_','_','_','_','_','_'},
	 {'_','_','_','_','_','_','_','_','_','_'},
	 {'_','_','_','_','_','_','_','_','_','_'},
	 {'_','_','_','_','_','_','_','_','_','_'},
	 {'_','_','_','_','_','_','_','_','_','_'},
	 {'_','_','_','_','_','_','_','_','_','_'},
	 {'_','_','_','_','_','_','_','_','_','_'},
	 {'_','_','_','_','_','_','_','_','_','_'}
	};

	placeDiagonal(puzzle, 1, 1, "ABCD");
    printKey(puzzle);
}