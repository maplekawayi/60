#include<iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	string str;
	while (getline(cin, str))	//从标准输入值一次读入一整行
	{
		if (!str.empty())
			cout << str << endl;
	}
}

//int main()
//{
//	string str;
//	while (cin >> str)	//从标准输入值一次读入一个词
//	{
//		if (!str.empty())
//			cout << str << endl;
//	}
//
//}