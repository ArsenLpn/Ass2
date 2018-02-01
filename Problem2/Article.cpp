#include "stdafx.h"
#include "Article.h"

using namespace std;
Article::Article()
{
	Reference::Reference();
	startPage = 0;
	endPage = 0;
	this->infoJournal = "No info yet";
}


Article::~Article()
{
}


void Article::PrintInfo()
{
	cout << "\nInfo about the article bject:";
	
}
