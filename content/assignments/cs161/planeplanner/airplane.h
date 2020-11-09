/* USE THIS CODE AS IS - DO NOT MODIFY IT
   YOU CAN ADD EXTRA FUNCTIONS, BUT DO NOT REMOVE OR MODIFY THESE */

#ifndef PLANEFUNCTIONS_H
#define PLANEFUNCTIONS_H
#include <string>

/* Using namespace std in a .h can cause problems in a larger project,
   but it will be fine here. */
using namespace std;

/* Define these constants in the .h so they are available everywhere
   the .h is included. */
const int ROWS = 12;
const int COLS = 6;

void emptyChart(char grid[ROWS][COLS]);
void loadTestChart(char grid[ROWS][COLS], string filename);
void printSeatingChart(const char grid[ROWS][COLS]);
int getEmptyCount(const char grid[ROWS][COLS]);
int getWindowCount(const char grid[ROWS][COLS]);
bool fillSeat(char grid[ROWS][COLS], int row, char seat);
string findAdjacentSeats(const char grid[ROWS][COLS], int
numSeats);

#endif // PLANEFUNCTIONS_H
