#include<iostream>
#include<string>
using namespace std;

void main()
{
    string s,t,k;
	int i,j;
	cout<<"请输入一个字符串：";
	cin>>s;
	cout<<"请输入所要插入的字符串：";
	cin>>t;
	cout<<"请输入插入的位置：";
	cin>>i;
	j=s.length();
	if(i>=j)
	{
		cout<<"插入错误！请重新输入插入的位置：";
		cin>>i;
	}
	else
		k=s.insert(i,t);
	cout<< k <<endl;
}