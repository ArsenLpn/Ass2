#include "stdafx.h"
#include "Report.h"


Report::Report()
{
}


Report::~Report()
{
}


Report::Report(int id, char* author, char* title, int year, char* institution, char* department):Reference::Reference(title,author,year)
{
	this->ID = id;
	this->institution = institution;
	this->department = department;
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
	Reference::print();
	std::cout << "\nInstitution: " << this->getInstitution();
	std::cout << "\nDepartment: " << this->getDepartment();

}
