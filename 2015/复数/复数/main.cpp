#include"add.h"

void main()
{
	add a,b;
	double r,i;
	complex c;
	cout<<"请输入复数的实部和虚部：";
	cin>>r>>i;
	a.setValue(r,i);
	cout<<"请输入复数的实部和虚部：";
	cin>>r>>i;
	b.setValue(r,i);
	cout<<"两复数相加得："<<endl;
	cout<<c.Add(a.getReal(),b.getReal())<<"+"<<c.Add(a.getImag(),b.getImag())<<"i";
}