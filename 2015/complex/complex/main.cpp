#include <iostream>
#include "Complex.h"
using namespace std;

void main()
{
	Complex c,conj;

	c.setValue(1.1,2.1);
	cout << "实部为：" << c.getReal() << endl;
    cout << "虚部为：" << c.getImag() << endl;

	conj = c.conjugate();
	cout << "复数";
	c.display();
	cout << "共轭为：";
	conj.display();
	cout << endl;
}