#include<stdio.h>

int main()
{
	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	printf("����:\n");
	while ((c = getchar()) != '\n')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letters++;
		else if (c >= '0' && c <= '9')
			digits++;
		else if (c == ' '||c == '\t')
			spaces++;
		else
			others++;
	}
	printf("��ĸ��%d����������%d�����ո���%d����������%d��", letters, digits, spaces, others);
	system("pause");
		return 0;
}
