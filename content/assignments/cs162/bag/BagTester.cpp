//Bring in unit testing code and tell it to build a main function
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
//This pragma supresses a bunch of warnings QTCreator produces (and should not)
//#pragma clang diagnostic ignored "-Woverloaded-shift-op-parentheses"
#include "doctest.h"

//Use Approx from doctest without saying doctest::Approx
using doctest::Approx;


//Include your .h files
#include "Bag.h"
#include <iostream>
#include <sstream>

using namespace std;

TEST_CASE( "Constructor/AddItem/Contains" ) {
    cout << "(1) Constructor/AddItem/Contains" << endl;
    Bag<char> b;
    b.addItem('A');
    REQUIRE( b.contains('A') );

    b.addItem('B');
    REQUIRE( b.contains('A') );
    REQUIRE( b.contains('B') );
}


TEST_CASE( "AddAndGrow" ) {
    cout << "(2) Grow" << endl;
    Bag<int> b;

    for(int i = 0; i < 1000; i++)
        b.addItem(i);

    for(int i = 0; i < 1000; i++)
        REQUIRE( b.contains(i) );
}

TEST_CASE( "CopyConstructor" ) {
    cout << "(3) CopyConstructor" << endl;
    Bag<int> b;
    b.addItem(1);
    b.addItem(2);

    Bag<int> b2(b);
    b2.addItem(3);

    REQUIRE( b.contains(1) );
    REQUIRE( b.contains(2) );
    REQUIRE( !b.contains(3) );

    REQUIRE( b2.contains(1) );
    REQUIRE( b2.contains(2) );
    REQUIRE( b2.contains(3) );
}

TEST_CASE( "AssignmentOp" ) {
    cout << "(4) AssignmentOperator" << endl;

    SUBCASE( "AssignmentOperator/DeepCopy") {
        cout << "   ...DeepCopy" << endl;
        Bag<int> b;
        b.addItem(1);
        b.addItem(2);

        Bag<int> b2;
        b2.addItem(4); //should be cleared out
        b2 = b;
		
        b2.addItem(3);
		b.addItem(4);

        REQUIRE( b.contains(1) );
        REQUIRE( b.contains(2) );
        REQUIRE( b.contains(4) );
        REQUIRE( !b.contains(3) );

        REQUIRE( b2.contains(1) );
        REQUIRE( b2.contains(2) );
        REQUIRE( b2.contains(3) );
        REQUIRE( !b2.contains(4) );
    }

    SUBCASE( "AssignmentOperator/SelfAssignment") {
        cout << "   ...SelfAssignment" << endl;
        Bag<int> b;
        b.addItem(1);
        b.addItem(2);

        //This produces a warning, that is OK
        //We are testing if you avoid blowing up on self assignment
        b = b;

        REQUIRE( b.contains(1) );
        REQUIRE( b.contains(2) );
    }

}

TEST_CASE( "toString" ) {
    cout << "(5) toString" << endl;

    Bag<int> b;

    string s1 = b.toString();
    REQUIRE( s1 == "{}" );

    b.addItem(1);
    b.addItem(2);
    b.addItem(3);

    string s2 = b.toString();
    REQUIRE( s2 == "{1, 2, 3}" );

    b.addItem(4);
    string s3 = b.toString();
    REQUIRE( s3 == "{1, 2, 3, 4}" );
}


////Only need this OR toString, not both
//TEST_CASE( "StreamInsertion" ) {
//    cout << "(5) StreamInsertion" << endl;
//    Bag<int> b;

//    stringstream s1;
//    s1 << b;
//    REQUIRE( s1.str() == "{}" );

//    b.addItem(1);
//    b.addItem(2);
//    b.addItem(3);

//    s1.str("");
//    s1 << b;
//    REQUIRE( s1.str() == "{1, 2, 3}" );
//}


TEST_CASE( "RemoveItem" ) {
    cout << "(6) RemoveItem" << endl;
    Bag<int> b;
    b.addItem(100);
    b.addItem(100);
    b.addItem(200);
    b.addItem(100);
    bool wasRemoved;

    wasRemoved = b.removeItem(100);
    REQUIRE( wasRemoved );
    REQUIRE( b.contains(100) );

    wasRemoved = b.removeItem(100);
    REQUIRE( wasRemoved );
    REQUIRE( b.contains(100) );
    wasRemoved = b.removeItem(100);
    REQUIRE( wasRemoved );
    REQUIRE( !b.contains(100) );

    wasRemoved = b.removeItem(100);
    REQUIRE( !wasRemoved );
}


TEST_CASE( "Dump" ) {
    cout << "(7) Dump" << endl;
    Bag<int> b;

    for(int i = 0; i < 8; i++)
        b.addItem(i);

    b.dump();

    for(int i = 0; i < 8; i++)
        REQUIRE( !b.contains(i) );
}


