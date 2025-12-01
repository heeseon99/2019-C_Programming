#include <stdio.h>

int count(int num)
{
	if (num == 0)
		return 0;
	else
	{
		num = num / 10;
		return 1 + count(num);
	}
}

int main(void)
{
	int num;

	printf("정수를 입력하시오 ; ");
	scanf_s("%d", &num);

	printf("정수의 자릿수의 개수는 %d개 입니다.\n", count(num));

	return 0;
}