#include<stdio.h>

int main()
{
	int a, b;
	printf("������a\n");
	scanf_s("%d", &a);
	printf("������b\n");
	scanf_s("%d", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("����aΪ%d,bΪ%d", a, b);
	system("pause");
}
