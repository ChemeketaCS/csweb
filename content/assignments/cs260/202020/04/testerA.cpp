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
    setA.add("waste");


    cout << "Size (expect 7): " << setA.size() << endl
    << "Depth (expect 2): "
    << setA.depth() << endl << endl;

    {
        MySet<string> setA2(setA);

        cout << "Size of copy (expect 7): " << setA2.size() << endl
        << "Depth (expect 2): "
        << setA2.depth() << endl << endl;
    }
}
