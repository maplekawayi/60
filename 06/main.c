#include<stdio.h>
#include<stdlib.h>
int Fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	int last2 = 1;
	int last1 = 1;
	int result = 0;
	for (int i = 3; i <= n; ++i) {
		result = last1 + last2;
		last2 = last1; 
		last1 = result;
	}
	return result;
}
int main() {
	int n;
	scanf_s("%d", &n);
	int ret = Fib(n);
	printf("ret=%d\n", Fib(n));
	system("pause");
	return 0;
}

