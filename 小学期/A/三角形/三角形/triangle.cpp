#include "triangle.h"


triangle::triangle(void)
{
}

double triangle::p_length(point p1,point p2)
{
	double c;
	c=pow(p1.getx()-p2.getx(),2)+pow(p1.gety()-p2.gety(),2);
	return c;
}

bool triangle::is_tri(double i,double j,double k)
{
	if(i+j>k/2&&i+k>j/2&&j+k>i/2)
		return true;
	else
		return false;
}

bool triangle::is_two(double i,double j,double k)
{
	if(i==j||i==k||k==j)
		return true;
	else 
		return false;
}

bool triangle::is_three(double i,double j,double k)
{
	if(i==j==k)
		return true;
	else
		return false;
}
bool triangle::is_rightangle(double i,double j,double k)
{
	if(i+j==k||i+k==j||k+j==i)
		return true;
	else 
		return false;
}
triangle::~triangle(void)
{
}
