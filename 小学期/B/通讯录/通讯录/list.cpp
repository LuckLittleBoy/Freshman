#include "list.h"


list::list(void)
{
	int i;
	cout << "请输入通讯录容量：" << endl;
	cin >> i;
	p.resize(i);
}

void list::input()
{
	int i,n;
	cout << "请输入通讯人的个数：" << endl;
	cin >> n;
	m=n;
	j=m;
	cout<<"请输入每个人的基本信息（编号、姓名、性别、年龄、宅电、手机）："<<endl;
	for(i=0;i<n;i++)
		cin>>p[i].bianhao>>p[i].name>>p[i].sex>>p[i].age>>p[i].zhaidian>>p[i].mobile;
}

void list::add()
{
	int i,k;
	for(i=0;i<1;)
	{
		cout<<"请输入要添加通讯人的信息（编号、姓名、性别、年龄、宅电、手机）："<<endl;
		cin>>p[j].bianhao>>p[j].name>>p[j].sex>>p[j].age>>p[j].zhaidian>>p[j].mobile;
		cout<<"是否继续添加？"<<"1.是   2.不是"<<endl<<"请输入选项:"<<endl;
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

void list::inquiry1(string s)
{
	string na;
	int i;
	na=s;
	for(i=0;i<j;i++)
	{
		if(na==p[i].name)
		{
			f=i;
		    cout<<p[i].bianhao<<"\t"<<p[i].name<<"\t"<<p[i].sex<<"\t"<<p[i].age<<"\t"<<p[i].zhaidian<<"\t"<<p[i].mobile<<endl;
		}
		else
			cout<<"通讯录中没有该姓名的人！"<<endl;
	}
}

void list::inquiry2(string m)
{
	string hm;
	hm=m;
	for(int i=0;i<j;i++)
	{
		if(hm==p[i].mobile)
		{
			 cout<<p[i].bianhao<<"\t"<<p[i].name<<"\t"<<p[i].sex<<"\t"<<p[i].age<<"\t"<<p[i].zhaidian<<"\t"<<p[i].mobile<<endl;
		}
		else
			cout << "此通讯录中没有该手机号码！" << endl;

	}
}

void list::xiugai()
{
	string na;
	cout << "请输入所要修改通讯人的姓名：" << endl;
	cin >> na;
	inquiry1(na);
	cout << "请重新输入该人的基本信息（编号、姓名、性别、年龄、宅电、手机）：" << endl;
	cin>>p[j].bianhao>>p[j].name>>p[j].sex>>p[j].age>>p[j].zhaidian>>p[j].mobile;
}
void list::del1()
{
	string na;
	int i;
	cout<<"请输入要删除人的姓名："<<endl;
	cin>>na;

	for(i=0;i<j;i++)
		if(na==p[i].name)
		{
			p[i].name=" ";
			cout<<p[i].bianhao<<"\t"<<p[i].name<<"\t"<<p[i].sex<<"\t"<<p[i].age<<"\t"<<p[i].zhaidian<<"\t"<<p[i].mobile<<endl;
		}

}

void list::del2()
{
	string bh;
	int i;
	cout << "请输入要删除人的编号：" << endl;
	cin >> bh;
	for(i=0;i<j;i++)
		if(bh==p[i].bianhao)
		{
			p[i].bianhao=" ";
			cout<<p[i].bianhao<<"\t"<<p[i].name<<"\t"<<p[i].sex<<"\t"<<p[i].age<<"\t"<<p[i].zhaidian<<"\t"<<p[i].mobile<<endl;
		}
}

void list::output()
{
	cout << "通讯录中的基本信息：" << endl;
	for(int i=0;i<=j;i++)
		cout<<p[i].bianhao<<"\t"<<p[i].name<<"\t"<<p[i].sex<<"\t"<<p[i].age<<"\t"<<p[i].zhaidian<<"\t"<<p[i].mobile<<endl;
}
list::~list(void)
{
}
