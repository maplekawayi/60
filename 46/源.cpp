#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string src, dest;
	getline (cin, src);
	for (auto c : src)
	{
		if (!ispunct(c))
		{
			dest.push_back(c);
		}
	}
	cout << dest << endl;
	system("pause");
	return 0;
}