#include<iostream>
#include<string>
using namespace std;

void main()
{
    string s,t,k;
	int i,j;
	cout<<"������һ���ַ�����";
	cin>>s;
	cout<<"��������Ҫ������ַ�����";
	cin>>t;
	cout<<"����������λ�ã�";
	cin>>i;
	j=s.length();
	if(i>=j)
	{
		cout<<"���������������������λ�ã�";
		cin>>i;
	}
	else
		k=s.insert(i,t);
	cout<< k <<endl;
}