#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int a[9][9];
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
			a[i][j]=(i+1)*(j+1);

	cout<<"�˷��ھ���Ϊ��"<<endl;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
			cout<<a[i][j]<<"	";
		cout<<"		"<<endl;
	}

	return 0;
}