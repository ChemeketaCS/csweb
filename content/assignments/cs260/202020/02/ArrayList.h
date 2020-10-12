//----------------------------------------------------------
// CS260 Assignment 2 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------

//----------------------------------------------------------
// YOU SHOULD NOT EDIT THIS FILE
//----------------------------------------------------------

#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <iostream>
#include <sstream>
#include <exception>
#include <stdexcept>


/**
 * @brief ArrayList implements a list Abstract Data Type using
 *          a dynamic array as the internal storage.
 */
template <class T>
class ArrayList
{
public:
    /**
     * @brief Create an ArrayList with space for 10 items
     * @param initialCapacity Number of items to allocate
     */
    ArrayList(int initialCapacity = 10);

    /**
     * @brief Copy an existing ArrayList
     * @param otherList ArrayList to make deep copy of
     */
    ArrayList(const ArrayList<T>& otherList);

    /**
     * @brief Implements assignment operator to make deep copies
     */
    ArrayList<T>& operator=(const ArrayList<T>& otherList);

    /**
     * @brief Destroy the list, including deallocating the backing array
     */
    virtual ~ArrayList();

    /**
     * @brief Ask for size of the list
     * @return Length of the list (logical length, not capacity)
     */
    int listSize() const;

    /**
     * @brief Remove all items from the list
     */
    void clear();

    /**
     * @brief Add copy of item to the end of the list,
     *          growing internal storage if needed
     * @param insertItem Item to duplicate into the list
     */
    void insertEnd(const T& insertItem);

    /**
     * @brief Get copy of the item at specified index in the list
     * @param location Index to retrieve. If invalid, throws exception.
     * @return Copy of item
     */
    T retrieveAt(int location) const;

    /**
     * @brief Replace an existing item in list with copy of given item
     * @param location Index of item to replace. If invalide, throws an exception.
     * @param repItem Item to overwrite old element with
     */
    void replaceAt(int location, const T& repItem);

    /**
     * @brief Add copy of item into list, pushing existing items back
     * @param location Index where item should be placed.
     * @param insertItem Item to copy in
     */
    void insertAt(int location, const T& insertItem);

    /**
     * @brief Remove item at a specified location, shift elements after
     *          it forward to remove gap.
     * @param location Index at which to remove. If invalid throws exception
     */
    void removeAt(int location);

    /**
     * @brief Find index of the first copy of a given item in list
     * @param searchItem Value to search for
     * @return Index of found item or -1 if not found
     */
    int search(const T& searchItem) const;

    /**
     * @brief Move all items from otherList to the end of this List.
     * @param otherList List to be combined into this one. It should end up empty.
     *
     * YOU WILL IMPLEMENT IN AddressArrayList.h/cpp
     */
    void combine(ArrayList<T>& otherList);

    /**
     * @brief Remove all items that match itemToMatch from the ArrayList and return them in a new ArrayList
     * @param itemToMatch All items matching this value will be extracted
     * @return A new list containing the extracted items.
     *
     * YOU WILL IMPLEMENT IN AddressArrayList.h/cpp
     */
    ArrayList<T> extractAllMatches(const T& itemToMatch);

protected:
    /**
     * @brief Allocate new storage array double old capacity and copy
     *          existing items to it.
     */
    void grow();

    T* list;        ///dynamic array holding stored items
    int length;     ///logical length of list - how many items are being stored
    int maxSize;    ///size of array used for storage
};


//------------------------IMPLEMENTATIONS-------------------------------


template <class T>
ArrayList<T>::ArrayList(int initialCapacity)
{
    length = 0;
    maxSize = initialCapacity;
    list = new T[maxSize];
}

template <class T>
ArrayList<T>::~ArrayList()
{
    delete [] list;
}

template <class T>
ArrayList<T>::ArrayList (const ArrayList<T>& otherList)
{
    length = otherList.length;
    maxSize = otherList.maxSize;
    list = new T[maxSize];

    for(int i = 0; i < maxSize; i++)
        list[i] = otherList.list[i];
}

template <class T>
ArrayList<T>& ArrayList<T>::operator=(const ArrayList<T>& otherList)
{
    if(this != &otherList) {
        //if we aren't at same address as other guy, do copy
        delete[] list;  //delete old storage

        length = otherList.length;
        maxSize = otherList.maxSize;
        list = new T[maxSize];

        for(int i = 0; i < maxSize; i++)
            list[i] = otherList.list[i];
    }
    //no matter what, return self
    return *this;
}

template <class T>
int ArrayList<T>::listSize() const
{
    return length;
}


template <class T>
void ArrayList<T>::clear()
{
    //clear by setting logical length to 0
    length = 0;
}

template <class T>
void ArrayList<T>::grow()
{
    int newSize = maxSize * 2;
    T* tempList = new T[newSize];

    for(int i = 0; i < maxSize; i++)
        tempList[i] = list[i];

    maxSize = newSize;

    delete [] list;
    list = tempList;
}


template <class T>
void ArrayList<T>::insertEnd(const T& insertItem)
{
    if(length == maxSize)
        grow();

    list[length] = insertItem;
    length++;
}

template <class T>
T ArrayList<T>::retrieveAt(int location) const
{
    if(location < 0 || location >= length) {
        //build up error message...
        //other functions use simple string literal
        std::stringstream message;
        message << "Invalid index: " << location << " in list of length " << length;
        throw std::out_of_range(message.str());
    }

    return list[location];
}

template <class T>
void ArrayList<T>::replaceAt(int location, const T& repItem)
{
    if(location < 0 || location >= length)
        throw std::out_of_range("Invalid index");

    list[location] = repItem;
}

template <class T>
void ArrayList<T>::removeAt(int location)
{
    if(location < 0 || location >= length)
        throw std::out_of_range("Invalid index");

    //shift everyone after location to left "remove" the item
    //make sure to stop one early since we are copying from right
    for(int i = location; i < length -1; i++)
        list[i] = list[i+1];

    length--;
}

template <class T>
void ArrayList<T>::insertAt(int location, const T& insertItem)
{
    if(location < 0 || location > length)
        throw std::out_of_range("Invalid index");

    //check to see if need more room...
    if(length == maxSize)
        grow();

    //shift everyone from end of list back to target location
    // back one slot in the array to make room
    for(int i = length - 1; i >= location; i--)
        list[i+1] = list[i];

    list[location] = insertItem;

    length++;
}


template <class T>
int ArrayList<T>::search(const T& searchItem) const
{
    for(int i = 0; i < length; i++) {
        if(list[i] == searchItem)
            return i;
    }
    return -1; //not found
}



#endif
