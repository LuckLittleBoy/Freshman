#include<iostream>
using namespace std;

void main()
{
	int a,b,x,y,z;
	cout<<"����������һ����λ������";
	cin>>a;
	b=a%100;
	x=b%10;
	y=(a-b)/100;
	z=(b-x)/10;
	cout<<"�и�λ����λ��˳��Ϊ��"<< y << " " << z << " " <<x;
}