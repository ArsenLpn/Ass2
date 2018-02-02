// Problem3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#ifndef KEEP_LIVE																		//class for keeping console open after the end of execution
#define KEEP_LIVE
class KeepAlive
{
public:
	KeepAlive() {};
	~KeepAlive() {										//at the end when static object will be killed this destructor will hold the console window open
		std::cout << "\nPress enter to exit.";
		std::cin.get();
	};
};
#endif

int Reference::countID;																		//count IDs from entire Reference class
using namespace std;
int main()
{
	KeepAlive pk;

	Book*b1 = new Book(27, "John D", "Some title", 2000, "Publisher", 100);				//Create new Book obj with b1 pointer

	cout << "\nRunning getNumberOfPages():\n\t" << b1->getNumberOfPages();					//getNumberOfPages()
	
	cout << "\nRunning print():\n ";
	b1->print();																			//print()

    return 0;
}

