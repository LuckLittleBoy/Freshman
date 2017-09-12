#include<iostream>
using namespace std;

bool wan(int x)
{
	int y,s;
	s=0;
	for(y=1;y<=x/2;y++)
		if(x%y==0)
			s+=y;
	return (s==x);
}
void main()
{
	int x;
	for(x=1;x<=1000;x++)
		if(wan(x))
			cout<<x<<" ";
}