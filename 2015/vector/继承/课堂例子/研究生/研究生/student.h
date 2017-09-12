#pragma once
#include<string>
#include<iostream>
using namespace std;

class student
{
public:
	student(void);
	~student(void);
	void setvalues(int n,string str,char c);
	void display();
private:
	int num;
	string name;
	char sex;
};
