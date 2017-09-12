#include "point.h"
#include<iostream>
#include<cmath>
using namespace std;

point::point(void)
{
}

point::point(double xx, double yy, double zz)
{
   x = xx;
   y = yy;
   z = zz;
}

void point::set_value()
{
	double xx,yy,zz;
	cin>>xx>>yy>>zz;
	x=xx;
	y=yy;
	z=zz;
}

point::~point(void)
{
}

