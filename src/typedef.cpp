#include<iostream>
int typeDef()
{
	//used to define and existing data types
	
	/*
	syntax:
			type def current_name new_name;
	*/

	typedef float nana;
	nana a;
	a = 30.0f;
	std::cout << a;
	//cant create a data type on its own 
	return 0;
}