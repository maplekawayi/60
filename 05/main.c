#include <stdio.h>
#include <math.h>

int main()

{
	float x;
	printf("����ɼ�:\n");
	scanf_s("%f", &x);
	if (x >= 90) {
		printf("A\n");
	}
	else if (x < 89 && x >= 80) {
		printf("B\n");
	}
	else if (x < 79 && x >= 70) {
		printf("C\n");
	}
	else if (x < 69 && x >= 60) {
		printf("D\n");
	}
	else {
		printf("�ɼ�������");
	}
	system("pause");
	return 0;
}