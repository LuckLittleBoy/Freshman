#include<iostream>
using namespace std;

int main()
{
	double i,m=100,h=100;
	for(i=1;i<=10;i++)
	{
		h=h/2;
		m+=h;
	}
	cout<<h<<" "<<m<<" ";
	return 0;
}