#include<iostream>
#include<vector>
using namespace std;

vector<int> sort(vector<int>& ivec);
int main()
{
    cout << "请输入想要排序的数字：" << endl;
    int i = 0;
    vector<int> ivec;

    while (cin >> i)
    {
        ivec.push_back(i);
    }

    cout << "为排序前的序列：" << endl;

    for (vector<int>::iterator iter = ivec.begin();
        iter != ivec.end(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;

    cout << "排序后的序列如下：" << endl;
    //排序
    vector<int> i_vec = sort(ivec);
    //输出
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