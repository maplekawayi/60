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
	cout << "������������������" << endl;
	cin >> a >> b;
	cout << "������������������" << endl;
	cin >> x >> y;
	c = add(a, b);
	z = add(x, y);
	cout << "������֮���ǣ�" << c << endl;
	cout << "������֮���ǣ�" << z << endl;
	system("pause");
	return 0;
}
