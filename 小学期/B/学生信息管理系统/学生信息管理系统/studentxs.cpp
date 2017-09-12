#include "studentxs.h"


studentxs::studentxs(void)
{
	int i;
	cout << "请输入学生总人数：" << endl;
	cin >> i;
	s.resize(i);
}
void studentxs::input()
{
	int i,n;
	cout << "请输入学生个数：" << endl;
	cin >> n;
	m=n;
	j=m;
	cout<<"请输入每个学生的基本信息（学号，姓名，性别，年龄，班级，学院，专业）："<<endl;
	for(i=0;i<n;i++)
		cin>>s[i].num>>s[i].name>>s[i].sex>>s[i].age>>s[i].Class>>s[i].college>>s[i].major;
}

void studentxs::add()
{
	int i,k;
	for(i=0;i<1;)
	{
		cout<<"请输入要添加学生的信息（学号，姓名，性别，年龄，班级，学院，专业）："<<endl;
		cin>>s[j].num>>s[j].name>>s[j].sex>>s[j].age>>s[j].Class>>s[j].college>>s[j].major;
		cout<<"是否继续添加学生？"<<"1.是   2.不是"<<endl<<"请输入选项:"<<endl;
		cin>>k;
		if(k==1)
		{
			i=0;
			j=j+1;
		}

		else
		{
			i=1;
		}
	}
}

void studentxs::inquiry1(string x)
{
	string xh;
	int i;
	xh=x;
	for(i=0;i<j;i++)
	{
		if(xh==s[i].num)
		{
			f=i;
		    cout<<s[i].num<<"\t"<<s[i].name<<"\t"<<s[i].sex<<"\t"<<s[i].age<<"\t"<<s[i].Class<<"\t"<<s[i].college<<"\t"<<s[i].major<<endl;
		}
		else
			cout<<"列表中没有此学号的学生"<<endl;
	}
}

void studentxs::inquiry2()
{
	string zy,bj;
	cout << "请输入所要查询学生的专业和班级：" << endl;
	cin >> zy >> bj;
	for(int i=0;i<j;i++)
	{
		if(zy==s[i].major)
		{
			if(bj==s[i].Class)
				cout<<s[i].num<<"\t"<<s[i].name<<"\t"<<s[i].sex<<"\t"<<s[i].age<<"\t"<<s[i].Class<<"\t"<<s[i].college<<"\t"<<s[i].major<<endl;
			else
				cout << "此专业没有该班级！" << endl;
		}
		else
			cout << "此列表没有该专业！" << endl;

	}
}

void studentxs::xiugai()
{
	string xh;
	cout << "请输入所要修改学生的学号：" << endl;
	cin >> xh;
	inquiry1(xh);
	cout << "请输入所要修改的信息：" << endl;
	cin>>s[f].num>>s[f].name>>s[f].sex>>s[f].age>>s[f].Class>>s[f].college>>s[f].major;
}
void studentxs::del1()
{
	string na;
	int i;
	cout<<"请输入要删除的姓名："<<endl;
	cin>>na;

	for(i=0;i<j;i++)
		if(na==s[i].name)
		{
			s[i].name=" ";
			cout<<s[i].num<<"\t"<<s[i].name<<"\t"<<s[i].sex<<"\t"<<s[i].age<<"\t"<<s[i].Class<<"\t"<<s[i].college<<"\t"<<s[i].major<<endl;
		}

}

void studentxs::del2()
{
	string xh;
	int i;
	cout << "请输入要删除的学号：" << endl;
	cin >> xh;
	for(i=0;i<j;i++)
		if(xh==s[i].num)
		{
			s[i].num=" ";
			cout<<s[i].num<<"\t"<<s[i].name<<"\t"<<s[i].sex<<"\t"<<s[i].age<<"\t"<<s[i].Class<<"\t"<<s[i].college<<"\t"<<s[i].major<<endl;
		}
}

void studentxs::output()
{
	cout << "学生的基本信息：" << endl;
	for(int i=0;i<=j;i++)
		cout<<s[i].num<<"\t"<<s[i].name<<"\t"<<s[i].sex<<"\t"<<s[i].age<<"\t"<<s[i].Class<<"\t"<<s[i].college<<"\t"<<s[i].major<<endl;
}
studentxs::~studentxs(void)
{
	s.clear();
}
