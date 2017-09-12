#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct student
{
	int age;
	string num,name,sex,Class,college,major;
};

typedef vector<student> ss;

class studentxs
{
	int m,j,f;
	ss s;
public:
	studentxs(void);
	void input();
	void get();
	void add();
	void inquiry1(string);
	void inquiry2();
	void xiugai();
	void del1();
	void del2();
	void output();
	~studentxs(void);
};

