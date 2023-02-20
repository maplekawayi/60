#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string add(string name, const string& prefix, const string& postfix)
{
	name.insert(name.begin(), prefix.begin(), prefix.end());
	name.append(postfix);
	return name;
}

int main()
{
	string name("wanglongbo");
	cout << "原名为：" << name << endl;
	name = add(name, "Ms.", " III");
	cout << "添加前后缀后为：" << name << endl;
	system("pause");
	return 0;
}