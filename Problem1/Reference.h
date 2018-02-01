#pragma once
#include "stdafx.h"

#ifndef REF1_H
#define REF1_H

class Reference
{
public:
	static int countID;												//static member to keep track of unique IDs for each object
	Reference();
	Reference(char* title, char* author, int pubYear);
	void print();
	~Reference();
	/**************************Getters**********************/
	const int getID() { return this->ID; };
	const char* getAuthor() { return this->author; };
	const char* getTitle() { return this->title; };
	const int getYear() { return this->publicYear; };
	const std::string GetTitle() { return this->title; };
	///////////////////////////////////////////////////////


private:
	int ID;															//Unique ID
	char* title;
	char* author;
	int publicYear;
};
#endif
