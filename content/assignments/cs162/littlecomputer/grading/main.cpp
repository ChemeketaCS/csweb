/**
  * @file main.cpp
  * @author Chemeketa CS
  * @brief Main function for the LittleComputer project
  */
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "LittlePersonComputer.h"

int main() { 
    //Program that adds 10 to itself and prints answer
    int program1[] = { 504, 104, 902, 0 , 10 };
    int program1Length = 5;

    //Build a computer with no program
    cout << "Empty computer:" << endl;
    LittlePersonComputer computer1;
    computer1.printState();

    //Add a program
    cout << "Program Loaded:" << endl;
    computer1.loadProgram(program1, program1Length);
    computer1.printState();
	
    //Check getMemoryAt
    if(computer1.getMemoryAt(0) != 504)
        cout << "ERROR - memory 0 should be 504" << endl;
    if(computer1.getMemoryAt(4) != 10)
        cout << "ERROR - memory 4 should be 10" << endl;

    //Step twice and print out
    cout << "Run two steps:" << endl;
    computer1.step();
    computer1.step();
    computer1.printState();
    if (computer1.getProgramCounter() != 2)
        cout << "ERROR - Program Counter should be 2" << endl;
    if (computer1.getAccumulator() != 20)
        cout << "ERROR - Accumulator should be 20" << endl;
    if (computer1.getCurrentInstruction() != 902)
        cout << "ERROR - Wrong Instruction - should be 902" << endl;
	
    cout << "Run step to output result:" << endl;
    computer1.step();
	cout << "----------------------------------------------------";
	

    //Build a computer with the same simple program, let it run until end
    cout << "New computer:" << endl;
    LittlePersonComputer computer2(program1, program1Length);
    computer2.printState();
    cout << "Running full program:" << endl;
    int timeout = 0;
    while (!computer2.isHalted()) {
        computer2.step();
        //computer2.printState();  //You may want to turn this on to view state while it runs
        timeout++;
        if(timeout == 20) {
            cout << "Error, program ran 20 steps... killing it." << endl;
            break;
        }
    }
}

