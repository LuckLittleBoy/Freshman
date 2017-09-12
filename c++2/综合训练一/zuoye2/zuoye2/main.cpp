#include<iostream>
using namespace std;

void main()
{
	char i1,i2,i3;
	int a;
	cout<<"请输入任意一个字符：";
	cin>>i1;
	a=int(i1);
	i2=char(a+1);
	i3=char(a-1);
	cout<< i1 << "的前一个字符为：" << i3 << "后一个字符为："<< i2 <<endl; 
}