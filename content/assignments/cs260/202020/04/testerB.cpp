//----------------------------------------------------------
// CS260 Assignment Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------
#include <iostream>
#include <sstream>
#include <fstream>

#include "MySet.h"

using namespace std;


int main()
{

    MySet<string> setA;

    setA.add("main");
    setA.add("fact");
    setA.add("stew");
    setA.add("apple");
    setA.add("jello");
    setA.add("pact");
    setA.add("waste");

    cout << "****Remove Largest****" << endl << endl;
    cout << "Removing Largest  4 times: " << endl;
    cout << setA.removeLargest() << endl;
    cout << "Size : " << setA.size() << endl;
    cout << setA.removeLargest() << endl;
    cout << "Size : " << setA.size() << endl;
    cout << setA.removeLargest() << endl;
    cout << "Size : " << setA.size() << endl;
    cout << setA.removeLargest() << endl;
    cout << "Size : " << setA.size() << endl;
}
