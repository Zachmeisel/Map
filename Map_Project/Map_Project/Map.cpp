#include "Map.h"
#include <string>
#include <iostream>
#include <algorithm>

template <typename valueType> 
Map<valueType>::Map()
{
	//head = 0;
	//head->next = end;
}


template <typename valueType> 
Map<valueType>::~Map()
{
}

template <class valueType> 
bool Map<valueType>::insert(std::string key, valueType value)
{
	check(key);
	Map * n = new Map;
	//n->next = 0;
	n->h_key = key;
	n->stored = value;
	if (head = NULL)
	{
	head = n;
	}
	else 
	{
		n = end;
		end = n->next;
	}
	

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