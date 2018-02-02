#pragma once
#include "..\Problem1\Reference.h"
#include "stdafx.h"

#ifndef ARTICLE_H
#define ARTICLE_H

class Article :
	public Reference
{
public:
	Article();
	~Article();
	void Print();
	Article(int ID, char* author, char* title, int year, char* journal, int startPage, int endPage);
private:
	char* journal;
	int startPage;
	int endPage;
public:

	char* getJournal() { return this->journal; };
	int getStartPage() { return this->startPage; };
	int getEndPage() { return this->endPage; };
	int getNumberOfPages() { return this->endPage - this->startPage; };
};

#endif // !ARTICLE_H