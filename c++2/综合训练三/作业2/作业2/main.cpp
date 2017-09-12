#include<iostream>
#define n 7
using namespace std;

void main()
{
	int i,j;

	for(i=1;i<=n/2+1;i++)
	{
		for(j=1;j<=2*i-1;j++)
			cout<<"* ";
		cout<<endl;
	}
	for(i=n/2;i>=1;i--)
	{
		for(j=1;j<=2*i-1;j++)
			cout<<"* ";
		cout<<endl;
	}
}