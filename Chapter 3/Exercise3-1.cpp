//Exercise3-1.cpp
//by Bharath Hegde

//C++ Pointers and Dynamic Memory Management
//Chapter 3
//Exercise 1

//Goal: Assign the integer value of mychar into myint using chat_ptr

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	char mychar = 'A'; //declare the mychar character as 'A'
	int myint; //declare the myint integer as null
	char * char_ptr = &mychar; //declare a char pointer called char_ptr that points to the address of mychar

	myint = (int)*char_ptr; //set the value of myint to the deref

	//Print results

	cout << "mychar = " << mychar << endl;

	cout << "myint = " << myint << endl;

	cout << "*char_ptr = " << *char_ptr << endl;

	//Pause program
	system("PAUSE");

	//Return 0 if successful (visual c++)
	return EXIT_SUCCESS;
}
