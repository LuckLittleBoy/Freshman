/*��main��������ѧ�����󣬸������ʼ����ֵ�����setValue()��setID()��ֵ�������ѧ������Ϣ��*/
#include<iostream>
#include"student.h"
#include"people.h"
using namespace std;

void main()
{
	student meng(20,"mengxiangtong",202);
	student tong;
	int a,b;
	string s;
	cout<<"���������䣬������ID��"<<endl;
	cin>>a>>s>>b;
	tong.setValue(a,s);
	tong.setID(b);
	meng.display();
	meng.displayID();
	tong.display();
	tong.displayID();
}