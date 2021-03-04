

#include <iostream>

using namespace std;

#include "wordSearch.h"


int main()
{
    char puzzle[ROWS][COLS] = {
        {'H','_','_','_','_','_','_','_','_','_'},
        {'E','_','_','_','_','_','_','_','_','_'},
        {'A','_','_','_','_','_','I','N','T','_'},
        {'P','R','O','G','R','A','M','_','_','_'},
        {'_','_','B','_','_','_','_','_','_','_'},
        {'_','_','B','_','_','_','_','_','_','_'},
        {'_','_','B','_','_','_','A','_','_','_'},
        {'_','_','E','_','V','O','I','D','_','_'},
        {'_','_','_','_','_','_','N','_','_','_'},
        {'S','T','A','C','K','_','_','_','_','_'},
        {'_','_','_','_','_','_','_','_','_','_'},
        {'_','_','_','_','_','_','_','_','_','_'}
    };

    placeHorizontal(puzzle, 0, 0, "HAT");
    
    printKey(puzzle);

    if(!checkHorizontalFit(puzzle, 2, 2, "HAT")) {
        cout << "ERROR - Claims HAT does not fit at 2 2" << endl;
    }
    if(!checkHorizontalFit(puzzle, 5, 1, "ABC")) {
        cout << "ERROR - Claims ABC does not fit at 5 1" << endl;
    }
    if(checkHorizontalFit(puzzle, 5, 1, "HAT")) {
        cout << "ERROR - Claims you can place HAT at 5 1" << endl;
    }
    if(checkHorizontalFit(puzzle, 4, 7, "ABCDEF")) {
        cout << "ERROR - Says you can fit ABCDEF at 4, 7 but that goes out of bounds" << endl;
    }

}
