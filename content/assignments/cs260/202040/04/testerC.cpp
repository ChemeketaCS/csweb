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
    setA.add("waste");
    setA.add("ace");





    {
        MySet<string> setA3(setA);

        cout << "****Remove leaf****" << endl << endl;

        setA3.remove("waste");
        cout << "Size (expect 6): "
        << setA3.size() << endl;
    }

    {
        MySet<string> setA3(setA);

        cout << "****Remove no left child****" << endl << endl;

        setA3.remove("stew");
        cout << "Size (expect 6): "
        << setA3.size() << endl;
    }

    {
        MySet<string> setA3(setA);

        cout << "****Remove no right child****" << endl << endl;

        setA3.remove("apple");
        cout << "Size (expect 6): "
        << setA3.size() << endl;
    }

    {
        MySet<string> setA3(setA);

        cout << "****Remove two children****" << endl << endl;

        setA3.remove("fact");
        cout << "Size (expect 6): "
        << setA3.size() << endl;
    }



    {
        MySet<string> setA3(setA);

        cout << "****Remove root****" << endl << endl;

        setA3.remove("main");
        cout << "Size (expect 6): "
        << setA3.size() << endl;
    }

}
