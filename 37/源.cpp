#include<iostream>

using namespace std;

class tri
{
public:
	tri() { a = 0, b = 0, c = 0; }
	tri(int a, int b, int c) :a(a), b(b), c(c) {}
	friend tri operator +(tri& t1, tri& t2);

	void display()
	{
		cout << "两个三角形的面积和是：" << area << endl;
	}

	~tri() {}
private:
	double a, b, c;
	double area;
};

tri operator + (tri& t1, tri& t2)

{
	tri t;
	double p, p1;
	p = (t1.a + t1.b + t1.c) / 2.0;
	p1 = (t2.a + t2.b + t2.c) / 2.0;
	t1.area = sqrt(p * (p - t1.a) * (p - t1.b) * (p - t1.c));
	t2.area = sqrt(p1 * (p1 - t2.a) * (p1 - t2.b) * (p1 - t2.c));
	t.area = t1.area + t2.area;
	return t;
}

int main()

{
	tri t1(3, 4, 5), t2(6, 8, 10), t3;
	t3 = t1 + t2;
	t3.display();
	system("pause");
	return 0;
}
