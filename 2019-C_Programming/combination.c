#include <stdio.h>

int combination(int n, int r)
{
	return ((factorial(n)) / (factorial(r) * factorial(n - r)));
}

int factorial(int n)
{
	int i;
	long result = 1;

	for (i = 1; i <= n; i++)
		result *= i;

	return result;
}

int main(void)
{
	int x, y;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &y);

	printf("C(%d, %d) = %d\n", x, y, combination(x, y));

	return 0;
}