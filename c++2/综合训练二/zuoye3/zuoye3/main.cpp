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

	cout<<"��������������:";
	cin>>m>>n;

	fun(m,n,&a,&b);

	cout<< m <<"��"<< n <<"�����Լ���ǣ�"<< a <<"��С�������ǣ�"<< b <<endl;

	return 0;
}