#include<iostream>
#include"point.h"
using namespace std;

void main()
{
	point a;
	a.input();
	cout<<"x����Ϊ��"<<a.showx();
	cout<<"y����Ϊ��"<<a.showy();
	cout<<"z����Ϊ��"<<a.showz();
	cout<<endl;
	a.output();
}