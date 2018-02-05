#include "stdafx.h"
#include "Report.h"


Report::Report():Reference::Reference()							//default constructor
{
	this->department = "Default dep.";
	this->institution = "Default institution";
}


Report::~Report()
{
}


Report::Report(
	int id,
	char* author,
	char* title,
	int year,
	char* institution,
	char* department):Reference::Reference(title,author,year)
{						//Init base class constructr with given parameters in the initialisation list
	this->ID = id;							//overwrite unique ID
	this->institution = institution;		//set institution
	this->department = department;			//set department
}


char* Report::getInstitution()
{
	return this->institution;
}


char* Report::getDepartment()
{
	return this->department;
}


void Report::print()
{
	Reference::print();										//call the base class print function and add extra info from this class
	std::cout << "\nInstitution: " << this->getInstitution();
	std::cout << "\nDepartment: " << this->getDepartment();

}
