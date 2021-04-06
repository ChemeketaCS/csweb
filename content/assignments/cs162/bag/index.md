---
title: Bag
summary: Use templates and generic structures.
weight: 60
#last used 202020
---

{{% cs162General %}}

## Requirements

*Submit files: Bag.h, BagTester.cpp*

If I place all your code in one folder along with doctest.h, I should
be able to build your code with:

```
g++ -g -std=c++11 BagTester.cpp -o program.exe
```

Make an array-based, templated Bag class. Your class must do its own
memory management; you may *not* use `std::vector` or any other library
code to handle storage for your class.

I supply a [BagTester.cpp](BagTester.cpp).  Make yourself a unit test
project and add this file to it. You are allowed to comment out entire
`TEST_CASE`s but not to comment out parts of them or otherwise modify
them. Do not comment out individual `REQUIRE`s inside a `TEST_CASE`.

Your grade will be based on turning test cases that compile and run.
Make sure to leave any `TEST_CASE`s that compile turned on to show your
code works.

Passing Test \> Failing Test \> Commented-Out Test \> Does not Compile

## Bag

A bag is a data structure that can hold a collection of items. They have
no ordering within the bag, but we can add, remove and count the items
in a bag.

Create a bag that can be used like this:  

```
Bag<int> myBag;

myBag.addItem(10);
myBag.addItem(12);
myBag.addItem(10);

cout << myBag << endl; //10, 12, 10 in any order you want…

if (myBag.contains(12))
    myBag.removeItem(12);

…
```

## Specifications

Your Bag class must be implemented with a dynamic array. You may not
use a vector for storage. Your Bag class should support the following,
templated over a value type `T`:

- Constructor - start empty but with a capacity of 10

- Destructor, Copy constructor, Assignment Operator

- `void addItem(T item)`

  Adds an item to the bag. If there is not enough room, grow the
  available storage.

- `bool contains(T item)`

  Return whether the bag has any of the indicated item.

- `string toString() const`

  Returns a string that looks like “{10, 12, 10}”, with a
  comma-separated list of the items in the bag surrounded curly
  brackets. An empty bag should return “{}”.

  Note that you can also provide an overloaded stream insertion operator
  (`<<`) instead. If you do so, you can rewrite the toString test to
  insert a Bag into a stringstream and then compare the resulting string
  with a desired value.

- `bool removeItem(T item)`

  Remove one copy of a particular item from the bag and return true. If
  that item does not exist in the bag, return false. (If there are more
  than one of the item, the rest should remain in the bag.)

  Since order of items in the bag does not matter, an efficient way to
  remove something is to swap it with the last item then reduce the size
  by 1.

- `bool isEmpty()`

  Return true if the bag is empty, false if it contains any items.

- `void dump()`

  Make the bag empty.

- `int numberOf(T item)`

  Return how many of a particular item are in the bag.

- `void removeAll(T item)`

  Remove all copies of an item from the bag.

- `T pickRandom()`

  Return a random object from the bag. That item is removed from the bag.
  
  You can use an assert to blow up the program if called on empty bag.

  Don't try to seed the random number generator inside pickRandom—it
  would end up generating the same number every time. We don't need a
  different random sequence with each run, so don't worry about seeding
  at all.

- `void dumpInto(Bag<T>& other)`

  Put all items from this bag into the other bag (this bag ends up empty).

- `Bag<T> extractAll(T item)`

  Make a new bag consisting of all copies of the item that are in the
  current bag.

  I.e. if the bag has {5, 10, 12, 10, 10, 8}, `extractAll(10)` should
  return a new bag with {10, 10, 10} and leave the original bag with {5,
  12, 8}.

You do not need to provide doxygen comments for the Bag class.
