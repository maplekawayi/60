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
	cout << "ԭ��Ϊ��" << name << endl;
	name = add(name, "Ms.", " III");
	cout << "���ǰ��׺��Ϊ��" << name << endl;
	system("pause");
	return 0;
}