#include<iostream>
#include "Student.h"
#include<string>
using namespace std;

void main()
{
	student a[3];
	int i;
	for(i=0;i<3;i++)
	{
		a[i].input();
		a[i].output();
	}
}