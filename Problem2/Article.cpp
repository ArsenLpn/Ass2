#include "stdafx.h"
#include "Article.h"

using namespace std;
Article::Article()
{
	Reference::Reference();
	startPage = 0;
	endPage = 0;
	this->journal = "No info yet";
}


Article::~Article()
{
}


void Article::Print()
{
	cout << "\nInfo about the article bject:";
	Reference::print();
	cout << this->startPage << " to " << this->endPage << " pages.";
	cout << "\namount of pages: " << this->getNumberOfPages();
	cout << "\nInfo: " << this->journal;
}


Article::Article(int ID, char* author, char* title, int year, char* journal, int startPage, int endPage):Reference(title,author,year)
{
	this->ID = ID;
	this->startPage = startPage;
	this->endPage = endPage;
	this->journal = journal;
}
