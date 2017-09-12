class Date
{
	int year,month,day;
public:
	void setyear(int y)
	{year=y;}
	int getyear()
	{return year;}
	void setmonth(int m)
	{month=m;}
	int getmonth()
	{return month;}
	void setday(int d)
	{day=d;}
	int getday()
	{return day;}
	void displayChinesedate();
	void displayAmericadate();
	bool isleapyear();
	int numbersofdate();
};