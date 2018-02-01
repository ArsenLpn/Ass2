// Problem2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Article.h"

#ifndef KEEP_LIVE																		//class for keeping console open after the end of execution
#define KEEP_LIVE
class KeepAlive
{
public:
	KeepAlive() {};
	~KeepAlive() {										//at the end when static object will be killed this destructor will hold the console window open
		std::cout << "Press enter to exit.";
		std::cin.get();
	};
};
#endif

int Reference::countID;									//init Reference ID counter
using namespace std;
void main()
{
	KeepAlive kl{};										//Pause before exiting

	Article *ar1 = new Article();

	
}

