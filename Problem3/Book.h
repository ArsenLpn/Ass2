#pragma once
#include "..\Problem1\Reference.h"														//Relative reference to Reference class in problem 1

#ifndef BOOK_H
#define BOOK_H
class Book :
	public Reference
{
public:
	Book();
	Book(int id, char* author, char* title, int year, char* publisher, int pages);
	int getNumberOfPages() { return this->numberOfPages; };
	void print();
	~Book();
private:
	char* publisher;
	int numberOfPages;

};
#endif // !BOOK_H