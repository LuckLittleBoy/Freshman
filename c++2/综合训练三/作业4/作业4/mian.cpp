#include<iostream>
#define N 26
using namespace std;

int main()
{
	int a[N],i,k,num;
	for(i=0;i<N;i++)
		a[i]=i+1;
	k=0;
	i=0;
	num=0;
	while(num<N-1)
	{
		if(a[i]!=0)
			k++;
		if(k==3)
		{
			a[i]=0;
			num++;
			k=0;
		}
		i++;
		if(i==N)
			i=0;
	}
	for(i=0;i<N;i++)
		if(a[i]!=0)
			cout<<a[i]<<endl;

	return 0;
}