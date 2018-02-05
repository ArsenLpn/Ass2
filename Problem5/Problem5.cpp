// Problem5.cpp : Defines the entry point for the console application.
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
	KeepAlive kp;
	
	cout << "\nCreate new objects.";					//Create obj with regular constructor
	TechReport*tr1 = new TechReport(
		5,
		"George Orwell", 
		"1984", 
		1949, 
		"Some institution", 
		"Some department", 
		"www.net");

	cout << "\nURL is: " << tr1->getUrl() << " , number of pages is: " << tr1->getNumberOfPages();
	cout << "\nRun print(): ";
	tr1->print();

    return 0;
}

