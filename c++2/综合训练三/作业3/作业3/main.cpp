#include<iostream>
#define n 3
using namespace std;

void main()
{
	int i,j,a[n][n];
	cout<<"������" << n << "��" << n << "������"<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];

	int sum1=0,sum2=0;
	for(i=0;i<n;i++)
	{
		sum1+=a[i][i];
	    sum2+=a[i][n-i-1];
	}
	cout<<"�������Խ���Ԫ��֮��Ϊ��"<< sum1 << endl;
	cout<<"����ζԽ���Ԫ��֮��Ϊ��"<< sum2 << endl;
}
