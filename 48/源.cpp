#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int flag1 = 1, flag2 = 1;
    string s1("aaaa");
    string s2("aaaa");
    if (s1 != s2)
        flag1 = 0;
    char s3[] = "bbbb";
    char s4[] = "bbbb";
    if (strcmp(s3, s4) != 0)
    {
        flag2 = 0;
    }
    cout << flag1 << flag2 << endl;
    system("pause");
    return 0;
}
