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

using namespace std;
int main()
{
	KeepAlive kp;										//pause the console at the end

	Report*r1 = new Report(22, "Harry Franckfurt", "On Bullshit", 2005, "Princeton University", "Philosophy");

	cout << "\nFunctions(2): ";
	cout << "\nInstitution: " << r1->getInstitution();
	cout << "\nDepartment: " << r1->getDepartment();

	cout << "\nprint(): ";
	r1->print();
	


    return 0;
}

