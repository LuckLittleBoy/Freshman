#include<iostream>
using namespace std;

bool rui(int n)
{
	if(n%400==0||n%4==0&&n%100!=0)
		return true;
	else
		return false;
}

void main()
{
	int year;
	cout<<"������һ����ݣ�";
	cin>>year;
	if(rui(year))
		cout << year << "�����꣡";
	else
		cout << year << "�������꣡";
}