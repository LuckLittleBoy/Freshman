#include<iostream>
using namespace std;

struct complex
{
	double real,image;
};

complex input()
{
	complex x;
	cout<<"������һ��������ʵ�����鲿��";
	cin>>x.real>>x.image;
	return x;
}

complex mul(complex x,complex y)
{
	complex z;
	z.real=x.real*y.real-x.image*y.image;
	z.image=x.image*y.real+x.real*y.image;
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
	cout<<"��������˵ã�";
	output(mul(a,b));
}