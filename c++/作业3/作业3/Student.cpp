#include<iostream>
#include "Student.h"
using namespace std;

void student::input()
{
	int a;
	string b;
	cout<<"������ѧ���������������"<<endl;
	cin>>a>>b;
	age=a;
	name=b;
}

void student::output()
{
	cout << age << name << endl;
}