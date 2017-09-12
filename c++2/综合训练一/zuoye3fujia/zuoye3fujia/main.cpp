#include<iostream>
using namespace std;

void main()
{
	int i,k,a,*b,c;	
	cout<<"请输入任意一个整数：";
	cin>>a;
	c=a;
    for(k=0;c!=0;)
	{
		c=c/10;
		k++;
	}
	b=new int[k];
	for(i=0;a!=0;i++)
	{
		b[i]=a%10;
		a=a/10;
	}

	cout<<"有高位到低位的顺序为："<<endl;
	for(i=k-1;i>=0;i--)
		cout<<b[i]<<" ";

	delete[]b;
}