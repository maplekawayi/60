#include<iostream>
#include<string>


using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str1, str2;
	while (getline(cin, str1))
	{
		if (!str1.empty())
		{
			str2 = str2 + str1;
		}
		else
		{
			if (str2.empty())
			{
				cout << "Ã»ÓĞ×Ö·û´®£¡" << endl;
				system("pause");
				return 0;
			}
			else
			{
				cout << str2 << endl;
				system("pause");
				return 0;
			}
		}
	}

	return 0;
}

//int main()
//{
//	string str1, str2;
//	bool first_str = true;
//	while (getline(cin, str1))
//	{
//		if (!str1.empty())
//		{
//			if (first_str == true)
//			{
//				str2 = str1;
//				first_str = false;
//			}
//			else
//			{
//				str2 = str2 + " " + str1;
//			}
//
//		}
//		else
//		{
//			if (str2.empty())
//			{
//				cout << "Ã»ÓĞ×Ö·û´®£¡" << endl;
//				system("pause");
//				return 0;
//			}
//			else
//			{
//				cout << str2 << endl;
//				system("pause");
//				return 0;
//			}
//		}
//	}
//	return 0;
//}