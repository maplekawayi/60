#include<stdio.h>
#include<stdlib.h>


int fun(int m, int k, int i)
{
    if (i == 1)
        return (m + k - 1) % m;
    else
        return (fun(m - 1, k, i - 1) + k) % m;
}
int main(int argc, char* argv[])
{
    for (int i = 1; i <= 10; i++)
    {
        printf("第%2d次出环：%2d\n", i, fun(10, 3, i));
    }
    system("pause");
    return 0;
}
