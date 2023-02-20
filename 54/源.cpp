#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main(int argc, char* argv[])
{
	list<int> ilist = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> ideqEven, ideqOdd;

	auto begin = ilist.begin();
	auto end = ilist.end();
	for (begin; begin != end; begin++)
	{
		if (*begin % 2 == 0)
		{
			ideqEven.push_back(*begin);
		}
		else
		{
			ideqOdd.push_back(*begin);
		}
	}

	for (auto i : ideqEven)
	{
		cout << i << "  ";
	}
	cout << endl;
	for (auto i : ideqOdd)
	{
		cout << i << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}
