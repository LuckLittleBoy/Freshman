#include<iostream>
using namespace std;

struct complex
{
	double real,image;
};

complex input()
{
	complex x;
	cout<<"请输入一个复数的实部和虚部：";
	cin>>x.real>>x.image;
	return x;
}

complex minus(complex x,complex y)
{
	complex z;
	z.real=x.real-y.real;
	z.image=x.image-y.image;
	return z;
}

void output(complex x)
{
	cout<<x.real<<"+";
	cout<<x.image<<"i"<<endl;
}

void main()
{
	complex a,b;
	a=input();
	b=input();
	cout<<"两复数相减得：";
	output(minus(a,b));
}