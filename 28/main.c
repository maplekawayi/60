#include<stdio.h>

void main()
{
	int a[10], i, j, t;
	printf(" ‰»Î:");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
			if (a[j + 1] < a[j])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	}
	for (i = 0; i < 10; i++)
		printf("%3d\n", a[i]);
	system("pause");
}
