#include "point.h"
#include<iostream>
#include<cmath>
using namespace std;

point::point(void)
{
}

point::point(double xx, double yy, double zz,int n)
{
   x = xx;
   y = yy;
   z = zz;
   num=n;
   cout<<"Construct NO."<<num<<"point.\n";
}

void point::display()
{
	cout<<"("<<x<<","<<y<<","<<z<<")";
}

point::~point(void)
{
	cout<<"Destruct NO."<<num<<"point.\n";
}

