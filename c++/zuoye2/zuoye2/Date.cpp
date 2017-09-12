#include<iostream>
#include"Date.h"
#include<string>
using namespace std;

void Date::displayChinesedate()
{
	cout<< getyear() << "Äê" << getmonth() << "ÔÂ" << getday() << "ÈÕ" << endl;
}

void Date::displayAmericadate()
{
	string d[12]={"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
	string m;
	for(int i=1;i<13;i++)
		if(getmonth()==i)
			m=d[i-1];
	cout << m << getday() << "," << getyear() << endl;
}

bool Date::isleapyear()
{
	if(getyear()%4==0&&getyear()%100!=0||getyear()%400==0)
		return true;
	else
		return false;
}

int Date::numbersofdate()
{
	int month_day_sum=0,sum,month_day[12]={0,31,28,31,30,31,30,31,31,30,31,30};

	if(isleapyear())
		month_day[2]=29;
	for(int i=1;i<getmonth();i++) 
	{month_day_sum+=month_day[i];}

    sum=month_day_sum+getday();

	return sum;
}