//Exercise3-4.cpp
//by Pacnet-Netty (not a real name)


//C++ Pointers and Dynamic Memory Management
//Chapter 3, Exercise 4

//Goal: add long and string types to the print_type() function in Source 3.6

#include <iostream>
#include <string>
#include <iomanip>

//define some values which make the program more readable
#define INT 1 
#define FLOAT 2
#define STRING 3
#define LONG 4

using namespace std;

void print_type(void *vptr, int type) //print_type(void *, INT|FLOAT|STRING|LONG); void pointer needs to point to the address of the variable you want to print
{
	switch(type) 
	{ 
		case INT: //if it's supposed to be an integer
			cout << "Integer is " << *((int *)vptr) << endl; //print the value
			break;
		
		case FLOAT: //if it's supposed to be a float
			cout << "Float is " << *((float *)vptr) << endl; //print the value
			break;
		
		case STRING: //if it's supposed to be a string
			cout << "String is " << *((string *)vptr) << endl; //print the value
			break;

		case LONG: //if it's supposed to be a long
			cout << "Long is " << *((long *)vptr) << endl; //print the value
			break;
	}
}

int main(void)
{
	//define example values
	int myint = 10;  
	float myfloat = 3.14;
	string mystring = "examplestring";
	long mylong = 1234567890;
	//------------------------------------

	//Set void pointer to address of each example variable and print it based on its type
	//-----------------------------
	void *vptr = &myint;
	print_type(vptr, INT);
	//-----------------------------

	//-------------------------
	vptr = &myfloat;
	print_type(vptr, FLOAT);
	//-------------------------

	//---------------------------
	vptr = &mystring;
	print_type(vptr, STRING);
	//---------------------------

	//--------------------------
	vptr = &mylong;
	print_type(vptr, LONG);
	//------------------------

	system("PAUSE");

	return EXIT_SUCCESS;
}
