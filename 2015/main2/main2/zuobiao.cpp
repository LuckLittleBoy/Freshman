#include<iostream>
#include<cmath>
using namespace std;

struct coordinate
{
	double x,y,z;
};

coordinate Input()
{
	coordinate i;
	cout<<"������һ����ά���꣺";
	cin>>i.x>>i.y>>i.z;
	return i;
}

double range(coordinate a,coordinate b)
{
	double c,d;
	c=(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z);
	d=sqrt(c);
	return d;
}

void Output(double a)
{
	cout<<"������֮��ľ���Ϊ��"<<a;
}

void main()
{
	coordinate a,b;
	a=Input();
	b=Input();
	Output(range(a,b));
}