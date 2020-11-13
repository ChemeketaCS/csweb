//----------------------------------------------------------
// CS260 Assignment 3 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------

#include "DataStream.h"
#include <iostream>
#include <ctime>
#include <sstream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    //Set up source of fake random packets. Seed with 0.
    DataStream d(0);

    //vector being used as a sorted array
    // the highest priority item will always be at the back of the vector
    vector<Packet> queue;

    //Read in a script in the form: "g 16000 r 16000 q";
    string jobScript;
    getline(cin, jobScript);
	
    //Use stringstream to parse the script
    stringstream scriptedInput(jobScript);

    clock_t start = clock();

    char jobType;
    scriptedInput >> jobType;
    while(jobType != 'q') {
        if(jobType == 'p') {
            //Print the highest priority packet. Do not remove it.
            Packet p = queue[queue.size() - 1];
            cout << p.priority << " " << p.data << endl;
        }
        else {
            //Getting or removing packets
            int copies;
            scriptedInput >> copies;
            if(jobType == 'g') {
                for(int i = 0; i < copies; i++) {
                    //Get a packet
                    Packet p = d.getPacket();

                    //Find the first packet that has a priority that is greater than or equal to current one's
                    // std::lower_bound uses binary search to identify that location
                    auto insertLocation = std::lower_bound(queue.begin(), queue.end(), p);

                    //Insert packet at that location
                    queue.insert(insertLocation, p);
                }
            }
            else if(jobType == 'r') {
                for(int i = 0; i < copies; i++) {
                    //Remove highest priority packet
                    queue.pop_back();
                }
            }
        }
        scriptedInput >> jobType;
    }

    clock_t end = clock();
    cout << "Run performed in " << static_cast<double>(end - start) / CLOCKS_PER_SEC
         << " seconds" << endl;
}
