#include<iostream>
using namespace std;

int bits(int a)
{
	int k;
	for(k=0;a!=0;)
	{
		a=a/10;
		k++;
	}
	return k;
}

void main()
{
	int i;
	cout<<"������һ��������";
	cin>>i;
	if(i%2==0)
	{
		int j=bits(i);
		cout<< i << "Ϊż��"<< "," << j << "λ��"<<endl;
	}
	else
	{
		if(i%3==0)
			cout<< i << "Ϊ����"<< "," << "��3�ı���"<<endl;
		else
			cout<< i << "Ϊ����"<< "," << "����3�ı���"<<endl;
	}
}