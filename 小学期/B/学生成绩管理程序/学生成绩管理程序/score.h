#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct student
{
	string num,name;
	double math,yuwen,english;
};

typedef vector<student> stud;
typedef vector<double> j_z;
class score
{
	j_z jun,zong;
	int m,j;
	stud s;
public:
	score(void);
	void input();
	void add(int,int);
	void jun_zong();
	void huizong();
	void inquiry(string);
	void paixu();
	void output();
	~score(void);
};

