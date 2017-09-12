#pragma once
#include"Polygon.h"

class CRectangle:public CPolygon
{
public:
	CRectangle(void);
	~CRectangle(void);
	double area()
	{return (width*height);}
};
