#include <stdio.h>

int sub(num1, num2)
{
	return num1 - num2;
}
int mul(num1, num2)
{
	return num1 * num2;
}
int quo(num1, num2)
{
	return num1 / num2;
}
int rest(num1, num2)
{
	return num1 % num2;
}

int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		int num1, num2;
		printf("첫번째 정수를 입력하시오 : ");
		scanf_s("%d", &num1);
		printf("두번째 정수를 입력하시오 : ");
		scanf_s("%d", &num2);

		printf("뺄셈 : %d\n", sub(num1, num2));
		printf("곲셈 : %d\n", mul(num1, num2));
		printf("몫 : %d\n", quo(num1, num2));
		printf("나머지 : %d\n", rest(num1, num2));
	}

	return 0;
}