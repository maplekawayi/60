#include<stdio.h>

int main()
{
	int a, b;
	printf("请输入a\n");
	scanf_s("%d", &a);
	printf("请输入b\n");
	scanf_s("%d", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("换后a为%d,b为%d", a, b);
	system("pause");
}
