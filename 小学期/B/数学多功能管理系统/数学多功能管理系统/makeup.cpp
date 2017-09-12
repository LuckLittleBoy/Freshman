#include "makeup.h"


makeup::makeup(void)
{
}

void makeup::sushu()
{
	   int n,i,j,a;
	   j=0;
	   for(n=2;n<=1000;n++)   
	   {    
			for(i=2,a=1;i<n;i++) 
			{     
				if(n%i==0)
			    {
				    a=0;  
				    break;
			    }  
		    }  
		    if(a)
			{
				j++;
			    cout<<n<<" ";
			}
			if(j%10==0&&j!=0)
			{
				j=0;
				cout << endl;
			}
	   }
}

void makeup::shuixianhua()
{
		int a,b,c,d,k;
		k=0;
		for(a=100;a<=999;a++)	
		{	
			b=a/100;	
			c=(a-100*b)/10;
			d=a%10;	   
			if(a==b*b*b+c*c*c+d*d*d)
			{
				k++;
				cout<<a<<" ";
			}
			if(k%10==0&&k!=0)
			{
				k=0;
				cout << endl;
			}
		}
}

void makeup::wanshu()
{
	  int x,i,j,sum; 
	  j=0;
	  for(x=1;x<=1000;x++)    
	  {		
		  sum=0; 	   
		  for(i=1;i<x;i++)	  
		  {		 
			  if(x%i==0) 
				  sum+=i;		  	  
		  }          
		  if(x==sum)
		  {
			  j++;
			  cout<<x<<" ";	
		  }
		  if(j%10==0&&j!=0)
		  {
			  j=0;
			  cout << endl;
		  }
	  }	
}

void makeup::zifu()
{
	int len;
	char s[100];
	cout <<"ÇëÊäÈëÒ»´®×Ö·û£º"<< endl;
	cin >> s;
	len=sizeof(s)/sizeof(char);
	int A=0,a=0,k=0,e=0,f=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
			A++;
		else if(s[i]>='a'&&s[i]<='z')
			a++;
		else if(s[i]==' ')
			k++;
		else if(s[i]>='0'&&s[i]<='9')
			e++;
		else
			f++;
	}
	cout << "´óÐ´×ÖÄ¸£º" << A << endl;
	cout << "Ð¡Ð´×ÖÄ¸£º" << a << endl;
	cout << "¿Õ¸ñ£º" << k << endl;
	cout << "Êý×Ö£º" << e << endl;
	cout << "ÆäËû×Ö·û£º" << f << endl;
}

void makeup::maopao()
{
	string t,str[10];
	int i,j;
	cout << "ÇëÊäÈë10¸ö×Ö·û´®£º" << endl;
	for(i=0;i<10;i++)
		cin >> str[i];
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(str[j]<str[j+1])
			{
				t=str[j];
				str[j]=str[j+1];
				str[j+1]=t;
			}
		}
	}
	for(i=0;i<10;i++)
		cout << str[i] << endl;

}

makeup::~makeup(void)
{
}
