#include "student.h"

student::student(void)
{
}

student::student(int n, string str, char c)
{
	num = n;
	name = str;
	sex = c;
}

student::~student(void)
{
}

void student::setValues(int n, string str, char c)
{
	num = n;
	name = str;
	sex = c;
}

void student::display()
{
	cout << num << " " << name << " " << sex << endl;
}
