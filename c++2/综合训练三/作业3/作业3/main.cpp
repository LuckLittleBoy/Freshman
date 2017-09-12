#include<iostream>
#define n 3
using namespace std;

void main()
{
	int i,j,a[n][n];
	cout<<"请输入" << n << "行" << n << "列数："<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];

	int sum1=0,sum2=0;
	for(i=0;i<n;i++)
	{
		sum1+=a[i][i];
	    sum2+=a[i][n-i-1];
	}
	cout<<"矩阵主对角线元素之和为："<< sum1 << endl;
	cout<<"矩阵次对角线元素之和为："<< sum2 << endl;
}
