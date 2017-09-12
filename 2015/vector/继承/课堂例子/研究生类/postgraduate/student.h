#pragma once
#include <string>
#include <iostream>
using namespace std;

class student
{
public:
	student(void);
	student(int n, string str, char c);
	~student(void);
	void setValues(int n, string str, char c);
	void display();

private:
	int num;
	string name;
	char sex;
};
