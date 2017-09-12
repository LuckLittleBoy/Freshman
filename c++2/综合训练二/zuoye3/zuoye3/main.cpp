#include<iostream>
using namespace std;

void fun(int m,int n,int*p,int*q)
{
	int i;
	for(i=1;i<m;i++)
		if(m%i==0&&n%i==0)
			*p=i;
	*q=m*n/ *p;
}

int main()
{
	int m,n,a,b;

	cout<<"请输入两个整数:";
	cin>>m>>n;

	fun(m,n,&a,&b);

	cout<< m <<"与"<< n <<"的最大公约数是："<< a <<"最小公倍数是："<< b <<endl;

	return 0;
}