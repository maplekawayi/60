#include<stdio.h>

int main()
{
	int i = 2, k;
	scanf_s("%d", &k);
	printf("%d=", k);
	while (k > 1){
		if (k%i == 0) {
			printf("%d", i);
			k =k/i;
			if (k!=1){
				printf("");
			}
		}
		else i++;
	}
	system("pause");
}
