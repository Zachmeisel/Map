#include "Source.h"
#include "Map.h"
#include "Heads.h"
#include "Header.h"
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
	Test * Boop1 = new Test;
	Test * Boop2 = new Test;
	

	Map<int> Val_int;
	Map<float> Val_double;
	Map<std::string> Val_string;
	Map<Test*> Val_ptr;

	Val_int.insert("intpass234", 12342);
	Val_int.insert("intpass232134", 12341232);
	Val_int.insert("intpass", 1);
	Val_string.insert("stringpass", "Hello");
	Val_double.insert("floatpass", 1.1);
	

	Val_ptr.insert("ptrpass", Boop);
	Val_ptr.insert("ptrpass12", Boop1);
	Val_ptr.insert("ptrpass345", Boop2);
	Val_int.insert("intpass1", 2);
	Val_double.insert("floatpass1", 1.2);
	Val_string.insert("stringpass1", "Hello1");

	Val_int.insert("intpass2", 3);
	Val_double.insert("floatpass2", 1.3);
	Val_string.insert("stringpass2", "Hello2");

	Val_int.insert("intpass3", 4);
	Val_double.insert("floatpass3", 1.4);
	Val_string.insert("stringpass3", "Hello3");

	Val_int.insert("intpass4", 5);
	Val_double.insert("floatpass4", 1.5);
	Val_string.insert("stringpass4", "Hello4");

	Val_int.insert("intpass5", 6);
	Val_double.insert("floatpass5", 1.6);
	Val_string.insert("stringpass5", "Hello5");

	Val_int.insert("intpass6", 7);
	Val_double.insert("floatpas6", 1.7);
	Val_string.insert("stringpass6", "Hello6");

	Val_int.insert("intpass7", 8);
	Val_double.insert("floatpass7", 1.8);
	Val_string.insert("stringpass7", "Hello7");

	Val_int.insert("intpass8", 9);
	Val_double.insert("floatpass8", 1.9);
	Val_string.insert("stringpass8", "Hello8");

	Val_int.insert("intpass9", 10);
	Val_double.insert("floatpass9", 2.1);
	Val_string.insert("stringpass9", "Hello9");

	Val_int.insert("intpass10", 11);
	Val_double.insert("floatpass10", 3.1);
	Val_string.insert("stringpass10", "Hello10");

	Val_int.insert("intpass11", 12);
	Val_double.insert("floatpass11", 4.1);
	Val_string.insert("stringpass11", "Hello11");

	Val_int.insert("intpass12", 13);
	Val_double.insert("floatpass12", 5.1);
	Val_string.insert("stringpass12", "Hello12");

	Val_int.insert("intpass13", 14);
	Val_double.insert("floatpas13", 6.1);
	Val_string.insert("stringpass13", "Hello13");

	Val_int.insert("intpass14", 15);
	Val_double.insert("floatpas14", 7.1);
	Val_string.insert("stringpass14", "Hello14");

	Val_int.insert("intpass15", 16);
	Val_double.insert("floatpass14", 8.1);
	Val_string.insert("stringpass15", "Hello15");

	Val_int.insert("intpass16", 17);
	Val_double.insert("floatpas15", 9.1);
	Val_string.insert("stringpass16", "Hello16");

	Val_int.insert("intpass17", 18);
	Val_double.insert("floatpass16", 10.1);
	Val_string.insert("stringpass17", "Hello17");

	Val_int.insert("intpass18", 19);
	Val_double.insert("floatpass17", 11.1);
	Val_string.insert("stringpass18", "Hello18");

	Val_int.insert("intpass19", 20);
	Val_double.insert("floatpass18", 12.1);
	Val_string.insert("stringpass19", "Hello19");

	Val_int.insert("intpass20", 21);
	Val_double.insert("floatpass19", 13.1);
	Val_string.insert("stringpass20", "Hello20");

	Val_int.insert("intpass21", 22);
	Val_double.insert("floatpass20", 14.1);
	Val_string.insert("stringpass21", "Hello21");

	Val_int.insert("intpass22", 23);
	Val_double.insert("floatpass21", 15.1);
	Val_string.insert("stringpass22", "Hello22");

	Val_int.insert("intpass23", 24);
	Val_double.insert("floatpass22", 16.1);
	Val_string.insert("stringpass23", "Hello23");

	Val_int.insert("intpass24", 25);
	Val_double.insert("floatpass23", 17.1);
	Val_string.insert("stringpass24", "Hello24");

	Val_int.insert("intpass25", 26);
	Val_double.insert("floatpass24", 18.1);
	Val_string.insert("stringpass25", "Hello25");

	Val_int.insert("intpass26", 27);
	Val_double.insert("floatpass25", 19.1);
	Val_string.insert("stringpass26", "Hello26");

	Val_int.insert("intpass27", 28);
	Val_double.insert("floatpass26", 20.1);
	Val_string.insert("stringpass27", "Hello27");

	Val_int.insert("intpass28", 29);
	Val_double.insert("floatpass27", 1.11);
	Val_string.insert("stringpass28", "Hello28");

	Val_int.insert("intpass29", 30);
	Val_double.insert("floatpass28", 1.12);
	Val_string.insert("stringpass29", "Hello29");

	Val_int.insert("intpass30", 31);
	Val_double.insert("floatpass29", 1.13);
	Val_string.insert("stringpass30", "Hello30");

	Val_int.insert("intpass31", 32);
	Val_double.insert("floatpass30", 1.14);
	Val_string.insert("stringpass31", "Hello31");

	Val_int.insert("intpass32", 33);
	Val_double.insert("floatpass31", 1.15);
	Val_string.insert("stringpass32", "Hello32");


	std::cout << Val_int.get("intpass") << std::endl;
	std::cout << Val_double.get("floatpass") << std::endl;
	std::cout << Val_string.get("stringpass") << std::endl;
	std::cout << Val_ptr.get("ptrpass") << std::endl;
	
	std::cout << "List size Before: "<<Val_int.size() << std::endl;

	Val_int.remove("intpass");

	std::cout << "List size After: " << Val_int.size() << std::endl;

	Val_double.remove("floatpass");
	Val_double.remove("floatpass");
	Val_string.remove("stringpass");
	Val_ptr.remove("ptrpass");

	Val_int.get("intpass");
	Val_double.get("floatpass");
	Val_ptr.get("ptrpass");
	std::cout << "Before Insert:" << std::endl;
	std::cout << Val_int.size() << std::endl;
	std::cout << Val_double.size() << std::endl;
	std::cout << Val_ptr.size() << std::endl;
	std::cout << Val_string.size() << std::endl;


	Val_int.insert("intpass3213", 3332);
	Val_double.insert("floatpass31123", 1.153);
	Val_string.insert("stringpass32321", "Hello3232");
	Val_ptr.insert("koo", Boop);
	std::cout << "After Insert:" << std::endl;
	std::cout << Val_int.size() << std::endl;
	std::cout << Val_double.size() << std::endl;
	std::cout << Val_ptr.size() << std::endl;
	std::cout << Val_string.size() << std::endl;


	std::cin.get();
}
