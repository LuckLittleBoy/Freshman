#include<iostream>
#include"point.h"
using namespace std;

void point::input()
{
	cout<<"请输入坐标x,y,z:";
	cin>>x>>y>>z;
}

void point::output()
{
	double b;
	b=x*x+y*y+z*z;
	cout<<"坐标：";
	cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
	cout<<"距原点距离为：";
	cout<<sqrt(b);
}