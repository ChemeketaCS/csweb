---
title: Set
summary: Implement an array based templated data structure
weight: 60
#last used 202040
---

{{% cs162General %}}

## Background

A Set is a collection that can hold an arbitrary number of items. It however will only hold one
copy of a given item (if you add 1 to the set {1, 2, 3} you still have {1, 2, 3}).

You will create a generic set class that can be used to store values of any type like this:
{{% sample_run %}}
Set<int> mySet;
mySet.add(13);
mySet.add(12);
mySet.add(13);
cout << mySet.toString() << endl;  //prints {13, 12}
{{% /sample_run %}}

## Assignment Instructions

*Submit files: Set.h, SetTester.cpp*

Make an array based, templated Set class. Your class must do its own memory management,
you may NOT use std::vector or any other library code to handle storage for your class.
Because this is a templated class, there will be no Set.cpp file.

I supply a [SetTester.cpp](SetTester.cpp). Make yourself a unit test project and add this file to it.
You are allowed to comment out entire TEST_CASEs but not to comment out parts of them
or otherwise modify them. **Do NOT comment out individual REQUIREs inside a TEST_CASE.**

Your grade will be based on turning test cases that compile and run. Make sure to leave
any TEST_CASES that compile turned on to show your code works.

**Passing Test > Failing Test > Not Attempted Test > Does not Compile**

If I place all your code in one folder along with doctest.h, I should be able to
do this to build your code:

```
g++ -g -std=c++11 SetTester.cpp -o program.exe
```

{{% alert warning %}}
Modifying a .h file does not necessarily force a rebuild (it is not explicitly
compiled, thus build tools don't realize they need to recompile your code).
QTCreator *should* notice changes and rebuild, but if it seems to be ignoring new
code, from the Build menu do Rebuild Project to force a recompile after
modifying your .h.
{{% /alert %}}

## Set Details

Below are descriptions of the functions you will need to build to pass the unit tests.

You do not need to provide doxygen comments.

#### No-arg Constructor

Start with an initial capacity of 8 items.

#### Destructor

Should clean up storage. You won't know if you are leaking memory unless you use DrMemory
to test your code.

{{% alert info %}}
I will check your code for memory issues using DrMemory. Make sure you use it to check
your code early and often.
{{% /alert %}}

#### bool contains(type item) const

Returns true if set has the indicated item.

#### void add(type item)

Adds an item to the set if it is not already contained. Should grow the available storage if needed.

#### int getSize() const

Returns the number items in the set.

#### Copy constructor and assignment operator

These should both create deep copies of the set.

#### void remove(type item)

If the items is part of the set, removes the item.

#### void clear()

Empties the set.

#### type removeSmallest()

Removes the item with the smallest value (not the first) from the set.
You can kill the program or throw an exception if called on an empty set

#### bool operator==(const Set<type>& other) const

Member operator ==. Returns true if the two sets contain exactly the same items.
The items do not have to be in the same positions. {1, 2, 3} is == to {3, 2, 1}

#### string toString() const

Returns a string that looks like {1, 2, 3} containing the items in the set.
An empty set should return {}.

Alternatively, you can provide an overloaded stream insertion operator that outputs
the set in that same format.

There are separate unit tests for toString and the stream insertion operator. Comment out
the test of the one you do not provide.

#### Set<type> intersectionWith(const Set<type>& other) const

Returns a new Set containing the items that are in both this set and the other set.
