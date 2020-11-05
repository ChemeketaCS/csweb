//----------------------------------------------------------
// CS260 Assignment Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------
#include <iostream>

#include "IndexRecord.h"
#include "IndexMap.h"

using namespace std;


int main()
{
    cout << "----------------Section 1----------------" << endl;
    IndexRecord r1("test");
    r1.addLocation( IndexLocation(3, 4) );
    r1.addLocation( IndexLocation(4, 8) );
    r1.addLocation( IndexLocation(6, 4) );

    cout << "r1.has (4,8):" << r1.hasLocation( IndexLocation(4,8) ) << endl;
    cout << "r1.has (6,8):" << r1.hasLocation( IndexLocation(6,8) ) << endl;



    cout << "----------------Section 2----------------" << endl;

    IndexMap m(4);
    m.add("Apple", 1, 2);
    m.add("Apple", 2, 5);
    m.add("Banana", 1, 8);
    m.print();
    cout << "--------------------------------" << endl;

    m.add("Carrot", 2, 12);
    m.add("Caramel", 3, 2);
    m.add("Date", 1, 6);
    m.add("Fig", 2, 3);
    m.add("Grape", 1, 7);
    m.add("Lemon", 2, 9);
    m.add("Banana", 1, 10);
    m.print();

    cout << "--------------------------------" << endl;

    IndexRecord bananaRecord = m.get("Banana");
    cout << bananaRecord << endl;
}
