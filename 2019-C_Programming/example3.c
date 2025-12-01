#include <stdio.h>

int sum(int n) {
	if (n != 0)
		return n + sum(n - 1);

	else
		return n;
}

int main(void) {
	int n;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);

	int result;
	result = sum(n);

	printf("1부터 %d까지의 합 = %d\n", n, result);
	return(0);
}