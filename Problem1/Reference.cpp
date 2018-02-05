#include "stdafx.h"
#include "Reference.h"


Reference::Reference()						//default constructor
{
	ID = ++countID;
	publicYear = 2000;
	this->title = "New Title";
	this->author = "John Dow";
}

Reference::Reference(						//regular constructor
	char* title,
	char* author,
	int pubYear):publicYear(pubYear)
{
	ID = ++countID;

	this->author = author;
	this->title = title;
}

void Reference::print()						//reference output
{
	std::cout << "\n" << this->ID << " " << this->title << ", " << this->author << " " << this->publicYear << std::endl;
}


Reference::~Reference()
{
	//delete this->author;			//how the hell do I clean after dinamic allocation
									//this causes exception when there is nothing in main() => no declaration of objects in the first place
	//delete this->title;
}
