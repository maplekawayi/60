#include<stdio.h>

int main()

{
	int i, j, a[3][3], sum = 0;
	printf("���룺\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf_s("%d", &a[i][j]);
	for (i = 0; i < 3; i++)
		sum += a[i][i];
	printf("�Խ���֮��Ϊ��%d\n", sum);
	system("pause");
	return 0;
}