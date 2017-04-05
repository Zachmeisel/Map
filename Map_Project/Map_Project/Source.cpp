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
	Val_int.insert("12", 42);
	//Val_int.remove("hi");
	Val_int.get("poop");
	std::cout << Val_int.size();
	Val_int.insert("34", 42);
	Val_int.insert("56", 42);
	
	std::cin.get();
}

