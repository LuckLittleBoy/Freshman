#include<iostream>
using namespace std;

bool rui(int n)
{
	if(n%400==0||n%4==0&&n%100!=0)
		return true;
	else
		return false;
}

void main()
{
	int i,j,k,d;
	cout<<"请输入年月日：";
	cin>>i>>j>>k;

	if(rui(i))
		d=29;
	else
		d=28;
	switch(j)
	{
		case 1:cout << "第" << k << "天";break;
	    case 2:cout << "第" << 31+k << "天";break;
		case 3:cout << "第" << 31+d+k << "天";break;
	    case 4:cout << "第" << 31*2+d+k << "天";break;
		case 5:cout << "第" << 31*2+30+d+k << "天";break;
		case 6:cout << "第" << 31*3+30+d+k<< "天";break;
		case 7:cout << "第" << 31*3+30*2+d+k << "天";break;
		case 8:cout << "第" << 31*4+30*2+d+k << "天";break;
		case 9:cout << "第" << 31*5+30*2+d+k << "天";break;
		case 10:cout << "第" << 31*5+30*3+d+k << "天";break;
		case 11:cout << "第" << 31*6+30*3+d+k << "天";break;
		case 12:cout << "第" << 31*6+30*4+d+k << "天";break;
		default:cout << "月份输入错误！";
	}
}