#include<stdio.h>

int main()
{
	char str[1000];
	gets(str);
	int len, num = 0, i;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			num++;
			if (str[i] != ' ' && str[i + 1] == '\0')
				num++;
	}
	printf("%d\n",num);
	system("pause");
	return 0;
}
