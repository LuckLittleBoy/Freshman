#pragma once
#include"Polygon.h"

class CTriangle:public CPolygon
{
public:
	CTriangle(void);
	~CTriangle(void);
	double area()
	{return (width*height/2);}
};
