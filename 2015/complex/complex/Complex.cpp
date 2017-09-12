#include "Complex.h"

Complex::Complex(void)
{
}

Complex::~Complex(void)
{
}

void Complex::setValue(double a, double b)
{
   real = a;
   imag = b;
}

void Complex::display()
{
	cout << real;
	if(imag > 0)
		cout << "+";
    cout << imag;
	cout << "i";
}

Complex Complex::conjugate()
{
	Complex con;
	
	con.real = real;
	con.imag = -1.0 * imag;
    
	return con;
}
