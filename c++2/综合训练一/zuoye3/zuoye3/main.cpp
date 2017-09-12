#include<iostream>
using namespace std;

void main()
{
	int a,b,x,y,z;
	cout<<"请输入任意一个三位整数：";
	cin>>a;
	b=a%100;
	x=b%10;
	y=(a-b)/100;
	z=(b-x)/10;
	cout<<"有高位到低位的顺序为："<< y << " " << z << " " <<x;
}