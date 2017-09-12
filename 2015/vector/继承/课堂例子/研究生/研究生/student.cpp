#include "student.h"

student::student(void)
{
}

student::~student(void)
{
}

void student::setvalues(int n, std::string str, char c)
{
	num=n;
	name=str;
	sex=c;
}

void student::display()
{
	cout << num << " " << name << " " << sex << endl;
}