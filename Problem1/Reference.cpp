#include "stdafx.h"
#include "Reference.h"


Reference::Reference()
{
	ID = ++countID;
	publicYear = 2000;
	this->title = "New Title";
	this->author = "John Dow";
}

Reference::Reference(char* title, char * author, int pubYear):publicYear(pubYear)
{
	ID = ++countID;

	this->author = author;
	this->title = title;
}

void Reference::print()
{
	std::cout << "\n" << this->ID << " " << this->title << ", " << this->author << " " << this->publicYear << std::endl;
}


Reference::~Reference()
{
	//delete this->author;						//how the hell do I clean after dinamic allocation
												//this cases exception when there is nothing in main()
	//delete this->title;
}
