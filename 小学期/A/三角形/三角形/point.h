#pragma once
#include<iostream>
using namespace std;
class point
{
private:
	double x,y;
public:
	point(void);
	point(double p1,double p2)
	{
		x=p1;
		y=p2;
	}
	void input()
	{
		cin >> x >> y;
	}
	double getx()
	{return x;}
	double gety()
	{return y;}
	double p_length(point a,point b);
	~point(void);
};

