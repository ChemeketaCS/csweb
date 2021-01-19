#include <iostream>

#include "Location.h"

using namespace std;

const int NUM_LOCATIONS = 8;

/**
 * @brief Sets up the map shown in the assignment 3 document.
 *
 * Should fill the array with the appropriate places and
 * set all neighbor relationships.
 * Location 0 should be the start: a deep, dark cave
 */
void buildMap(Location allLocations[]) {
    // TODO
}

int main() {
    // Make an array to hold all the locations in the map
    // Will have placeholder data created by default constructor
    Location allLocations[NUM_LOCATIONS];

    // Set up the map
    buildMap(allLocations);

    // currentLocation will keep track of where the player is
    // Initially points to room 0
    Location* currentLocation = &allLocations[0];

    // Until the currentLocation is an exit:
    //   print out a description of the current Location, mark it as visited,
    //   get input of N S E or W and update currrentLocation based on input
    // TODO

    cout << "You emerge safely from the maze!" << endl;
    return 0;
}
