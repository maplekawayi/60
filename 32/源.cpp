#include<iostream>
#include<cmath>

using namespace std;

class Box {
	double x, y, z, s, v;
public:
	Box(double a = 0, double b = 0, double c = 0);
	~Box() {};
	void init(double a, double b, double c);
	void show();
	double volue();
	double area();
};
Box::Box(double a, double b, double c) {
	x = a; y = b; z = c;
}
void Box::init(double a, double b, double c) {
	x = a; y = b; z = c;
}
double Box::volue() {
	v = x * y * z;
	return v;
}
double Box::area() {
	s = 2 * (x * y + y * z + z * x);
	return s;
}
void Box::show()
{
	cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
		cout<<"s="<<s<<"v="<<v<<endl;
}
void main()
{
	Box a;
	a.init(2, 3, 4);
	a.volue();
	a.area();
	a.show();
	system("pause");
}