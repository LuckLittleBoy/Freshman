#include "score.h"


score::score(void)
{
	int i;
	cout << "学生总人数：" << endl;
	cin >> i;
	s.resize(i);
	jun.resize(i);
	zong.resize(i);
}

void score::input()
{
	int i,n;

	cout << "请输入学生的个数：";
	cin >> n;
	m=n;
	j=m;
	cout << "请输入学生的信息：（学号，姓名，数学成绩，语文成绩，英语成绩）" << endl;
	for(i=0;i<n;i++)
		cin>>s[i].num>>s[i].name>>s[i].math>>s[i].yuwen>>s[i].english;
}

void score::add(int index,int x)
{
	int i;
	j=j+x;
	
	for(i=index+x;i<j;i++)
		s[i]=s[i-x];
	
	cout << "请输入要添加的学生的信息：（学号，姓名，数学成绩，语文成绩，英语成绩）" << endl;
	for(i=index;i<x;i++)
		cin>>s[i].num>>s[i].name>>s[i].math>>s[i].yuwen>>s[i].english;
}

void score::jun_zong()
{
	int i;
	for(i=0;i<j;i++)
	{
		zong[i]=0;
		zong[i]+=s[i].yuwen+s[i].math+s[i].english;
		jun[i]=zong[i]/3;
	}
}
void score::huizong()
{
	int i;

	for(i=0;i<j;i++)
	{
		cout << s[i].num << " " << s[i].name <<" "<< s[i].math<< " " << s[i].yuwen << " " << s[i].english;
		cout << " " << zong[i] << " " << jun[i] << endl;
	}
}

void score::paixu()
{
	int i,k,t;
	for(i=0;i<j-1;i++)
	{
		k=i;
		for(t=i+1;t<j;t++)
			if(zong[t]>zong[k])
	  			k=t;
        cout << s[k].num << " " << s[k].name <<" "<< s[k].math<< " " << s[k].yuwen << " " << s[k].english;
		cout << " " << zong[k] << " " << jun[k] << endl;
	}
}

void score::inquiry(string a)
{
	int i,k;
	for(i=0;i<j;i++)
		if(a==s[i].num)
			k=i;
	for(i=0;i<j;i++)
		cout << s[k].num << " " << s[k].name <<" "<< s[k].math<< " " << s[k].yuwen << " " << s[k].english;
}

void score::output()
{
}

score::~score(void)
{
}
