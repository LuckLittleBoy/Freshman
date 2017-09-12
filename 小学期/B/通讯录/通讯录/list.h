#pragma once
#include <iostream>
#include <string>
#include<vector>
using namespace std;


struct people 
{
	int age;
	string bianhao,name,sex,zhaidian,mobile;
};

typedef vector<people> peo;
class list
{
	int m,j,f;
	peo p;
public:
	list(void);
	void input();
	void get();
	void add();
	void inquiry1(string);
	void inquiry2(string);
	void xiugai();
	void del1();
	void del2();
	void output();
	~list(void);
};

