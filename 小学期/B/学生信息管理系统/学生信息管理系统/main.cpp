#include"studentxs.h"

void main()
{
	int i,l=1;
	studentxs s1;
	cout<<"1.����"<<endl<<"2.���"<<endl<<"3.��ѯ"<<endl<<"4.�޸�"<<endl<<"5.ɾ��"<<endl<<"6.��ʾ"<<endl<<"7.�˳�"<<endl;
	while(l)
	{
		int n;
	    
	    cout<<"��ѡ����Ҫʹ�õĹ�����ţ�"<<endl;
        cin>>n;
	
	    switch(n)
	    {
	    case 1:  s1.input();break;
		case 2:  s1.add();break; 
		case 3:  cout<<"��������Ҫ��ѯ�ķ�ʽ��ţ�"<<"1.ѧ�ţ�2.�༶רҵ"<<endl;
			 cin>>i;
			 if(i==1)
			 {
				 string x;
				 cout<<"�������ѯѧ����ѧ��"<<endl;
	             cin>>x;
				 s1.inquiry1(x);
				 break;
			 }
			 else
			 {
				 s1.inquiry2();
				 break;
			 }
		case 4:  s1.xiugai();break;
		case 5:  cout<<"������ɾ��ѧ����Ϣ��ʽ����ţ�"<<"1.ѧ��    2.����"<<endl;
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