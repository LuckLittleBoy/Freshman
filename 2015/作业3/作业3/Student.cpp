#include<iostream>
#include<string>
#include"Student.h"
using namespace std;

void student::Input(int a, string str)
{
	cout<<"请输入学生的年龄和姓名：";
	cin>>a>>str;
}

void student::Output(student x)
{
	cout << "年龄：" << x.age << "姓名：" << name << endl;
}