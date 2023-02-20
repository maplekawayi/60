#include <stdio.h>
#include <string.h>

void main() {
	char copy(char *pointer_a, char *pointer_b);
	char str_a[50] = "My name is Li jilin";
	char str_b[50] = "Mr. Zhang Haoling is very happy";
	char *pointer_a,*pointer_b;
	pointer_a = str_a;
	pointer_b = str_b;
	copy(pointer_a, pointer_b);
	printf("输出新字符串a:\n%s", pointer_a);
	system("pause");
}
char copy(char* pointer_a, char* pointer_b) 
{
	int m_a = 11;//a字符串被替换的起点下标
	int n1_b = 4, n2_b = 16;//b字符串被替换的起点和终点下标
	while (n1_b <= n2_b) {
		*(pointer_a + m_a) = *(pointer_b + n1_b);
		n1_b++;
		m_a++;
	}
	*(pointer_a + m_a) = '\0';
}
