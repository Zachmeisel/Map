#pragma once
#include <string>
template <typename valueType> 
class Map
{
public:
	Map();
	~Map();

	bool insert(std::string,valueType );	//adds a value to the map using the specified key
	bool check(std::string);
	valueType get(std::string );			//returns the value associated with the specified key
	bool remove(std::string );			//removes the value with the associated key
	int size();					//returns number of elements stored in the map

	Map *head = NULL;
	Map *end;
	size_t h_key;

private:
	Map *next = NULL;
	valueType stored;

};

