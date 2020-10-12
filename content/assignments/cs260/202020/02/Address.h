//----------------------------------------------------------
// CS260 Assignment 2 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------
#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
#include <fstream>


struct Address {
    std::string first;
    std::string last;
    std::string streetAddr;
    std::string city;
    std::string county;
    std::string state;
    int zipCode;

    Address();

    //Accepts comma seperated line of text with fields in order of member variables
    explicit Address(const std::string& dataLine);
};

//Two Address are == if all members are identical
bool operator==(const Address& a1, const Address& a2);

//Allow for easy printing of addresses
std::ostream& operator<<(std::ostream& targetStream, const Address& a2);


//Produces address objects from an input file one at a time
class AddressFactory {
public:
    //Create a facroty that will read from named file
    AddressFactory(const std::string& inputFileName);

    //Ask for the next address
    Address getNext();
private:
    std::ifstream inputFile;
};


#endif // ADDRESS_H
