#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y;
	while (fflush(stdin),scanf_s("%d", &x) != EOF)
	{
		if (x<5)
		{
			y = x;
			printf("%d\n", y);
		}else if (x >= 5 && x < 15) {
			y = x + 6;
			printf("%d\n", y);
		}else{
			y = x - 6;
			printf("%d\n", y);
		}
	}		
}