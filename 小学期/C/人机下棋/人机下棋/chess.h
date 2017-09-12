#pragma once
#include<iostream>
#include<string>
using namespace std;

class chess
{
	int a,b;
	string user,computor,q[3][3];
public:
	int M;
	chess(void);
	int getM()
	{return M;}
	void new_chess();
	void chose();
	void man_begin();
	void computor_begin();
	int judge(int i,int j,int m,int n);
	void output();
	void result();
	~chess(void);
};

