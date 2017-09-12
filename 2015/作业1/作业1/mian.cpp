#include<iostream>
#include <string>
using namespace std;
#define N 2
struct list
{
	string student;
	string name;
	string address;
	string num;
	string e_mail;
};

list input()
{
	list x;
	cout<<"请输入学生的信息：（学号，姓名，家庭住址，手机号码，e_mail）";
	cin>>x.student>>x.name>>x.address>>x.num>>x.e_mail;
	return x;
}

void add(list x[])
{
	int n;
	cout<<"增加几人：";
	cin>>n;
	for(int i=0;i<n;i++)
	    x[N+i-1]=input();
}

void del(list x[],int y)
{
	int i;
	for(i=y-1;i<N;i++)
	{
		x[i]=x[i+1];
	}
}

void revise(list x[],int y)
{
	cout<<"请输入学生的信息：（学号，姓名，家庭住址，手机号码，e_mail）";
	cin>>x[y].student>>x[y].name>>x[y].address>>x[y].num>>x[y].e_mail;
}

int inquiry(list x[],string n)
{
	int k,m;
	for(m=0;m<40;m++)
	{
		if(x[m].student==n||x[m].name==n)
		{
			cout<<"所要查询的学生信息是：";
			cout << x[m].student << x[m].name << x[m].address << x[m].num << x[m].e_mail << endl;
			k=m;
		}
		else
		{
			cout<<"查询不到！！！"<<endl;
			return 0;
		}

	}
	return k;

}
void output(list x[])
{
	for(int i=0;i<40;i++)
		cout<<x[i].student<<"  "<<x[i].name<<"  "<<x[i].address<<"  "<<x[i].num<<"  "<<x[i].e_mail;
}
void main()
{
	string str;
	int j;
	list i[40];
	for(j=0;j<N;j++)
		i[j]=input();
	while(1)
	{
	    cout<<"请输入指令：";
	    cin>>str;
	    if(str=="add")
	   {
		    add(i);
	   }

	    else if(str=="delete")
	  {
		   int n;
		   cout<<"请输入所要删除的序号：";
		   cin>>n;
		   del(i,n);
	  }
		else if(str=="revise")
		{
			string m;
			cout<<"请输入所要修改的名字或学号：";
			cin>>m;
			revise(i,inquiry(i,m));
		}
		else if(str=="inquiry")
		{
			string name;
			cout<<"请输入所要查询的姓名或学号：";
			cin>> name;
			inquiry(i,name);
		}
		else if(str=="quit")
			break;
	    else 
		{
		   cout<<"输入指令错误！！！请重新输入：";
		   cin>>str;
		}
	}
	output(i);
}