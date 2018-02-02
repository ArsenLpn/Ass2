// Problem1.cpp : Defines the entry point for the console application.
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

int Reference::countID;

using namespace std;
int main()
{
	KeepAlive kp{};
	cout << "Create two references r1, r2";											//Create two objet of Reference
	Reference*r1 = new Reference();
	Reference*r2 = new Reference("Different title", "Jane Dow", 2001);

	cout << "\nGet functions:";														//Test get functions
	cout << "\nr2 ID is: " << r2->getID();
	cout << "\nr2 author: " << r2->getAuthor();
	cout << "\nr2 title:" << r2->GetTitle();
	cout << "\nr2 year: " << r2->getYear();
	
	cout << "\n\nPrint two references:\n";											//test print functions
	r1->print();
	r2->print();



    return 0;
}

