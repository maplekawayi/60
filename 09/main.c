#include <stdio.h>

int main()
{
	int i;
	int a[3], min, max;
		for (i = 0; i <= 2; i++)
		{
			printf("ÊäÈë:");
			scanf_s("%d", &a[i]);
		}
	max = min = a[0];
	//max = min = 0;
	for (i = 1; i <= 2; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("max=%d\n", max);
	printf("min=%d\n", min);
	system("pause");
}
