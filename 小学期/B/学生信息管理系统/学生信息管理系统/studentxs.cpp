#include "studentxs.h"


studentxs::studentxs(void)
{
	int i;
	cout << "������ѧ����������" << endl;
	cin >> i;
	s.resize(i);
}
void studentxs::input()
{
	int i,n;
	cout << "������ѧ��������" << endl;
	cin >> n;
	m=n;
	j=m;
	cout<<"������ÿ��ѧ���Ļ�����Ϣ��ѧ�ţ��������Ա����䣬�༶��ѧԺ��רҵ����"<<endl;
	for(i=0;i<n;i++)
		cin>>s[i].num>>s[i].name>>s[i].sex>>s[i].age>>s[i].Class>>s[i].college>>s[i].major;
}

void studentxs::add()
{
	int i,k;
	for(i=0;i<1;)
	{
		cout<<"������Ҫ���ѧ������Ϣ��ѧ�ţ��������Ա����䣬�༶��ѧԺ��רҵ����"<<endl;
		cin>>s[j].num>>s[j].name>>s[j].sex>>s[j].age>>s[j].Class>>s[j].college>>s[j].major;
		cout<<"�Ƿ�������ѧ����"<<"1.��   2.����"<<endl<<"������ѡ��:"<<endl;
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
			cout<<"�б���û�д�ѧ�ŵ�ѧ��"<<endl;
	}
}

void studentxs::inquiry2()
{
	string zy,bj;
	cout << "��������Ҫ��ѯѧ����רҵ�Ͱ༶��" << endl;
	cin >> zy >> bj;
	for(int i=0;i<j;i++)
	{
		if(zy==s[i].major)
		{
			if(bj==s[i].Class)
				cout<<s[i].num<<"\t"<<s[i].name<<"\t"<<s[i].sex<<"\t"<<s[i].age<<"\t"<<s[i].Class<<"\t"<<s[i].college<<"\t"<<s[i].major<<endl;
			else
				cout << "��רҵû�иð༶��" << endl;
		}
		else
			cout << "���б�û�и�רҵ��" << endl;

	}
}

void studentxs::xiugai()
{
	string xh;
	cout << "��������Ҫ�޸�ѧ����ѧ�ţ�" << endl;
	cin >> xh;
	inquiry1(xh);
	cout << "��������Ҫ�޸ĵ���Ϣ��" << endl;
	cin>>s[f].num>>s[f].name>>s[f].sex>>s[f].age>>s[f].Class>>s[f].college>>s[f].major;
}
void studentxs::del1()
{
	string na;
	int i;
	cout<<"������Ҫɾ����������"<<endl;
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
	cout << "������Ҫɾ����ѧ�ţ�" << endl;
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
	cout << "ѧ���Ļ�����Ϣ��" << endl;
	for(int i=0;i<=j;i++)
		cout<<s[i].num<<"\t"<<s[i].name<<"\t"<<s[i].sex<<"\t"<<s[i].age<<"\t"<<s[i].Class<<"\t"<<s[i].college<<"\t"<<s[i].major<<endl;
}
studentxs::~studentxs(void)
{
	s.clear();
}
