#include "line.h"
#include<iostream>
using namespace std;

void distance(line a)
{
	cout<<a.output();
}
void main()
{
	line x;
	cout<<" 请输入两个坐标：";
	x.input();
	distance(x);
}