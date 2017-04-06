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
Map<int> Val_int;
Map<float> Val_double;
Map<std::string> Val_string;
Map<Test*> Val_ptr;
Test * Boop = new Test;
Test * Boop1 = new Test;
Test * Boop2 = new Test;

void add_elements();

int main(void)
{
	std::string a = "aw";
	int b = 2; 
	
	add_elements();
	
	std::cout << "Getting elements from the lists: " << std::endl;

	std::cout << Val_int.get("intpass") << std::endl;
	std::cout << Val_double.get("floatpass") << std::endl;
	std::cout << Val_string.get("stringpass") << std::endl;
	std::cout << Val_ptr.get("ptrpass") << std::endl << std::endl;
	
	std::cout << "List size Before: "<<Val_int.size() << std::endl;

	Val_int.remove("intpass");

	std::cout << "List size After: " << Val_int.size() << std::endl << std::endl;

	Val_double.remove("floatpass");
	Val_string.remove("stringpass");
	Val_ptr.remove("ptrpass");

	std::cout << "Getting elements deleted from the lists: " << std::endl;

	Val_int.get("intpass");
	Val_double.get("floatpass");
	Val_ptr.get("ptrpass");
	std::cout << "Before Insert:" << std::endl;
	std::cout << Val_int.size() << std::endl;
	std::cout << Val_double.size() << std::endl;
	std::cout << Val_ptr.size() << std::endl;
	std::cout << Val_string.size() << std::endl << std::endl;


	Val_int.insert("intpass3213", 3332);
	Val_double.insert("floatpass315123", 950.2153);
	Val_string.insert("stringpass32321", "Hello3232");
	Val_ptr.insert("koo", Boop);

	std::cout << "After Insert:" << std::endl;
	std::cout << Val_int.size() << std::endl;
	std::cout << Val_double.size() << std::endl;
	std::cout << Val_ptr.size() << std::endl;
	std::cout << Val_string.size() << std::endl << std::endl;

	Val_int.insert("intpassui", 9999);
	std::cout << Val_int.get("intpassui") << std::endl;
	Val_int.get("intpass3213");


	std::cin.get();
}

void add_elements()
{
	Val_int.insert("intpass234", 12342);
	Val_int.insert("intpass232134", 12341232);
	Val_int.insert("intpass", 1);
	Val_string.insert("stringpass", "Hello");
	Val_double.insert("floatpass", 1.1);


	Val_ptr.insert("ptrpass", Boop);
	Val_ptr.insert("ptrpass12", Boop1);
	Val_ptr.insert("ptrpass345", Boop2);

	for (int i = 0; i < 200; i++)
	{
		std::string s = std::to_string(i);

		Val_int.insert("intpass90" + s, i);
		Val_double.insert("floatpass31" + s, i + .16);
		Val_string.insert("stringpass32" + s, "Hello32" + s);
	}
	
}