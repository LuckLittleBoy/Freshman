#include<iostream>
#include<string>
#include"Student.h"
using namespace std;

void student::Input(int a, string str)
{
	cout<<"������ѧ���������������";
	cin>>a>>str;
}

void student::Output(student x)
{
	cout << "���䣺" << x.age << "������" << name << endl;
}