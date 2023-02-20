#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

int main()
{
	map<string, vector<string>> fam;
	string last_name, childs_name;
	cout << "Please input the family name: " << endl;
	cin >> last_name;
	cout << "Please input new childs' name: " << endl;
	while (cin >> childs_name)
	{
		fam[last_name].push_back(childs_name);
	}

	for (auto& s : fam)
	{
		cout << "====================" << endl;
		cout << "new family: " << endl;
		cout << s.first << endl;
		cout << "====================" << endl;
		cout << "new childs: " << endl;
		for (auto& c : s.second)
			cout << c << endl;
	}
	cout << "====================" << endl;
	system("pause");
	return 0;
}