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
	cout<<"������ѧ������Ϣ����ѧ�ţ�������������Ӣ�c++�����ܣ�";
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
	cout<<"�ܷ���ߵ�ѧ����ѧ�š����������ƿ��Է����Լ��ܷ�Ϊ��"<<endl;
	cout<<"ѧ�ţ�"<< x[k].student<<" ������"<< x[k].name <<" ������"<< x[k].math;
	cout<<" Ӣ�"<< x[k].english <<" c++"<< x[k].c_plus<<" ���ܣ�"<< x[k].mazhe;
	cout<<" �ܷ֣�" << sum[k] << endl;
}

void output2(stdu x[])
{
	int i,j,k;
	float sum[N];
	for(i=0;i<N;i++)
		sum[i]=x[i].math+x[i].english+x[i].c_plus+x[i].mazhe;
	cout<<"����ѧ�����ֽܷ����ѧ����ѧ�š����������ƿ��Է����Լ��ܷ�"<<endl;
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
	cout<<"��ѧƽ���֣�"<<math_average << "Ӣ��ƽ���֣�"<<eng_average;
	cout<<"c++ƽ���֣�"<<c_average << "����ƽ���֣�" <<mazhe_average;
	cout<<"�ܷ�ƽ���֣�"<<sum_average<<endl;
}

void inquiry(stdu x[],string y)
{
	int i;
	float t,z[N];
	
    if(y=="����")
		for(i=0;i<N;i++)
			z[i]=x[i].math;
	else if(y=="Ӣ��")
		for(i=0;i<N;i++)
			z[i]=x[i].english;
	else if(y=="c++")
		for(i=0;i<N;i++)
			z[i]=x[i].c_plus;
	else if(y=="����")
		for(i=0;i<N;i++)
			z[i]=x[i].mazhe;
	else 
		cout<<"����ָ����󣡣���";
	for(i=0;i<N;i++)
		if(z[i]<z[i+1])
		{
			t=z[i];
			z[i]=z[i+1];
			z[i+1]=t;
		}
	cout << "�����Ŀ����߷��ǣ�" << z[0] <<endl;
}


void main()
{
	stdu a[N];
	int i;

	//ѧ����Ϣ������
	for(i=0;i<N;i++)
		a[i]=input();

	//ѧ������߳ɼ������
	output1(a);

	//ͳ�������ſ��Լ��ܳɼ���ƽ����
	count(a);

	//����ѧ�����ֽܷ������ÿ��ѧ����ѧ�š����������ƿ��Է����Լ��ܷ�
	output2(a);

	//��ѯ������Ӣ�C++������ÿ�ſε���߷�
	string str;
	cout<<"�������ѯָ���������Ӣ�c++�����ܣ�";
	cin>>str;
	inquiry(a,str);
}