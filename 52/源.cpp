#include <iostream>
#include <string>
#include <vector>
#include <list>

using std::cout;
using std::list;
using std::string;
using std::vector;

int main()
{
    list<const char*> chars = { "hello", "world", "!" };
    vector<string> str;
    str.assign(chars.cbegin(), chars.cend());
    cout << "赋值后的string为：";
    for (auto& s : str)
        cout << s << ' ';
    system("pause");
    return 0;
}