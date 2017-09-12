#pragma once
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class game
{
	int man,sui,sum,sum1,sum2;
public:
	game(void);
	void input();
	void menbegin();
	void computer();
	void tongji();
	void result();
	void output();
	~game(void);
};

