#pragma once
#include "..\Problem4\Report.h"
class TechReport :
	public Report
{
public:
	TechReport();
	TechReport(int id, char* author, char* title, int year, char* institution, char* department, char* url);
	char* getUrl();
	int getNumberOfPages();
	void print();
	~TechReport();
private:
	char* URL;
};

