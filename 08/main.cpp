#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float s, a, b, c, area;
	printf("���������������:");
	scanf_s("%f%f%f", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));

		printf("���Ϊ��%g\n", area);
		if (a == b && b == c)
			printf("\n�ȱ�������");
		else if (a == b || b == c || a == c)
			printf("����������");
		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			printf("ֱ��������");

	}else {
		printf("�������������");
	}
	system("pause");
}
