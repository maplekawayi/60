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
	cout << "������������:";
	cin >> ages;
	ages = ages + years;
	return ages;
}

void Tree::age()
{
	cout << "��������Ϊ:"<< ages << endl;
}

int main()
{
	Tree ages;
	int i;
	cout << "�����������:";
	cin >> i;
	ages.grow(i);
	ages.age();
	system("pause");
}
