#include<iostream>
#include"Date.h"
using namespace std;

void main()
{
	Date d;
	int a,b,c;

	cout<<"�����������գ�";
	cin>>a>>b>>c; 

	d.setyear(a);
	d.setmonth(b);
	d.setday(c);
	d.displayChinesedate();
	d.displayAmericadate();

	cout<<"������������ڵ����������";
	cout<<d.numbersofdate();
}