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
private:
	std::string infoJournal;
	int startPage;
	int endPage;
public:
	void PrintInfo();
};

#endif // !ARTICLE_H