#include<iostream>
#include<string>
using namespace std;
#define N 5

struct stdu
{
	string student;
	string name;
	int mark;
};

void output(stdu x)
{
	cout<<endl;
	cout << x.student << x.name << x.mark;
}

void inquiry(stdu x[])
{
	int i,j,t=0;
	for(i=1;i<N;i++)
		if(x[i].mark>=x[t].mark)
			t=i;
	cout << "��Щ��߷ֵ�ѧ����Ϣ��";
	for(i=0;i<N;i++)
		if(x[t].mark==x[i].mark&&t!=i)
			cout << x[i].student << x[i].name << x[i].mark << endl; 
	cout << x[t].student << x[t].name << x[t].mark << endl;
}

void main()
{
	stdu a[N];
	string j;
	int i;
	cout<<"������ѧ������Ϣ��(ѧ�ţ�������c++�ɼ�)"<<endl;
	for(i=0;i<N;i++)
		cin>>a[i].student>>a[i].name>>a[i].mark;
	for(i=0;i<N;i++)
		output(a[i]);
	cout<<"������ָ�";
	cin>>j;
	if(j=="inquiry")
		inquiry(a);
}