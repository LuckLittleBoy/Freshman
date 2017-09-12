#include<iostream>
#define N 20
using namespace std;

void main()
{
	int i,j,k,m,n,c,flag,min;
	int a[N][N];
	flag=0;

	cout<<"请输入矩阵的行数：";
	cin>>m;

	cout<<"请输入矩阵的列数：";
	cin>>n;

	cout<<"请输入矩阵："<<endl;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<m;i++)
	{
		min=a[i][0];
		c=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
				c=j;
			}
		}
		for(j=0;j<n;j++)
		{
			if(a[i][j]==min)
			{
				for(k=0;k<m;k++)
					if(a[k][j]>min)
						break;
				if(k==m)
					c=j;
				cout<<"该矩阵的马鞍点是："<<a[i][c]<<endl;
				flag=1;
			}
		}
	}
	
	if(flag==0)
		cout<<"该矩阵没有马鞍点！"<<endl;
}