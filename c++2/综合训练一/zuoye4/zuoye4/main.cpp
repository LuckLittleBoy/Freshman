#include<iostream>
using namespace std;

void main()
{
	char i1;
	cout<<"请输入任意一个字符：";
	cin>>i1;
	if(i1<='9'&&i1>='0')
		cout<<"YES";
	else
		cout<<"NO";
}