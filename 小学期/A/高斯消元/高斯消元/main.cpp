#include"gaosi.h"
#include<iostream>
using namespace std;

void main()
{
	int n;
	gaosi g1;

	cout<<"请输入计算方程组的方程个数以及未知数的个数n:"<<endl;
	cin>>n;
	
	g1.set(n);
	g1.huasanjiao();
	g1.display();
	g1.jie();
}