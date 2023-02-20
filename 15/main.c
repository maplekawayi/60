#include <stdio.h>

void main()
{
	char ch;
	ch = getchar();
	if (ch >= 'A'&&ch <= 'Z')
	{
		printf("为大写字符\n");
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("为小写字符\n");
	}
	else
	{
		printf("不是26个英文字母\n");
	}
	system("pause");
}
