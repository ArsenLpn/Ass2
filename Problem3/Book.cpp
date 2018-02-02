#include "stdafx.h"
#include "Book.h"


Book::Book()
{
	numberOfPages = 0;
	this->publisher = "Default publisher";
}


Book::~Book()
{
}


Book::Book(int id, char* author, char* title, int year, char* publisher, int pages):Reference::Reference(title,author,year)
{
	this->ID = id;
	this->publisher = publisher;
	this->numberOfPages = pages;
}

void Book::print()
{
	std::cout << "\nInformation about the book:";
	Reference::print();
	std::cout << "Publisher is: " << this->publisher;
	std::cout << "\nNumber of pages: " << this->numberOfPages;
}