TEST_CASE( "Empty" ) {
    cout << "(8) Empty" << endl;

    SUBCASE( "Empty/Dump") {
        Bag<char> b;
        cout << "   ...Dump" << endl;
        REQUIRE( b.isEmpty() );
        b.addItem('A');
        b.addItem('B');
        REQUIRE( !b.isEmpty() );
        b.dump();
        REQUIRE( b.isEmpty() );
    }

    SUBCASE( "Empty/RemoveItem") {
        Bag<char> b;
        cout << "   ...removeItem" << endl;
        b.addItem('A');
        b.removeItem('A');
        REQUIRE( b.isEmpty() );
    }
}


TEST_CASE( "NumberOf" ) {
    cout << "(9) NumberOf" << endl;

    Bag<int> b;
    b.addItem(1);
    b.addItem(2);
    b.addItem(1);
    b.addItem(2);
    b.addItem(1);

    REQUIRE( b.numberOf(1) == 3 );
    REQUIRE( b.numberOf(2) == 2 );
    REQUIRE( b.numberOf(3) == 0 );
}


TEST_CASE( "RemoveAll" ) {
    cout << "(10) Remove All" << endl;

    SUBCASE( "removeAll/Basic" ) {
        cout << "   ...basic" << endl;
        Bag<int> b;
        b.addItem(1);
        b.addItem(2);
        b.addItem(1);
        b.addItem(2);
        b.addItem(1);
        b.addItem(2);

        b.removeAll(1);
        REQUIRE( b.numberOf(1) == 0 );
        REQUIRE( b.numberOf(2) == 3 );
    }

    SUBCASE( "RemoveAll/Consecutive" ) {
        cout << "   ...Consecutive items" << endl;
        Bag<char> b;
        b.addItem('B');
        b.addItem('A');
        b.addItem('A');
        b.addItem('B');
        b.addItem('A');
        b.addItem('A');
        b.addItem('A');
        b.addItem('B');

        b.removeAll('A');
        REQUIRE( b.numberOf('A') == 0 );
        REQUIRE( b.numberOf('B') == 3 );
    }

    SUBCASE( "RemoveAll/Last" ) {
        cout << "   ...Last item" << endl;
        Bag<int> b;
        b.addItem(2);
        b.addItem(1);
        b.addItem(1);
        b.addItem(2);
        b.addItem(1);
        b.addItem(1);
        b.addItem(2);

        b.removeAll(2);
        REQUIRE( b.numberOf(1) == 4 );
        REQUIRE( b.numberOf(2) == 0 );
    }
}


TEST_CASE( "PickRandom" ) {
    cout << "(11) PickRandom" << endl;

    SUBCASE( "PickRandom/ClearOut" ) {
        cout << "   ...Clear out" << endl;
        Bag<int> b;
        b.addItem(0);
        b.addItem(1);
        b.addItem(2);

        bool chosen[3] = {false};
        for(int i = 0; i < 3; i++) {
            int picked = b.pickRandom();
            chosen[picked] = true;
        }
        bool seenAll = chosen[0] && chosen[1] && chosen[2];
        REQUIRE( seenAll );
    }

    SUBCASE( "PickRandom/Probability" ) {
        cout << "   ...Probability" << endl;
        int AsPicked = 0;
        for(int i = 0; i < 1000; i++) {
            Bag<char> b;
            b.addItem('B');
            b.addItem('B');
            b.addItem('A');
            b.addItem('B');
            b.addItem('B');
            if( b.pickRandom() == 'A' )
                AsPicked++;
        }

        /*
        WARN("This is a probabilistic test.");
        WARN("You should fail this less than 1% of the time.");
        WARN("If you fail, rerun a few times and see if you pass those.");
        */
        bool inRange = AsPicked > 150 && AsPicked < 250;
        REQUIRE( inRange );
    }
}



TEST_CASE( "dumpInto" ) {
    cout << "(12) dumpInto" << endl;
    Bag<char> b;
    Bag<char> b2;

    b.addItem('A');
    b.addItem('B');
    b2.addItem('C');
    b2.addItem('D');
    b2.dumpInto(b);

    REQUIRE( b.contains('A') );
    REQUIRE( b.contains('B') );
    REQUIRE( b.contains('C') );
    REQUIRE( b.contains('D') );
    REQUIRE( b2.isEmpty() );
}


TEST_CASE( "ExtractAll" ) {
    cout << "(13) ExtractAll" << endl;

    SUBCASE( "ExtractAll/Basic" ) {
        cout << "   ...Basic" << endl;
        Bag<char> b;

        b.addItem('A');
        b.addItem('B');
        b.addItem('B');
        b.addItem('A');
        b.addItem('B');
        b.addItem('B');

        Bag<char> b2 = b.extractAll('B');

        REQUIRE( !b.contains('B') );
        REQUIRE( !b2.contains('A') );
        REQUIRE( b2.numberOf('B') == 4 );
    }

    SUBCASE( "ExtractAll/NoMatches" ) {
        cout << "   ...NoMatches" << endl;
        Bag<char> b;

        b.addItem('A');
        b.addItem('B');
        b.addItem('B');
        b.addItem('A');
        b.addItem('B');
        b.addItem('B');

        Bag<char> b2 = b.extractAll('C');

        REQUIRE( b.numberOf('B') == 4 );
        REQUIRE( b.numberOf('A') == 2 );
        REQUIRE( b2.isEmpty() );
    }

}

