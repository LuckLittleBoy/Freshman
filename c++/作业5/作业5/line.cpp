#include<iostream>
#include<cmath>
#include"line.h"
using namespace std;

void point::Input()
{
	cin>>x>>y>>z;
}
void line::input()
{
	cout<<"请输入两个坐标（x,y,z）:";
	i.Input();
	j.Input();
}
void line::output()
{
	double z;
	z=(i.x-j.x)*(i.x-j.x)+(i.y-j.y)*(i.y-j.y)+(i.z-j.z)*(i.z-j.z);
	cout<<"线段长度为："<<sqrt(z);
}
