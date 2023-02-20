#include <stdio.h>

#define PI 3.1415926

int main()
{
	float r, h;
	float S, V;
	scanf_s("%f %f", &r, &h);
	S = PI*(r*r);
	V = S*h;
	printf("圆柱体底面积为%f,圆柱体体积为%f",S,V);
	system("pause");
}
