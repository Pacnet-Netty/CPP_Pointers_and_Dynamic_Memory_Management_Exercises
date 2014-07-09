//Exercise3-2.cpp
//by Bharath Hegde

//C++ Pointers and Dynamic Memory Management
//Chapter 3
//Exercise 2

//Goal: Write a simpler way to assign myint to yourint in Source 3.3

#include <iostream>

int myint = 10; //myint is 10
int yourint; //yourint is null

int main(void)
{
	yourint = myint; //assign myint to yourint. that was pretty simple wasn't it?

	std::cout << "yourint - " << yourint << "\nmyint - " << myint << std::endl; //print values

	system("PAUSE");

	return EXIT_SUCCESS; //return 0 (VC++ 11) since it's successful
}