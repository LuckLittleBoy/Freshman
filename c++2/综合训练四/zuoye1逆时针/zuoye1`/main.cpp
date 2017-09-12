#include<iostream>
#define N 6
using namespace std;

void main()
{
	int i,j,n=1,a[N][N];
	for(i=0;i<=N/2;i++)
	{
		for(j=i;j<N-i;j++)
			a[j][i]=n++;
		for(j=i+1;j<N-i;j++)
			a[N-i-1][j]=n++;
		for(j=N-i-2;j>i;j--)
			a[j][N-i-1]=n++;
		for(j=N-i-1;j>i;j--)
			a[i][j]=n++;
	}

	cout<<"ÄæÊ±ÕëÂÝÐý·½ÕóÎª£º"<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			cout<<a[i][j]<<"	";
		cout<<endl;
	}
}