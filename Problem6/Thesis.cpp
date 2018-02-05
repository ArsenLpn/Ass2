#include "stdafx.h"
#include "Thesis.h"


Thesis::Thesis():Report::Report()
{
	numberOfPages = 0;
	superviser = "TBA";
	degree = "N/A";
}


Thesis::~Thesis()
{
}


Thesis::Thesis(
	int id,
	char* author,
	char* title, 
	int year, 
	char* institution, 
	char* department, 
	int pages, 
	char* supervisor, 
	char* degree):Report::Report(id,author,title,year,institution,department)
{
	this->numberOfPages = pages;
	this->superviser = supervisor;
	this->degree = degree;
}


int Thesis::getNumberOfPages()
{
	return this->numberOfPages;
}


char* Thesis::getSupervisor()
{
	return this->superviser;
}


char* Thesis::getDegree()
{
	return this->degree;
}


void Thesis::print()
{
	std::cout << "\nReport objects:\nInstitution: " << this->getInstitution()
		<< ", department: " << this->getDepartment();
}
