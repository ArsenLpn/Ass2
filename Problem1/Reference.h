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
	int getID() const { return this->ID; };
	char* getAuthor() const { return this->author; };
	char* getTitle() const { return this->title; };
	int getYear() const { return this->publicYear; };
	char* GetTitle() const { return this->title; };
	///////////////////////////////////////////////////////
	void setID(int id) { this->ID = id; };
	void setTitle(char* t) { this->title = t; };
	void setAuthor(char* a) { this->author = a; };
	
protected:
	int ID;
private:												//Unique ID
	char* title;
	char* author;
	int publicYear;
};
#endif
