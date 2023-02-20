#include<stdio.h>
int main() {
	int a[10];
	int x, i, j, k;
	int cout1 = 0;
	int cout2 = 0;
	float avg = 0;
	for (i = 0; i < 10;) {
		scanf_s("%d", &a[i]);
		i++;
	}
	for (j = 0; j < 10; j++) {
		if (a[j] > 80)
			cout1++;
	}
	for (k = 0; k < 10; k++)
		if (a[k] < 60)
			cout2++;
	for (i = 0; i < 10; i++)
		avg += a[i];
	avg /= 10;
	printf("80分以上人数为%d，不及格人数为%d，平均值为%f", cout1, cout2, avg);
	system("pause");
	return 0;
}
