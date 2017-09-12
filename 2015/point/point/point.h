#pragma once

class point
{
public:
	point(void);
	point(double xx, double yy, double zz,int);
	void setX(double a)
	{x=a;}
    double getX()
	{return x;}
	void setY(double b)
	{y=b;}
    double getY()
	{return y;}
	void setZ(double c)
	{z=c;}
    double getZ()
	{return z;}
	void display();
	~point(void);
private:
	double x,y,z;
	int num;
};
