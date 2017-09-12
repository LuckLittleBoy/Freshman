#include<iostream>
#include<cmath>
#include "line.h"
#include"point.h"
using namespace std;

line::line(void)
{
}

line::~line(void)
{
}

void line::input()
{
	i.set_value();
	j.set_value();
}

double line::output()
{
	double a;
	a=pow(i.getX()-j.getX(),2)+pow(i.getY()-j.getY(),2)+pow(i.getZ()-j.getZ(),2);
	return sqrt(a);
}
