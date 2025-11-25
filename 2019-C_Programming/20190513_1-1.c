#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("첫번째 정수를 입력하시오 : ");
	scanf_s("%d", &num1);
	printf("두번째 정수를 입력하시오 : ");
	scanf_s("%d", &num2);

	int sub, mul;
	sub = num1 - num2;
	mul = num1 * num2;

	printf("뺄셈 : %d\n", sub);
	printf("곱셈 : %d\n", mul);

	return 0;
}