#include<iostream>
#include<string>
using namespace std;
#define N 3

struct stdu
{
	string student,name;
	float math,english,c_plus,mazhe;
};

stdu input()
{
	stdu x;
	cout<<"请输入学生的信息：（学号，姓名，高数，英语，c++，马哲）";
	cin>>x.student>>x.name>>x.math>>x.english>>x.c_plus>>x.mazhe;
	return x;
}
 
void output1(stdu x[])
{
	int i,k=0;
	float sum[N];
	for(i=0;i<N;i++)
		sum[i]=x[i].math+x[i].english+x[i].c_plus+x[i].mazhe;
	for(i=1;i<N;i++)
		if(sum[i]>sum[k])
			k=i;
	cout<<"总分最高的学生的学号、姓名、各科考试分数以及总分为："<<endl;
	cout<<"学号："<< x[k].student<<" 姓名："<< x[k].name <<" 高数："<< x[k].math;
	cout<<" 英语："<< x[k].english <<" c++"<< x[k].c_plus<<" 马哲："<< x[k].mazhe;
	cout<<" 总分：" << sum[k] << endl;
}

void output2(stdu x[])
{
	int i,j,k;
	float sum[N];
	for(i=0;i<N;i++)
		sum[i]=x[i].math+x[i].english+x[i].c_plus+x[i].mazhe;
	cout<<"按照学生的总分降序的学生的学号、姓名、各科考试分数以及总分"<<endl;
	for(j=0;j<N;j++)
	{
		k=0;
		for(i=1;i<N;i++)
			if(sum[i]>sum[k])
				k=i;
		cout << x[k].student << x[k].name << x[k].math << x[k].english;
		cout << x[k].c_plus << x[k].mazhe << sum[k] << endl;
		sum[k]=0;
	}
}
void count(stdu x[])
{
	float math_average=0,eng_average=0,c_average=0,mazhe_average=0,sum_average=0;
	for(int i=0;i<N;i++)
	{
		math_average+=x[i].math/N;
		eng_average+=x[i].english/N;
		c_average+=x[i].c_plus/N;
		mazhe_average+=x[i].mazhe/N;
	}
	sum_average=math_average+eng_average+c_average+mazhe_average;
	cout<<"数学平均分："<<math_average << "英语平均分："<<eng_average;
	cout<<"c++平均分："<<c_average << "马哲平均分：" <<mazhe_average;
	cout<<"总分平均分："<<sum_average<<endl;
}

void inquiry(stdu x[],string y)
{
	int i;
	float t,z[N];
	
    if(y=="高数")
		for(i=0;i<N;i++)
			z[i]=x[i].math;
	else if(y=="英语")
		for(i=0;i<N;i++)
			z[i]=x[i].english;
	else if(y=="c++")
		for(i=0;i<N;i++)
			z[i]=x[i].c_plus;
	else if(y=="马哲")
		for(i=0;i<N;i++)
			z[i]=x[i].mazhe;
	else 
		cout<<"输入指令错误！！！";
	for(i=0;i<N;i++)
		if(z[i]<z[i+1])
		{
			t=z[i];
			z[i]=z[i+1];
			z[i+1]=t;
		}
	cout << "所查科目的最高分是：" << z[0] <<endl;
}


void main()
{
	stdu a[N];
	int i;

	//学生信息的输入
	for(i=0;i<N;i++)
		a[i]=input();

	//学生中最高成绩的输出
	output1(a);

	//统计这四门课以及总成绩的平均分
	count(a);

	//按照学生的总分降序输出每个学生的学号、姓名、各科考试分数以及总分
	output2(a);

	//查询高数、英语、C++、马哲每门课的最高分
	string str;
	cout<<"请输入查询指令：（高数，英语，c++，马哲）";
	cin>>str;
	inquiry(a,str);
}