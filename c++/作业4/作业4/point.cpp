#include<iostream>
#include"point.h"
using namespace std;

void point::input()
{
	cout<<"����������x,y,z:";
	cin>>x>>y>>z;
}

void point::output()
{
	double b;
	b=x*x+y*y+z*z;
	cout<<"���꣺";
	cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
	cout<<"��ԭ�����Ϊ��";
	cout<<sqrt(b);
}