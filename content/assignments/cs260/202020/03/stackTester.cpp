#include <iostream>

using namespace std;

#include "Stack.h"

int main()
{
    Stack<string> s;
    cout << s.isEmpty() << endl;
    s.push("A");
    s.push("B");
    s.push("C");
    cout << s.peek() << endl;
    s.pop();
    s.push("D");
    s.print();
    s.reversePrint();
    cout << s.isEmpty() << endl;

}
