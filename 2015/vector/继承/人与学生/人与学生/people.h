#pragma once
#include<string>
#include<iostream>
using namespace std;

class people
{
protected:
	int age;
	string name;
public:
	people(void);
	people(int,string);
	void setValue(int m,string str)
	{
		age=m;
		name=str;
	}
	void display();
	~people(void);

};
