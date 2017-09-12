#include<iostream>
#include<string>
using namespace std;

bool sym(string str)
{
	int i,t;
	t=str.length();
	for(i=0;i<t/2;i++)
		if(str.substr(i,1)!=str.substr(t-i-1,1))
			return false;

	return true;
}

void main()
{
	string str;
	cout<<"请输入一个字符串：";
	cin>>str;
	if(sym(str))
		cout<<"对称！";
	else
		cout<<"不对称！";
}