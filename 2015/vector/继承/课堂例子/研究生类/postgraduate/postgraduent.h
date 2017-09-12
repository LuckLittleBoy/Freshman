#pragma once
#include "student.h"

class postgraduent : public student
{
public:
	postgraduent(void);
	postgraduent(int n, string str1, char c, string str2) : student(n,str1,c), advisor(str2){}
	~postgraduent(void);
	void setAdvisor(string str){advisor = str;}
	string getAdvisor(){return advisor;}
private:
    string advisor;
};
