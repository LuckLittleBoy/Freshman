#include<iostream>
#include"Date.h"
using namespace std;

void main()
{
	Date d;
	int a,b,c;

	cout<<"请输入年月日：";
	cin>>a>>b>>c; 

	d.setyear(a);
	d.setmonth(b);
	d.setday(c);
	d.displayChinesedate();
	d.displayAmericadate();

	cout<<"所输入的日期在当年的天数：";
	cout<<d.numbersofdate();
}