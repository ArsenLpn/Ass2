#pragma once
#include "..\Problem4\Report.h"
class Thesis :
	public Report
{
public:
	Thesis();
	Thesis(int id, char* author, char* title, int year, char* institution, char* department, int pages, char* supervisor, char* degree);
	~Thesis();
private:
	int numberOfPages;
	char* superviser;
	char* degree;
public:
	int getNumberOfPages();
	char* getSupervisor();
	char* getDegree();
	void print();
};

