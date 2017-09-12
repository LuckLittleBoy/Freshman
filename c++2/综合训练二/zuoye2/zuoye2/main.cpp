#include<iostream>
using namespace std;

bool tt(int x)
{
	int a,b,c,s;
	a=x/100;
	b=x/10%10;
	c=x%10;
	s=a*a*a+b*b*b+c*c*c;
	return (s==x);
}

void main()
{
	int x;
	for(x=100;x<=999;x++)
		if(tt(x))
			cout<< x <<" ";
}