#pragma once

class CPolygon
{
protected:
	double width,height;
public:
	CPolygon(void);
	~CPolygon(void);
	void set_values(double a,double b)
	{width=a;height=b;}
};
