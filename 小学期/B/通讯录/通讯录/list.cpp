#include "list.h"


list::list(void)
{
	int i;
	cout << "������ͨѶ¼������" << endl;
	cin >> i;
	p.resize(i);
}

void list::input()
{
	int i,n;
	cout << "������ͨѶ�˵ĸ�����" << endl;
	cin >> n;
	m=n;
	j=m;
	cout<<"������ÿ���˵Ļ�����Ϣ����š��������Ա����䡢լ�硢�ֻ�����"<<endl;
	for(i=0;i<n;i++)
		cin>>p[i].bianhao>>p[i].name>>p[i].sex>>p[i].age>>p[i].zhaidian>>p[i].mobile;
}

void list::add()
{
	int i,k;
	for(i=0;i<1;)
	{
		cout<<"������Ҫ���ͨѶ�˵���Ϣ����š��������Ա����䡢լ�硢�ֻ�����"<<endl;
		cin>>p[j].bianhao>>p[j].name>>p[j].sex>>p[j].age>>p[j].zhaidian>>p[j].mobile;
		cout<<"�Ƿ������ӣ�"<<"1.��   2.����"<<endl<<"������ѡ��:"<<endl;
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
			cout<<"ͨѶ¼��û�и��������ˣ�"<<endl;
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
			cout << "��ͨѶ¼��û�и��ֻ����룡" << endl;

	}
}

void list::xiugai()
{
	string na;
	cout << "��������Ҫ�޸�ͨѶ�˵�������" << endl;
	cin >> na;
	inquiry1(na);
	cout << "������������˵Ļ�����Ϣ����š��������Ա����䡢լ�硢�ֻ�����" << endl;
	cin>>p[j].bianhao>>p[j].name>>p[j].sex>>p[j].age>>p[j].zhaidian>>p[j].mobile;
}
void list::del1()
{
	string na;
	int i;
	cout<<"������Ҫɾ���˵�������"<<endl;
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
	cout << "������Ҫɾ���˵ı�ţ�" << endl;
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
	cout << "ͨѶ¼�еĻ�����Ϣ��" << endl;
	for(int i=0;i<=j;i++)
		cout<<p[i].bianhao<<"\t"<<p[i].name<<"\t"<<p[i].sex<<"\t"<<p[i].age<<"\t"<<p[i].zhaidian<<"\t"<<p[i].mobile<<endl;
}
list::~list(void)
{
}
