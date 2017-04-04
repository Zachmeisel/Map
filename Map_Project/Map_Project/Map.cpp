#include "Map.h"
#include <string>
#include <iostream>
#include <algorithm>

template <typename valueType> 
Map<valueType>::Map()
{
	//head = NULL;
	
}


template <typename valueType> 
Map<valueType>::~Map()
{
}

template <typename valueType>
void Map<valueType>::init()
{
	head = NULL;
	if (conductor != 0) {
		while (conductor->next != 0)
			conductor = conductor->next;
	}
}

template <class valueType> 
bool Map<valueType>::insert(std::string key, valueType value)
{
	check(key);

	
	Map * n = new Map;
	Map * temp = new Map;
	//n->next = 0;
	n->h_key = key;
	n->stored = value;
	

	return true;
}
template <class valueType> valueType Map<valueType>::get(std::string key)
{
	
}

template <class valueType> bool Map<valueType>::remove(std::string key)
{

}

template <class valueType> int Map<valueType>::size()
{
	
}
template <class valueType> bool Map<valueType>::check(std::string key)
{
	return true;
}