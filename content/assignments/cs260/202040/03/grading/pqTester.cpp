#include <iostream>

using namespace std;

#include "PriorityQueue.h"

int main()
{
    PriorityQueue<int> p;

    p.add(50);
    p.add(20);
    p.add(60);
    p.add(70);
    p.add(40);
    p.add(30);
    p.add(80);
    p.add(10);

    for(int i = 0; i < 7; i++) {
        cout << p.removeMax() << " ";
    }

    cout << endl;

    p.add(100);
    p.add(200);

    cout << p.getMax() << endl;
}
