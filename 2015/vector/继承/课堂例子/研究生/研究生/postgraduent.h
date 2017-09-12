#pragma once
#include"student.h"

class postgraduent:public student
{
public:
	postgraduent(void);
	~postgraduent(void);
	void setadvisor(string str)
	{advisor=str;}
	string getadvisor()
	{
		return advisor;
	}
private:
	string advisor;
};
