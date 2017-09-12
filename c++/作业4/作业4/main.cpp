#include<iostream>
#include"point.h"
using namespace std;

void main()
{
	point a;
	a.input();
	cout<<"x坐标为："<<a.showx();
	cout<<"y坐标为："<<a.showy();
	cout<<"z坐标为："<<a.showz();
	cout<<endl;
	a.output();
}