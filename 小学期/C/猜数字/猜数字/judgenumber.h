#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<string>
#include<Windows.h>
using namespace std;
class judgenumber
{
	int true_num;
	time_t Time;
	time_t T[100];
    double use_time;
public:
	judgenumber(void);
	void random();
	void compare(double);
	~judgenumber(void);
};

