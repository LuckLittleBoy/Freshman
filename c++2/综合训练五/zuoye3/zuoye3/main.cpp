#include<iostream>
using namespace std;

int main()
{
	int i=7;
	while(1)
	{
		if(1%2==3&&i%3==2&&i%5==4&&i%6==5&&i%7==0)
			break;
		else
			i+=7;
	}
	cout << "Ì¨½×Êý£º" << i;
	return 0;
}