#include "stdafx.h"
#include "TechReport.h"


TechReport::TechReport():Report::Report()						//default constructor
{
	this->URL="www.net";
}


TechReport::~TechReport()
{
}


TechReport::TechReport(											//regular constructor
	int id,
	char* author,
	char* title,
	int year,
	char* institution,
	char* department,
	char* url):Report::Report(id,author,title,year,institution,department)
{
	this->URL = url;
}


char* TechReport::getUrl()
{
	return this->URL;
}


int TechReport::getNumberOfPages()
{
	return 1;
}


void TechReport::print()
{
	std::cout << "\nReport members: "<< this->getDepartment() << " " << this->getInstitution();
}
