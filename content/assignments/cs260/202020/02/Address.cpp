//----------------------------------------------------------
// CS260 Assignment 2 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------
#include "Address.h"

#include <sstream>
#include <cassert>

using namespace std;


Address::Address() {
    //All strings will be default initialized to ""
    zipCode = -1;
}


Address::Address(const std::string& dataLine) {
    //throw into stringstream and read from that
    stringstream dataStream(dataLine);

    getline(dataStream, this->last, ',');
    getline(dataStream, this->first, ',');
    getline(dataStream, this->streetAddr, ',');
    getline(dataStream, this->city, ',');
    getline(dataStream, this->county, ',');
    getline(dataStream, this->state, ',');
    string zipString;
    getline(dataStream, zipString);
    this->zipCode = stoi(zipString);

    //blow up if input failure
    assert( !dataStream.fail() );
}


std::ostream& operator<<(std::ostream& targetStream, const Address& a2) {
    targetStream << a2.first << " " << a2.last << endl;
    targetStream << "\t" << a2.city << ", " << a2.state << " " << a2.zipCode << endl;
    return targetStream;
}


bool operator==(const Address& a1, const Address& a2){
    if( a1.last == a2.last &&
        a1.first  == a2.first &&
        a1.streetAddr == a2.streetAddr &&
        a1.city == a2.city &&
        a1.county == a2.county &&
        a1.state == a2.state &&
        a1.zipCode == a2.zipCode )
    {
        return true;
    }
    else
        return false;
}


AddressFactory::AddressFactory(const std::string& inputFileName) {
    inputFile.open(inputFileName);
    //blow up if issue opening file
    assert( inputFile.is_open() );
}


Address AddressFactory::getNext() {
    string dataLine;
    getline(inputFile, dataLine);

    //Blow up if failure reading line
    assert( !inputFile.fail() );

    return Address(dataLine);
}
