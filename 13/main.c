#include<stdio.h>

int main() {
	int i;
	for (i = 100; i < 200; i++)
	{
		if ((i % 3 == 2)&&(i % 5 == 3)&&(i % 7 == 2))
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}
