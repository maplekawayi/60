#include <stdio.h>

#define PI 3.1415926

int main()
{
	float r, h;
	float S, V;
	scanf_s("%f %f", &r, &h);
	S = PI*(r*r);
	V = S*h;
	printf("Բ��������Ϊ%f,Բ�������Ϊ%f",S,V);
	system("pause");
}
