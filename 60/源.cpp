#include<iostream>
#include<vector>
using namespace std;

vector<int> sort(vector<int>& ivec);
int main()
{
    cout << "��������Ҫ��������֣�" << endl;
    int i = 0;
    vector<int> ivec;

    while (cin >> i)
    {
        ivec.push_back(i);
    }

    cout << "Ϊ����ǰ�����У�" << endl;

    for (vector<int>::iterator iter = ivec.begin();
        iter != ivec.end(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;

    cout << "�������������£�" << endl;
    //����
    vector<int> i_vec = sort(ivec);
    //���
    for (vector<int>::iterator i_iter = i_vec.begin();
        i_iter != i_vec.end(); ++i_iter)
    {
        cout << *i_iter << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}


vector<int> sort(vector<int>& ivec)
{
    const int  COUNT = ivec.size();
    for (int i = 1; i < COUNT; i++)
    {
        for (int j = 0; j < COUNT - i; ++j)
        {
            if (ivec[j] > ivec[j + 1])
            {
                int temp = 0;
                temp = ivec[j];
                ivec[j] = ivec[j + 1];
                ivec[j + 1] = temp;
            }
        }
    }
    return ivec;
}