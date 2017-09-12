#pragma once
#include"point.h"

class line
{
public:
	line(void);
	~line(void);
	void input();
	double output();
	friend void distance(line);
private:
	point i,j;
};
