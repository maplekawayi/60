#include <stdio.h>

void main()
{
	char ch;
	ch = getchar();
	if (ch >= 'A'&&ch <= 'Z')
	{
		printf("Ϊ��д�ַ�\n");
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("ΪСд�ַ�\n");
	}
	else
	{
		printf("����26��Ӣ����ĸ\n");
	}
	system("pause");
}
