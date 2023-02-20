#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
	map<string, size_t> word_count;
	word_count["the"] = 3;
	cout << word_count["the"] << endl;
	system("pause");
	return 0;
}
//map下标操作的类型:
//NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//map返回值的类型:i
