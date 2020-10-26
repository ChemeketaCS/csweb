//----------------------------------------------------------
// CS260 Assignment 2 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------
#ifndef ADDRESSLINKEDLIST_H
#define ADDRESSLINKEDLIST_H

#include "Address.h"

/**
 * @brief List node for AddressLinkedList
 */
struct AddressListNode
{
    Address data;
    AddressListNode* next;

    AddressListNode();
    AddressListNode(const Address& value);
};



/**
 * @brief LinkedList of Address structs
 */
class AddressLinkedList
{
private:
    AddressListNode* head;
    AddressListNode* tail;
	int length;

public:
    /**
     * @brief Construct empty linked list
     */
    AddressLinkedList();

    /**
     * @brief Copy constructor
     */
    AddressLinkedList(const AddressLinkedList& other);

    /**
     * @brief Assignment Operator
     *
     * Implement if you need it, otherwise not required
     * Declared to prevent default shallow copy
     */
    AddressLinkedList& operator=(const AddressLinkedList& other);

    /**
     * @brief Destructor
     */
    ~AddressLinkedList();

    /**
     * @brief Get the length of the list
     * @return int representing number of values in list
     */
     int listSize() const;

     /**
      * @brief Print contents of list to cout
      */
     void print() const;

    /**
     * @brief Print contents of list to cout from startIndex to endIndex
     * @param startIndex first item to print
     * @param endIndex last item to print
     */
    void printRange(int startIndex, int endIndex) const;

    /**
     * @brief Inserts given value at head of the list
     * @param value Integer to insert
     */
    void insertStart(const Address& value);

    /**
     * @brief Inserts given value at end of the list
     * @param value Integer to insert
     */
    void insertEnd(const Address& value);

    /**
     * @brief Remove first item from list
     * @ return Address that was removed
     */
    Address removeFirst();

    /**
     * @brief Gets value stored at specified index
     * @param index Location we want to retrieve from
     * @return value
     */
     Address retrieveAt(int index) const;

    /**
     * @brief Adds the contents of other to the end of this list (retaining order)
     * @return other List to combine - should end up emptied
     */
    void combine(AddressLinkedList& other);

    /**
     * @brief Remove all items in which the state matches the itemToMatch.sate from the list and return them in a new list
     * @param itemToMatch All items whose state matches this Address' .state this value will be extracted
     * @return A new list containing the extracted items in their original order
     *
     * NOTE: should extract items that have a matching .state, not just items that are ==
     *
     * Sample usage:
     * Address searchAddress;
     * searchAddress.state = "OR";
     * AddressLinkedList oregonList = masterList.extractAllMatches(searchAddress);
     */
    AddressLinkedList extractAllMatches(const Address& itemToMatch);

    /**
     * @brief interleaves the other list into this one
     * @return other List to combine - should end up emptied
     *
     * Assuming this list looks like {a, b, c, d} and other is {w, x, y, z}
     *  this list should end as {a, w, b, x, c, y, d, z} and other as {}
     */
    void interleave(AddressLinkedList& other);

};

#endif // ADDRESSLINKEDLIST_H
