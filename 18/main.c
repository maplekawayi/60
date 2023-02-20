#include <stdio.h>

int main()
{
	int i, j;
	int a[5][5] = { {1,1,1,1,1},{2,1,1,1,1},{3,2,1,1,1},{4,3,2,1,1},{5,4,3,2,1} };
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%5d", a[i][j]);
				printf("\n");
	}
	system("pause");
	return 0;
}
