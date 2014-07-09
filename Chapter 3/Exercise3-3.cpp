//Exercise3-3.cpp
//by Bharath Hegde

//C++ Pointers and Dynamic Memory Management
//Chapter 3
//Exercise 3

//Goal: Use void pointers to represent the bases in a baseball diamond. 
//Pointing path: home base -> first base -> second base -> third base -> integer which equals 10
//Set up void pointers to create this and dereference each pointer to that integer value. 
//Then do it with integer pointers.

#include <iostream>

using namespace std;

//Task 1: declare void pointers
void * homeBase;
void * firstBase;
void * secondBase;
void * thirdBase;


//Task 2: declare integer pointers and pointer-to-pointers 
int **** homeBaseInt;
int *** firstBaseInt;
int ** secondBaseInt;
int * thirdBaseInt;

int myint = 10; //the integer value that it all points to


int main(void)
{
	//Task 1 execution: point the void pointers in the right sequence
	thirdBase = &myint;
	secondBase = &thirdBase;
	firstBase = &secondBase;
	homeBase = &firstBase;

	///Print the dereferenced values of the pointers
	cout << "thirdBase: " << *(int *)thirdBase << endl;

	cout << "secondBase: " << **(int **)secondBase << endl;

	cout << "firstBase: " << ***(int ***)firstBase << endl;

	cout << "homeBase: " << ****(int ****)homeBase << endl;

	//-------------------------------------------------------

	//Make a new line to seperate Task 1 from Task 2
	cout << endl;

	//Task 2 execution: point the pointers to each other in the right sequence
	thirdBaseInt = &myint;
	secondBaseInt = &thirdBaseInt;
	firstBaseInt = &secondBaseInt;
	homeBaseInt = &firstBaseInt;


	//Print the dereferenced values
	cout << "thirdBaseInt: " << *thirdBaseInt << endl;
 
	cout << "secondBaseInt: " << **secondBaseInt << endl;

	cout << "firstBaseInt: " << ***firstBaseInt << endl;
 
	cout << "homeBaseInt: " << ****homeBaseInt << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}