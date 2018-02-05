// Problem6.cpp : Defines the entry point for the console application.
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
	KeepAlive ka;

	//create new objects
	Thesis*th1 = new Thesis(24, "Some author", "some title", 2000, "institution", "department", 8, "supervisor", "degree");
	cout << "\nRun getNumberOfPages: " << th1->getNumberOfPages();
	cout << "\nRun getSupervisor: " << th1->getSupervisor();
	cout << "\nRun getDegree: " << th1->getDegree();

    return 0;
}

