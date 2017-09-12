#include<iostream>
using namespace std;

double fun(int n)
{
	if(n==1)
		return 1.0;
	else if(n==2)
		return 2.0;
	else
		return fun(n-1)+fun(n-2);
}

void main()
{
	double sum=0;
	for(int i=1;i<=20;i++)
		sum+=(fun(i+1)/fun(i));
	cout<<sum<<" ";
}