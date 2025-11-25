#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("첫번째 정수를 입력하시오 : ");
	scanf_s("%d", &num1);
	printf("두번째 정수를 입력하시오 : ");
	scanf_s("%d", &num2);

	int quo, rest;
	quo = num1 / num2;
	rest = num1 % num2;

	printf("몫 : %d\n", quo);
	printf("나머지 : %d\n", rest);

	return 0;
}