#include<iostream>
using namespace std;

int qin(int x)
{
	int i,y;
	y=0;
	for(i=1;i<=x/2;i++)
		if(x%i==0)
			y+=i;
	return y;
}

void main()
{
	int i,j;
	for(i=1;i<=10000;i++)
	{
		j=qin(i);
		if(j>i&&i==qin(j))
			cout<<i<<","<<j<<endl;
	}
}