/*David Archer
Inserting Integers*/

#include "Set.h"

using namespace std;

#ifndef SET_CPP
#define SET_CPP

template <class ItemType>
bool Set<ItemType>::add(const ItemType& newEntry)
{
	if (!this->contains(newEntry)) 
	{
		return ArrayBag<ItemType>::add(newEntry);
	}

	return false; 
}

template<class ItemType>
Set<ItemType> Set<ItemType>:: operator+(const Set<ItemType>& other)
{
	Set<ItemType> unionSet; 
	
	vector<ItemType> elements = this->toVector();
	for (size_t i = 0; i < elements.size(); i++)
	{
		unionSet.add(elements[i]);
	}

	elements = other.toVector();
	for (size_t i = 0; i < elements.size(); i++)
	{
		unionSet.add(elements[i]);
	}

	return unionSet;
}

template <class ItemType>
Set<ItemType> Set<ItemType>:: operator-(const Set<ItemType>& other)
{
	Set<ItemType> intersectSet; 
	vector<ItemType> elements = this->toVector();
	for (size_t i = 0; i < elements.size(); i++)
	{
		if (other.contains(elements[i]))
			intersectSet.add(elements[i]);
	}


	return intersectSet;
}

template <typename ItemType>
ostream& operator<<(ostream& out, const Set<ItemType>& s)
{
	vector<ItemType> elements = s.toVector();
	for (size_t i = 0; i < elements.size(); i++)
		out << elements[i] << endl;
	return out;
}
#endif