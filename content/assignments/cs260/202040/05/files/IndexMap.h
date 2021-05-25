//----------------------------------------------------------
// CS260 Assignment Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------

#ifndef INDEXMAP_H
#define INDEXMAP_H


#include "IndexRecord.h"

//Implements a hash table based map
class IndexMap
{
private:
    int numBuckets;
    int keyCount;
    IndexRecord* buckets;

    //handle resizing the hash table into a new array with twice as many buckets
    void grow();

    //Get the location this key should be placed at.
    //  Will either containt IndexRecord with that key or an empty IndexRecord
    unsigned int getLocationFor(const std::string& key) const;

public:
    //Construct HashMap with given number of buckets
    IndexMap(int startingBuckets = 10);

    //Destructor
    ~IndexMap();

    //Copy constructor and assignment operators
    IndexMap(const IndexMap &other);
    IndexMap& operator=(const IndexMap& other);


    //Returns true of indicated key is in the map
    bool contains(const std::string& key) const;

    //Add indicated location to the map.
    //  If the key does not exist in the map, add an IndexRecord for it
    //  If the key does exist, add a Location to its IndexRecord
    void add(const std::string& key, int pageNumber, int wordNumber);

    //get number of keys contained in the map
    int numKeys() const;

    //print out the contents of the hash table
    void print() const;

    //get the IndexRecord associated with a particular word
    IndexRecord get(const std::string& word) const;

    //find all locations where one word is directly followed on the same page by a second
    //  print them to cout
    void findWordPairs(const std::string& key1, const std::string& key2) const;

    //returns the first word on the indicated page
    std::string firstWordOnPage(int pageNumber) const;
};



#endif // INDEXMAP_H
