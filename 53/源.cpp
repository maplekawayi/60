#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char* argv[])
{
	string word;
	deque<string> sdeq;
	while (cin >> word)
	{
		if (word == "n" || word == "N")
			break;
		sdeq.push_back(word);
	}

	auto begin = sdeq.cbegin();
	auto end = sdeq.cend();
	for (begin; begin != end; begin++)
	{
		cout << *begin << endl;
	}
	system("pause");
	return 0;
}
