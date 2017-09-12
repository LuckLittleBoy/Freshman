#pragma once
#include"people.h"

class student:public people
{
public:
	student(void);
	student(int n,string str1,int id):
	people(n,str1),ID(id){}
	void setID(int m)
	{ID=m;}
	void displayID();
	~student(void);
private:
	int ID;
};

