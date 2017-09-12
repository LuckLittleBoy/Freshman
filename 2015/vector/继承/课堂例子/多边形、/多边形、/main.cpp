#include<iostream>
#include"Triangle.h"
#include"Rectangle.h"
using namespace std;

int main()
{
	CRectangle rect;
	CTriangle trgl;
	rect.set_values(4,5);
	trgl.set_values(4,5);
	cout<<rect.area()<<endl;
	cout<<trgl.area()<<endl;
	return 0;
}