#pragma once
#include "..\Problem1\Reference.h"
class Report :
	public Reference
{
public:
	Report();
	~Report();
private:
	char* department;
	char* institution;
public:
	Report(int id, char* author, char* title, int year, char* institution, char* department);
	char* getInstitution();
	char* getDepartment();
	void print();
};

