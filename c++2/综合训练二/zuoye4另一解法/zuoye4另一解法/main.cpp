#include<iostream>
using namespace std;

void main()
{
	double i=2.0,j=1.0,sum=0,a;
	int n,b;
	cout<<"求数列的几项之和：";
	cin>>n;

	for(b=1;b<=n;b++)
	{
		sum+=i/j;
		a=i;
		i=i+j;
		j=a;
	}
	cout<<"结果为:"<< sum << endl;
}