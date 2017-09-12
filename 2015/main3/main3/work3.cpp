#include<iostream>
using namespace std;

struct date
{
	int year,month,day;
};

date input()
{
	date y;
	cout<<"请输入年月日：";
	cin>>y.year>>y.month>>y.day;
	return y;
}

int days(date x)
{
	int month_day_sum=0,sum,month_day[12]={0,31,28,31,30,31,30,31,31,30,31,30};

	if(x.year%4==0&&x.year%100!=0||x.year%400==0)
		month_day[2]=29;

	for(int i=1;i<x.month;i++) 
	{month_day_sum+=month_day[i];}

    sum=month_day_sum+x.day;

	return sum;
}

void output(int y)
{
	cout<<"第"<<y<<"天";
}

void main()
{
	date x;
	x=input();
	output(days(x));
}