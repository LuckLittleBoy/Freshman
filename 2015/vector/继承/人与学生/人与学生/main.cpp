/*在main函数定义学生对象，给对象初始化赋值或调用setValue()和setID()赋值，并输出学生的信息。*/
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
	cout<<"请输入年龄，姓名和ID："<<endl;
	cin>>a>>s>>b;
	tong.setValue(a,s);
	tong.setID(b);
	meng.display();
	meng.displayID();
	tong.display();
	tong.displayID();
}