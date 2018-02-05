// Problem4.cpp : Defines the entry point for the console application.
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
	KeepAlive kp;										//pause the console at the end

	Report*r1 = new Report(22, "Harry Franckfurt", "On Bullshit", 2005, "Princeton University", "Philosophy");	//crate a new Report obj. using regular constructor

	cout << "\nFunctions(2): ";							//test build in functions
	cout << "\nInstitution: " << r1->getInstitution();	//getInstitution()
	cout << "\nDepartment: " << r1->getDepartment();	//getDepartment()

	cout << "\nprint(): ";
	r1->print();										//overriden function print()
	


    return 0;
}

