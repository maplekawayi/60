#include<iostream>
#include<set>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<string> vec = { "the", "red", "fox" };
	string word;
	while (cin >> word)
	{
		if (find(vec.cbegin(), vec.cend(), word) != vec.cend())
			cout << word << " is duplicate word " << endl;
		else
			vec.push_back(word);
	}
	for (const auto& c : vec)
		cout << c << " ";
	cout << endl;
	system("pause");
	return 0;
}
//set的优点，set是按照关键字进行存储，
//因此，当集合里已经有了一个同样的关键字，
//那即将要存入的关键字就会被忽略。因此set里面的关键字唯一。