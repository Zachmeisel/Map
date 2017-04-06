#include "Map.h"
#include "Heads.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>


//Heads *head = NULL;

template <typename valueType> 
Map<valueType>::Map()
{
	
	
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

		//std::cout << "Item inserted" << std::endl;
		return true;
	}
	else
	{
		std::cout <<"The password is already used" << std::endl;
		return false;
	}

	
}
template <class valueType> valueType Map<valueType>::get(std::string key)
{
	std::hash<std::string> str_hash;
	Map * checker = new Map;
	Map * temp = new Map;
	checker = head;
	if (check(key) == true)
	{
		while (true)
		{
			if (checker->h_key == str_hash(key))
			{
				return checker->stored;
			}
			else
			{
				temp = checker;
				checker = temp->next;
			}
		}
	}
	else
	{
		std::cout << "Item not found" << std::endl;
		return NULL;
	}
	
	
}

template <class valueType> bool Map<valueType>::remove(std::string key)
{
	std::hash<std::string> str_hash;
	Map * checker = new Map;
	Map * previous = new Map;
	Map * temp = new Map;
	previous = head;
	checker = head;
	if (check(key) == true)
	{
		while (true)
		{
			if (checker->h_key == str_hash(key))
			{
				temp = checker->next;
				previous->next = temp;
				checker = temp;
				//head = checker;
				std::cout << "Item Removed" << std::endl;
				return true;
			}
			else
			{
				temp = checker;
				previous = checker;
				checker = temp->next;
			}
		}
	}
	else
	{
		std::cout << "Item not found/already removed" << std::endl;
		return false;
	}

}

template <class valueType> int Map<valueType>::size()
{
	int ret =0;
	Map * checker = new Map;
	Map * temp = new Map;
	checker = head;

	while (true)
	{
		if (checker != NULL)
		{
			ret++;
			if (checker->next != NULL)
			{
				temp = checker;
				checker = temp->next;
			}
			else
			{
				return ret;
			}
		}
		
	}
	return ret;
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
		Map * keep = new Map;
		Map * temp = new Map;
		checker = head;
		keep = head;
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
				else if(checker == NULL || checker->next == NULL)
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