//Bring in unit testing code and tell it to build a main function
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
//This pragma supresses a bunch of warnings QTCreator produces (and should not)
//#pragma clang diagnostic ignored "-Woverloaded-shift-op-parentheses"
#include "doctest.h"

//Use Approx from doctest without saying doctest::Approx
using doctest::Approx;


//Include your .h files
#include "Set.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

TEST_CASE( "Constructor/Add/Contains" ) {
    cout << "1 - Testing Constructor/Add/Contains" << endl;
    Set<char> s;
    s.add('A');
    REQUIRE( s.contains('A') );

    s.add('B');
    REQUIRE( s.contains('A') );
    REQUIRE( s.contains('B') );
}

TEST_CASE( "getSize" ) {
    cout << "2 - Testing getSize" << endl;
    Set<char> s;
    REQUIRE( s.getSize() == 0 );

    s.add('A');
    REQUIRE( s.getSize() == 1 );

    s.add('B');
    s.add('C');
    REQUIRE( s.getSize() == 3 );

    s.add('A');
    REQUIRE( s.getSize() == 3 );
}


TEST_CASE( "Grow" ) {
    cout << "3 - Testing Grow" << endl;
    Set<int> s;

    for(int i = 0; i < 1000; i++)
        s.add(i);

    for(int i = 0; i < 1000; i++)
        REQUIRE( s.contains(i) );

    REQUIRE( s.getSize() == 1000 );
}



TEST_CASE( "Remove" ) {
    cout << "4 - Testing Remove" << endl;

    Set<char> s;
    s.add('A');
    s.add('B');
    s.add('C');
    REQUIRE( s.getSize() == 3 );
    REQUIRE( s.contains('A') );
    REQUIRE( s.contains('B') );
    REQUIRE( s.contains('C') );

    s.remove('A');

    REQUIRE( s.getSize() == 2 );
    REQUIRE( !s.contains('A') );
    REQUIRE( s.contains('B') );
    REQUIRE( s.contains('C') );

    s.add('D');
    s.add('E');
    s.remove('C');

    REQUIRE( s.getSize() == 3 );
    REQUIRE( s.contains('B') );
    REQUIRE( !s.contains('C') );
    REQUIRE( s.contains('D') );
    REQUIRE( s.contains('E') );
}




TEST_CASE( "CopyConstructor" ) {
    cout << "5 - Testing CopyConstructor" << endl;
    Set<int> s;
    s.add(1);
    s.add(2);

    Set<int> s2(s);
    s2.add(3);

    s.remove(1);

    REQUIRE( !s.contains(1) );
    REQUIRE( s.contains(2) );
    REQUIRE( !s.contains(3) );

    REQUIRE( s2.contains(1) );
    REQUIRE( s2.contains(2) );
    REQUIRE( s2.contains(3) );
}

TEST_CASE( "AssignmentOp" ) {
    cout << "6 - Testing AssignmentOperator" << endl;

    SUBCASE( "AssignmentOperator/DeepCopy") {
        cout << "   ...DeepCopy" << endl;
        Set<int> s;
        s.add(1);
        s.add(2);

        Set<int> s2;
        s2.add(4); //should be cleared out
        s2 = s;
        s2.add(3);

        s.remove(2);

        REQUIRE( s.contains(1) );
        REQUIRE( !s.contains(2) );
        REQUIRE( !s.contains(3) );

        REQUIRE( s2.contains(1) );
        REQUIRE( s2.contains(2) );
        REQUIRE( s2.contains(3) );
        REQUIRE( !s2.contains(4) );
    }

    SUBCASE( "AssignmentOperator/SelfAssignment") {
        cout << "   ...SelfAssignment" << endl;
        Set<int> s;
        s.add(1);
        s.add(2);

        //This line will produce a warning - that is OK
        //We are making sure your assignment operator does not choke on self assignment
        s = s;

        REQUIRE( s.contains(1) );
        REQUIRE( s.contains(2) );
    }

}


TEST_CASE( "Clear" ) {
    cout << "7 - Testing Clear" << endl;

    Set<char> s;
    s.add('A');
    s.add('B');
    s.clear();
    REQUIRE( s.getSize() == 0 );
    REQUIRE( !s.contains('A') );
    REQUIRE( !s.contains('B') );

}




TEST_CASE( "RemoveSmallest" ) {
    cout << "8 - Testing removeSmallest" << endl;
    Set<int> s;
    s.add(20);
    s.add(5);
    s.add(30);
    s.add(10);
    s.add(25);
    s.add(15);

    int temp = s.removeSmallest();
    REQUIRE( temp == 5 );
    REQUIRE( !s.contains(5) );
    REQUIRE( s.getSize() == 5 );


    temp = s.removeSmallest();
    REQUIRE( temp == 10 );
    REQUIRE( !s.contains(10) );
    REQUIRE( s.getSize() == 4 );

    temp = s.removeSmallest();
    REQUIRE( temp == 15 );
    REQUIRE( !s.contains(15) );
    REQUIRE( s.getSize() == 3 );

    REQUIRE( s.contains(20) );
    REQUIRE( s.contains(25) );
    REQUIRE( s.contains(30) );

}



TEST_CASE( "Operator==" ) {
    cout << "9 - Testing operator==" << endl;
    Set<int> s;
    for(int i = 1; i <= 4; i++)
        s.add(i);
    //s = 1,2,3,4

    Set<int> s2;
    for(int i = 5; i >= 1; i--)
        s2.add(i);
    //s2 = 5,4,3,2,1

    bool areEqualResult = s == s2;
    REQUIRE( areEqualResult == false  );

    s.add(5); //s = 1,2,3,4,5
    areEqualResult = s == s2;
    REQUIRE( areEqualResult == true  );

    s.add(6); //s = 1,2,3,4,5,6
    areEqualResult = s == s2;
    REQUIRE( areEqualResult == false  );
}


//NOTE - you only need this OR toString, not both tests
TEST_CASE( "StreamInsertion" ) {
    cout << "10 - Testing StreamInsertion" << endl;

    Set<int> s;

    stringstream buffer;
    buffer << s;
    string str1 = buffer.str();
    REQUIRE( str1 == "{}" );

    s.add(1);
    s.add(2);
    s.add(3);

    stringstream buffer2;
    buffer2 << s;
    string str2 = buffer2.str();
    REQUIRE( str2 == "{1, 2, 3}" );
}

//NOTE - you only need this OR StreamInsertion, not both tests
TEST_CASE( "ToString" ) {
    cout << "10 - Testing ToString" << endl;

    Set<int> s;
    string str1 = s.toString();
    REQUIRE( str1 == "{}" );

    s.add(1);
    s.add(2);
    s.add(3);

    string str2 = s.toString();
    REQUIRE( str2 == "{1, 2, 3}" );
}


TEST_CASE( "Intersection" ) {
    cout << "11 - Testing intersectionWith" << endl;
    Set<int> s;
    Set<int> s2;
    Set<int> s3;

    for(int i = 0; i <= 100; i += 2)
        s.add(i);

    for(int i = 0; i <= 100; i += 5)
        s2.add(i);

    for(int i = 10; i <= 16; i++)
        s3.add(i);


    Set<int> s4 = s.intersectionWith(s2);
    Set<int> s5 = s3.intersectionWith(s);

    REQUIRE( s4.getSize() == 11 );
    REQUIRE( s4.contains(10) );
    REQUIRE( !s4.contains(12) );
    REQUIRE( s5.getSize() == 4 );
}



