#include <iostream>
#include "Complex.h"
using namespace std;

void main()
{
	Complex c,conj;

	c.setValue(1.1,2.1);
	cout << "ʵ��Ϊ��" << c.getReal() << endl;
    cout << "�鲿Ϊ��" << c.getImag() << endl;

	conj = c.conjugate();
	cout << "����";
	c.display();
	cout << "����Ϊ��";
	conj.display();
	cout << endl;
}