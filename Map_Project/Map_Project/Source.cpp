#include "Source.h"
#include "Map.h"
#include "Test.h"
#include "Map.cpp"
#include <iostream>
#include <algorithm>

Source::Source()
{
	
}


Source::~Source()
{
}

int main(void)
{
	std::string a = "aw";
	int b = 2; 

	Test * Boop = new Test;

	Map<int> Val_int;
	Map<char> Val_char;
	Map<std::string> Val_string;
	Map<Test*> Val_ptr;

	Val_int.insert(a,b);
	Val_int.insert("hi", 42);

}

