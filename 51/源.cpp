#include<cstdio>
#include <list>
#include <iostream>
#include<vector>
#include<string>

using namespace std;
using  std::vector;
using  std::string;

int main()
{
    list<int> l{ 1,2,3,4,5 };
    list<int> ll(l);
    vector<int> v(l.begin(), l.end());
    for (auto x = v.begin(); x != v.end(); x++)
    {
        cout << *x << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}