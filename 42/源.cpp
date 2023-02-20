#include<iostream>

using namespace std;

class graph
{
protected:
	float high, wide;
public:
	graph();
	graph(float h, float w)
	{
		high = h; wide = w; cout << "高为：" << h << "\t宽为：" << w << endl;
	}
};
class retangle :public graph
{
public:
	retangle(float h, float w) :graph(h, w) {}
	void area()
	{
		cout << "矩形的面积是:" << high*wide << endl;
	}
};
class triangle :public graph
{
public:
	triangle(float h, float w) :graph(h, w) {}
	void area()
	{
		cout << "等腰三角形的面积是:" << high*wide / 2 << endl;
	}
};
void main()
{
	retangle g(2, 3);
	g.area();
	triangle h(2, 3);
	h.area();
	system("pause");
}
