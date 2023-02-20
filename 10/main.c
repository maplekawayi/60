#include <stdio.h>

float n;
float c;
float celsius;

int Temk(float c) {
	c=(n-32)*5/9;
	printf("%f",c);
	return c;
}
int main()
{
	scanf_s("%f", &n);
	Temk(n);
	system("pause");
}
