#include"score.h"


void main()
{
	int l=1; 
	int index,x;
	string a;
	score s1;
	cout<<"1.����"<<endl<<"2.���"<<endl<<"3.����"<<endl<<"4.����"<<endl<<"5.��ѯ"<<endl<<"6.��ʾ"<<endl<<"7.�˳�"<<endl;
	while(l)
	{
		int n;
	    
	    cout<<"��ѡ����Ҫʹ�õĹ�����ţ�"<<endl;
        cin>>n;
	
	    switch(n)
	    {
	    case 1:  s1.input();break;
		case 2: 
			cout << "��������Ҫ��ӵ�λ���±꣺" << endl;
			cin >> index;
			cout << "��������Ҫ��ӵ�������" << endl;
			cin >> x;
			s1.add(index,x);break; 
		case 3:  s1.huizong();break;
		case 4:  s1.paixu();break;
		case 5:  
			cout << "��������Ҫ��ѯ��ѧ����ѧ�ţ�" << endl;
			cin >> a;
			s1.inquiry(a); break;
	    case 6:  s1.output();break;
		case 7:  l=0;
		}
	}
}
