#include<iostream>
using namespace std;

int main()
{
	int n,m,k,i,j;
	cout<<"请输入总人数：";
	cin>>n;
	cout<<"请输入出列编号：";
	cin>>m;

	int *list=new int[n];
	int *out=new int[n];
	for(i=0;i<n;i++)
		list[i]=i+1;
	for(i=1,j=k=0;k<n;j=(++j)%n)
	{
		if(list[j]!=0)
		{
			if(i==m)
			{
				out[k]=list[j];
				cout<<out[k]<<" ";
				k++;
				list[j]=0;
				i=1;
			}
			else
				i++;
		}
	}
	cout<<endl;

	delete[]list;
	delete[]out;

	return 0;
}


 