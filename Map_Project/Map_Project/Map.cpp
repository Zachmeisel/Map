#include "Map.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>

template <typename valueType> 
Map<valueType>::Map()
{
	//head = NULL;
	
}


template <typename valueType> 
Map<valueType>::~Map()
{
}


template <class valueType> 
bool Map<valueType>::insert(std::string key, valueType value)
{
	if (check(key) == false)
	{
		Map * n = new Map;
		//Map * temp = new Map;
		//n->next = 0;
		std::hash<std::string> str_hash;


		n->h_key = str_hash(key);
		n->stored = value;
		n->next = head;

		head = n;

		return true;
	}
	else
	{
		return false;
	}

	
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
	std::hash<std::string> str_hash;

	if (head == NULL)
	{
		return false;
	}
	else
	{
		Map * checker = new Map;
		Map * temp = new Map;
		checker = head;
		if (checker == NULL)
		{
			return false;
		}
		else
		{
			while (true)
			{
				if (checker->h_key == str_hash(key))
				{
					return true;
				}
				else if(checker = NULL)
				{
					return false;
				}
				else
				{
					temp = checker;
					checker = temp->next;
				}
			}
		}
	}
}