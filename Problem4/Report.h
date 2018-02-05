#pragma once
#include "..\Problem1\Reference.h"

#ifndef REPORT_H
#define REPORT_H
class Report :
	public Reference
{
public:
	Report();												//default constructor
	Report(int id, char* author, char* title, int year, char* institution, char* department);	//custom constructor
	char* getInstitution();									//return institution variable
	char* getDepartment();									//return department var.
	void print();											//override inherited print()
	~Report();												//destructor
private:													//Variables for this class
	char* department;
	char* institution;
};
#endif // !REPORT_H