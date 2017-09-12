#include "people.h"

people::people(void)
{
}

people::people(int a,string str)
{
	age=a;
	name=str;
}

void people::display()
{
	cout<<"age:"<<age<<endl;
	cout<<"name:"<<name<<endl;
}

people::~people(void)
{
}
