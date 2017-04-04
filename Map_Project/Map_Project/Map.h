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

	Map *head;
	Map *end;
	std::string h_key;

	/*Map *left;
	Map *right;*/

private:
	Map *next;
	valueType stored;

};

