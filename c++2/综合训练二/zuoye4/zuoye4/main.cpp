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
	cout<<"������һ��������ݣ�";
	cin>>year;
	if(rui)
		cout<< year << "�����꣡";
	else
		cout<< year << "�������꣡";
}