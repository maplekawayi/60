#include <stdio.h>

void itoa(int value, char str[])
{
	const char fonts[] = "0123456789";
	char tmp_buff[10] = { 0 };
	int i = 0, j = 0;

	while (value)
	{
		tmp_buff[i++] = fonts[value%10];
		value/=10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		*str++ = tmp_buff[j];
	}
	*str = '\0';
	return str;
}

int main(void)
{
	int i;
	char str[10] = { 0 };
	scanf_s("%d", &i);
	itoa(i, str);
	printf("×Ö·û´®=%s\n",str);
	system("pause");
	return 0;
}
