#include<iostream>
using namespace std;

void main()
{
	double i=2.0,j=1.0,sum=0,a;
	int n,b;
	cout<<"�����еļ���֮�ͣ�";
	cin>>n;

	for(b=1;b<=n;b++)
	{
		sum+=i/j;
		a=i;
		i=i+j;
		j=a;
	}
	cout<<"���Ϊ:"<< sum << endl;
}