#include"add.h"

void main()
{
	add a,b;
	double r,i;
	complex c;
	cout<<"�����븴����ʵ�����鲿��";
	cin>>r>>i;
	a.setValue(r,i);
	cout<<"�����븴����ʵ�����鲿��";
	cin>>r>>i;
	b.setValue(r,i);
	cout<<"��������ӵã�"<<endl;
	cout<<c.Add(a.getReal(),b.getReal())<<"+"<<c.Add(a.getImag(),b.getImag())<<"i";
}