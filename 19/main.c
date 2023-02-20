#include <stdio.h>

int fact(int j)
{
	int sum,i,s=12;	
	for (i = 1; i < j; i++)
	{
		sum = j * 10 + 2;
		s = s + sum;
	}
	return s;
}

int main()
{
	int i, n;
	int fact(int);
	printf("请输入一个n值：\n");
	scanf_s("%d", &n);
	printf("sum=%d\n", fact(n));
	system("pause");
}
