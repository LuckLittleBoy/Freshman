#pragma once
#include<iostream>
using namespace std;
class gaosi
{
	double **p,*q;
	int n;
public:
	gaosi(void);
	void set(int m);
	void huasanjiao();
	void jie();
	void display();
	~gaosi(void);
};

