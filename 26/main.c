#include <stdio.h>


double sum(int n)
{
	double sum = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		sum +=(double)1/(i * 2);
	}
	return sum;
}

int main()
{
	int n;
	printf("ÇëÊäÈë20\n");
	scanf_s("%d", &n);
	printf("sum=%f\n",sum(n));
	system("pause");
	return 0;
}
