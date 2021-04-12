//----------------------------------------------------------
// CS260 Assignment 2 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------

#include "AddressArrayList.h"

#include <iostream>

using namespace std;


void printListRange(const ArrayList<Address>& list, int startIndex, int endIndex) {
    if(endIndex == -1)
        endIndex = list.listSize() - 1;
    for(int i = startIndex; i <= endIndex; i++) {
        cout << list.retrieveAt(i);
    }
}


template <>
void ArrayList<Address>::combine(ArrayList<Address>& otherList) {
    //FIXME
}


template <>
ArrayList<Address> ArrayList<Address>::extractAllMatches(const Address& itemToMatch) {
    //FIXME - returns empty list
    return ArrayList<Address>();
}
