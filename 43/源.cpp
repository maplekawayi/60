#include<iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	string str;
	while (getline(cin, str))	//�ӱ�׼����ֵһ�ζ���һ����
	{
		if (!str.empty())
			cout << str << endl;
	}
}

//int main()
//{
//	string str;
//	while (cin >> str)	//�ӱ�׼����ֵһ�ζ���һ����
//	{
//		if (!str.empty())
//			cout << str << endl;
//	}
//
//}