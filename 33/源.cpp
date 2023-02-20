#include<iostream>

using namespace std;

class Tree
{
public:
	int grow(int years);
	void age();
private:
	int ages;
};

int Tree::grow(int years)
{
	cout << "输入树的树龄:";
	cin >> ages;
	ages = ages + years;
	return ages;
}

void Tree::age()
{
	cout << "树的年龄为:"<< ages << endl;
}

int main()
{
	Tree ages;
	int i;
	cout << "输入树的年份:";
	cin >> i;
	ages.grow(i);
	ages.age();
	system("pause");
}
