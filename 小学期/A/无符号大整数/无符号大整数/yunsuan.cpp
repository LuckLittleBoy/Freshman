#include "yunsuan.h"



yunsuan::yunsuan(void)
{
}

void yunsuan :: input()
{
	cout<<"请输入两个无符号大整数："<<endl;
	cin>>a>>b;
}

//两数的和
void yunsuan :: display1 ()
{
	int a1,b1,cha,yu;
	string max;
	a1=a.length();b1=b.length();
	if(a1>b1)
	{
		cha=a1-b1;
		yu=b1;
		max=a;
	}
	else
	{
		cha=b1-a1;
		yu=a1;
		max=b;
	}
	int *sum;
	sum=new int[yu];
	int i;
	int jin,hou;
	string *zs;
	zs=new string[yu];


	string ah(max,cha);
	

	for(i=yu-1;i>=0;i--)
	{
		if(a1>b1)
		    sum[i]=ah[i]+b[i]-96;
		else
			sum[i]=ah[i]+a[i]-96;
	}


	for(i=yu-1;i>0;i--)
	{
		 if(sum[i]>=10)
		  {
			   hou=sum[i]-10;
			   jin=(sum[i]-hou)/10;
			   zs[i]=hou+48;
			   sum[i-1]=sum[i-1]+jin;
		  }
		  else
			   zs[i]=sum[i]+48;
		
	}
                                 
	
    if(cha==0)
	{
		if(sum[0]>=10)
	    {  
		    hou=sum[0]-10;
		    jin=(sum[0]-hou)/10;
		    zs[0]=hou+48;
		}
		
	
	    else
	    {zs[0]=sum[0]+48;}
	    string he;
	    he=jin+48;
	    for(i=0;i<yu;i++)
	    {
		    he=he+zs[i];
	    }
	    cout<<"两个数的和为："<<he<<endl;
	}                                   
	else
	{
		int *sumq;
	    string qa(max,0,cha);
	    sumq=new int[cha];
	    for(i=cha-1;i>=0;i--)
	    {
		    sumq[i]=qa[i]-48;
	    }

	    if(sum[0]>=10)
	    {
		    hou=sum[0]-10;
		    jin=(sum[0]-hou)/10;
		    zs[0]=hou+48;
		    sumq[cha-1]=sumq[cha-1]+jin;
	    } 
	    else
		    zs[0]=sum[0]+48;
	
	string *qhe;
	qhe=new string[cha];
	for(i=cha-1;i>0;i--)
	{
		if(sumq[i]>=10)
		{
			hou=sumq[i]-10;
			jin=(sumq[i]-hou)/10;
			qhe[i]=hou+48;
			sumq[i-1]=sumq[i-1]+jin;
		}
		else
			qhe[i]=sumq[i]+48;
	}

	string shouwei;
	string qhe1;
	if(sumq[0]>=10)
	{
		hou=sumq[0]-10;
		jin=(sumq[0]-hou)/10;
		qhe[0]=hou+48;
		shouwei=jin+48;
		qhe1=shouwei+qhe[0];
	}
	else
		qhe1=sumq[0]+48;
	
	
	for(i=1;i<cha;i++)
	{
		qhe1=qhe1+qhe[i];
	}

	string he;
	he=zs[0];
	for(i=1;i<yu;i++)
	{
		he=he+zs[i];
	}

	string zhe;
	zhe=qhe1+he;
	
	delete[]qhe;
	delete[]sumq;
	delete[]zs;
	delete[]sum;

	cout<<"两个数的和为："<<zhe<<endl;
	}
}

//两数的差
void yunsuan::display2()
{
	int i,a1,b1,*shua,*shub,*shuc,*shus;
	string *stra,max;
	a1=a.length();b1=b.length();
	int cha,yu;
	if(a1>b1)
	{
		cha=a1-b1;
		yu=b1;
		max=a;
	}
	else
	{
		cha=b1-a1;
		yu=a1;
		max=b;
	}

	if(cha==0)
	{shua=new int[a1];
	shub=new int[b1];
	shus=new int[a1];
	stra=new string[a1];
	for(i=a1-1;i>=0;i--)
	{
		shua[i]=a[i]-48;
		shub[i]=b[i]-48;
	}
	for(i=a1-1;i>0;i--)
	{
		if(shua[i]>=shub[i])
		{
			shus[i]=shua[i]-shub[i];
			stra[i]=shus[i]+48;
		}
		else
		{
			shua[i]=shua[i]+10;
			shus[i]=shua[i]-shub[i];
			shua[i-1]=shua[i-1]-1;
			stra[i]=shus[i]+48;
		}
	}
	shus[0]=shua[0]-shub[0];
	stra[0]=shus[0]+48;

	string zuhe;
	zuhe=stra[0];
	for(i=1;i<a1;i++)
	{
		zuhe=zuhe+stra[i];
	}

	cout<<"两个整数的差为："<<zuhe<<endl; 

	delete[]shuc;
	delete[]stra;
	delete[]shus;
	delete[]shub;
	delete[]shua;
	}

	else
	{
		string c(max,cha);
		shub=new int[yu];
		shus=new int[yu];
		shuc=new int[yu];
		stra=new string[yu];

		for(i=yu-1;i>=0;i--)
		{
			if(a1>b1)
			{
			shuc[i]=c[i]-48;
			shub[i]=b[i]-48;
			}
			else
			{
				shuc[i]=c[i]-48;
			    shub[i]=a[i]-48;
			}
		}

		for(i=yu-1;i>0;i--)
		{
			if(shuc[i]>=shub[i])
			{
				shus[i]=shuc[i]-shub[i];
				stra[i]=shus[i]+48;
			}

			else
			{
				shuc[i]=shuc[i]+10;
				shus[i]=shuc[i]-shub[i];
				shuc[i-1]=shuc[i-1]-1;
				stra[i]=shus[i]+48;
			}
		}
		int *shuq;
		string *strq;
		string q(max,0,cha);
		shuq=new int[cha];
		strq=new string[cha];

		for(i=cha-1;i>=0;i--)
		{
			shuq[i]=q[i]-48;
		}

		if(shuc[0]>=shub[0])
		{
			shus[0]=shuc[0]-shub[0];
			stra[0]=shus[0]+48;
		}
		else
		{
			shuc[0]=shuc[0]+10;
			shus[0]=shuc[0]-shub[0];
			stra[0]=shus[0]+48;
			shuq[cha-1]=shuq[cha-1]-1;
		}

		string *strb;
		strb=new string[cha];
		for(i=0;i<cha;i++)
		{
			strb[i]=shuq[i]+48;
		}

		string qian,hou;

		for(i=0;i<cha;i++)
		{
			qian=qian+strb[i];
		}
		for(i=0;i<yu;i++)
		{
			hou=hou+stra[i];
		}

		string he;
		he=qian+hou;

		cout<<"两个整数的差为："<<he<<endl;

		delete[]strb;
		delete[]strq;
		delete[]shuq;
		delete[]stra;
		delete[]shuc;
		delete[]shus;
		delete[]shub;
		
	}
}
yunsuan::~yunsuan(void)
{
}
