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
	cout<<"请输入一个整数：";
	cin>>i;
	if(i%2==0)
	{
		int j=bits(i);
		cout<< i << "为偶数"<< "," << j << "位数"<<endl;
	}
	else
	{
		if(i%3==0)
			cout<< i << "为奇数"<< "," << "是3的倍数"<<endl;
		else
			cout<< i << "为奇数"<< "," << "不是3的倍数"<<endl;
	}
}