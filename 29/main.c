#include<stdio.h>
#include<stdlib.h>

char Sum(unsigned short n)
{
	char c=0;
	int i=4;
	do
	{
		c += n & 15;
		n = n >> 4;
	} while (--i);
	return c;
}
int main()
{
	short n = 54711;
	Sum(n);
	printf("%d", Sum(n));
	system("pause");
	return 0;
}
