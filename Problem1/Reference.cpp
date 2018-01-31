#include "stdafx.h"
#include "Reference.h"


Reference::Reference()
{
	countID++;
	ID = countID;
	publicYear = 2000;
	std::string tString = "New Title" + ID;
	this->title = tString;
	this->author = "John Dow";
}

Reference::Reference(std::string title, char * author, int pubYear):publicYear(pubYear)
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
