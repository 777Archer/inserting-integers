/*David Archer
Inserting Integers*/

#ifndef SET_H_
#define SET_H_

#include "ArrayBag.h"
#include <iostream>

template <class ItemType>
class Set : public ArrayBag<ItemType>
{
public:
	bool add(const ItemType& newEntry);
	Set operator+(const Set&); // do a union
	Set operator-(const Set&); // do an intersection
	template <class E>
	friend std::ostream& operator<<(std::ostream&, const Set<E>&); // print the set
};

#include "Set.cpp"

#endif