#include <stdio.h>

int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absolute(int n)
{
	if (n < 0)
		return -1 * n;
	else
		return n;
}

int sign(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 0;
	if (n > 0)
		return 1;
}

int main(void)
{
	int x;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);

	if (even(x) == 1)
		printf("even()의 결과 : 짝수\n");
	else
		printf("even()의 결과 : 홀수\n");


	printf("absolute()의 결과 : %d\n", absolute(x));

	if (sign(x) == -1)
		printf("sign()의 결과 : 음수\n");
	else if (sign(x) == 0)
		printf("sign()의 결과 : 0\n");
	else if (sign(x) == 1)
		printf("sing()의 결과 : 양수\n");

	return 0;
}