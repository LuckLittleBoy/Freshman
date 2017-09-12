#include<iostream>
using namespace std;

bool rui(int n)
{
	bool flag=0;
	if(n%400==0||n%4==0&&n%100!=0)
		flag=1;
	return flag;
}

void main()
{
	int year;
	cout<<"请输入一个整型年份：";
	cin>>year;
	if(rui)
		cout<< year << "是瑞年！";
	else
		cout<< year << "不是瑞年！";
}