#include<iostream>
using namespace std;

int main()
{
	int x,y,z;
	for(x=0;x<=5;x++)
	{
		y=36-7*x;
		if(y%5!=0)
			continue;
		y=y/5,z=36-x-y;
		if(z%2!=0)
			continue;
		cout<<"ÄÐ£º" << x << "Å®£º" << y << "º¢×Ó£º" << z <<endl;
	}
	return 0;
}