#include<iostream>

using namespace std;

template<typename T>
T add(T a, T b)
{
	T c;
	c = a + b;
	return c;
}
int main()
{
	int a, b, c;
	float x, y, z;
	cout << "请输入两个整型数：" << endl;
	cin >> a >> b;
	cout << "请输入两个浮点数：" << endl;
	cin >> x >> y;
	c = add(a, b);
	z = add(x, y);
	cout << "整型数之和是：" << c << endl;
	cout << "浮点数之和是：" << z << endl;
	system("pause");
	return 0;
}
