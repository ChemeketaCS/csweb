//----------------------------------------------------------
// CS260 Assignment 2 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------
#include <iostream>
#include <ctime>

#include "Address.h"
#include "ArrayList.h"
#include "AddressArrayList.h"
#include "AddressLinkedList.h"

using namespace std;


int main()
{
    int size = 0;
    cout << "Enter problem size:" << endl;
    cin >> size;

    ArrayList<Address> aListA;
    ArrayList<Address> aListB;

    AddressFactory aFactory("25000AddressesA.txt");
    AddressFactory aFactory2("25000AddressesB.txt");

    for(int i = 0; i < size / 2; i++) {
        Address a = aFactory.getNext();
        aListA.insertEnd(a);
        Address a2 = aFactory2.getNext();
        aListB.insertEnd(a2);
    }
	
    
    return 0;
}
