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
	cout<<"�����������գ�";
	cin>>i>>j>>k;

	if(rui(i))
		d=29;
	else
		d=28;
	switch(j)
	{
		case 1:cout << "��" << k << "��";break;
	    case 2:cout << "��" << 31+k << "��";break;
		case 3:cout << "��" << 31+d+k << "��";break;
	    case 4:cout << "��" << 31*2+d+k << "��";break;
		case 5:cout << "��" << 31*2+30+d+k << "��";break;
		case 6:cout << "��" << 31*3+30+d+k<< "��";break;
		case 7:cout << "��" << 31*3+30*2+d+k << "��";break;
		case 8:cout << "��" << 31*4+30*2+d+k << "��";break;
		case 9:cout << "��" << 31*5+30*2+d+k << "��";break;
		case 10:cout << "��" << 31*5+30*3+d+k << "��";break;
		case 11:cout << "��" << 31*6+30*3+d+k << "��";break;
		case 12:cout << "��" << 31*6+30*4+d+k << "��";break;
		default:cout << "�·��������";
	}
}