#include"gaosi.h"
#include<iostream>
using namespace std;

void main()
{
	int n;
	gaosi g1;

	cout<<"��������㷽����ķ��̸����Լ�δ֪���ĸ���n:"<<endl;
	cin>>n;
	
	g1.set(n);
	g1.huasanjiao();
	g1.display();
	g1.jie();
}