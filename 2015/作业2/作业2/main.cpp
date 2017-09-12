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
	cout << "这些最高分的学生信息：";
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
	cout<<"请输入学生的信息：(学号，姓名，c++成绩)"<<endl;
	for(i=0;i<N;i++)
		cin>>a[i].student>>a[i].name>>a[i].mark;
	for(i=0;i<N;i++)
		output(a[i]);
	cout<<"请输入指令：";
	cin>>j;
	if(j=="inquiry")
		inquiry(a);
}