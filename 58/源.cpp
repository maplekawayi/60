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
//set���ŵ㣬set�ǰ��չؼ��ֽ��д洢��
//��ˣ����������Ѿ�����һ��ͬ���Ĺؼ��֣�
//�Ǽ���Ҫ����Ĺؼ��־ͻᱻ���ԡ����set����Ĺؼ���Ψһ��