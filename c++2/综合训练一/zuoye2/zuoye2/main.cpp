#include<iostream>
using namespace std;

void main()
{
	char i1,i2,i3;
	int a;
	cout<<"����������һ���ַ���";
	cin>>i1;
	a=int(i1);
	i2=char(a+1);
	i3=char(a-1);
	cout<< i1 << "��ǰһ���ַ�Ϊ��" << i3 << "��һ���ַ�Ϊ��"<< i2 <<endl; 
}