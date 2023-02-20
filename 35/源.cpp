#include<iostream>

using namespace std;

class Complex
{
private:
	int real;
	int imag;
public:
	Complex()
	{
		real = 0;
		imag = 0;
	}
	Complex(int r, int i) :real(r),imag(i){};
	friend Complex operator+(Complex& c1, Complex& c2);
	void display();

};

void Complex::display()
{
	cout << "real = " << real << endl;
	cout << "imag = " << imag << endl;
}
Complex operator+(Complex& c1, Complex& c2)
{
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
int main()
{
	Complex c1(3, 4);
	Complex c2(5, 8);
	Complex c3;
	c3 = c1 + c2;
	c3.display();
	system("pause");
	return 0;
}
