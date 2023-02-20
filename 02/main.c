#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c,c2;
	while(fflush(stdin),scanf_s("%c",&c)!=EOF)
	{
		c2=c-32;
		printf("%c¥Û–¥ «%c\n",c,c2);
	}
	system("pause");
	return 0;
}