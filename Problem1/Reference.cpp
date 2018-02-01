#include "stdafx.h"
#include "Reference.h"


Reference::Reference()
{
	//countID++;
	ID = ++countID;
	publicYear = 2000;
	this->title = "New Title";
	this->author = "John Dow";
}

Reference::Reference(char* title, char * author, int pubYear):publicYear(pubYear)
{
	countID++;
	ID = countID;

	this->author = author;
	this->title = title;
}

void Reference::print()
{
	std::cout << this->ID << " " << this->title << "," << this->author << " " << this->publicYear << std::endl;
}


Reference::~Reference()
{
	delete this->author;
	//delete this->title;
}
