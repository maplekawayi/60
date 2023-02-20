#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float s, a, b, c, area;
	printf("请输入你的三条边:");
	scanf_s("%f%f%f", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));

		printf("面积为：%g\n", area);
		if (a == b && b == c)
			printf("\n等边三角形");
		else if (a == b || b == c || a == c)
			printf("等腰三角形");
		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			printf("直角三角形");

	}else {
		printf("不能组成三角形");
	}
	system("pause");
}
