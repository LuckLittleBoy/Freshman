#include"list.h"

void main()
{
	list s1;
	int i,l=1;
	cout<<"1.创建"<<endl<<"2.添加"<<endl<<"3.查询"<<endl<<"4.修改"<<endl<<"5.删除"<<endl<<"6.显示"<<endl<<"7.退出"<<endl;
	while(l)
	{
		int n;
	    
	    cout<<"请选择你要使用的功能序号："<<endl;
        cin>>n;
	
	    switch(n)
	    {
	    case 1:  s1.input();break;
		case 2:  s1.add();break; 
		case 3:  cout<<"请输入你要查询的方式序号："<<"1.姓名  2.手机"<<endl;
			 cin>>i;
			 if(i==1)
			 {
				 string s;
				 cout<<"请输入查询的姓名："<<endl;
	             cin>>s;
				 s1.inquiry1(s);
				 break;
			 }
			 else
			 {
				 string m;
				 cout<<"请输入查询的手机号码：";
				 cin >> m;
				 s1.inquiry2(m);
				 break;
			 }
		case 4:  s1.xiugai();break;
		case 5:  cout<<"请输入删除通讯人信息方式的序号："<<"1.编号    2.姓名"<<endl;
			 cin>>i;
			 if(i==1)
			 {
				 s1.del2();
				 break;
			 }
			 else
			 {
				 s1.del1();
				 break;
			 }
	    case 6:  s1.output();break;
		case 7:  l=0;
		}
	}
}