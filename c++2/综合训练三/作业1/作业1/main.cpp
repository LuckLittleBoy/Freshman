#include<iostream>
using namespace std;
#define N 7

void main()
{
	int i,j,a[N][N]={{1},{1}};
	for(i=1;i<N;i++)
	{
		a[i][0]=1;
		for(j=0;j<i;j++)
			a[i][j+1]=a[i-1][j]+a[i-1][j+1];
	}

	cout<<"jie guo wei:"<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<=i;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}