#include<iostream>
using namespace std;
bool hui(char c[])
{
  int len,i,j;
  len=strlen(c);
  for(i=0,j=len-1;i<=j;i++,j--)
  {
     if(c[i]!=c[j]) 
	    return false;
	 if(i>j)
        return true;
  }
}

int main()
{
  char c[2000];
  cout<<"请输入一个整数：";
  cin>>c;
  if(hui(c))
     cout<<c<<" 是回文"<<endl;
  else 
	  cout<<c<<" 不是回文"<<endl;
  return 0;
}
