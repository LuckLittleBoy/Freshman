#pragma once
#include"point.h"
class triangle
{
public:
	triangle(void);
	bool is_tri(double,double,double);
	bool is_two(double,double,double);
	bool is_three(double,double,double);
	bool is_rightangle(double,double,double);
	double p_length(point p1,point p2);
	~triangle(void);
};

