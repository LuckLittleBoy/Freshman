#include<iostream>
using namespace std;

class mother
{
public:
	mother()
	{cout<<"mother\n";}
};

class daughter:public mother
{
public:
	daughter()
	{cout<<"daughter\n";}
};

class son:public mother
{
public:
	son()
	{cout<<"son\n";}
};

int main()
{
	daughter cynthia;
	son daniel;
	return 0;
}