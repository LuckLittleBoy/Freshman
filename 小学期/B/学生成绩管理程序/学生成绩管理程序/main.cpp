#include"score.h"


void main()
{
	int l=1; 
	int index,x;
	string a;
	score s1;
	cout<<"1.创建"<<endl<<"2.添加"<<endl<<"3.汇总"<<endl<<"4.排序"<<endl<<"5.查询"<<endl<<"6.显示"<<endl<<"7.退出"<<endl;
	while(l)
	{
		int n;
	    
	    cout<<"请选择你要使用的功能序号："<<endl;
        cin>>n;
	
	    switch(n)
	    {
	    case 1:  s1.input();break;
		case 2: 
			cout << "请输入所要添加的位置下标：" << endl;
			cin >> index;
			cout << "请输入所要添加的人数：" << endl;
			cin >> x;
			s1.add(index,x);break; 
		case 3:  s1.huizong();break;
		case 4:  s1.paixu();break;
		case 5:  
			cout << "请输入所要查询的学生的学号：" << endl;
			cin >> a;
			s1.inquiry(a); break;
	    case 6:  s1.output();break;
		case 7:  l=0;
		}
	}
}
