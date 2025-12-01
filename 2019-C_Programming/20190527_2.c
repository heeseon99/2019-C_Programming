#include <stdio.h>

int main(void)
{
	int x;
	int n;
	int sum = 0;

	printf("몇 개의 정수를 입력하시겠습니까?");
	scanf_s("%d", &n);

	printf("정수를 입력하시오 : ");

	int i;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &x);
		sum = sum + x;
	}

	double avg;
	avg = (double)sum / n;

	printf("평균은 %.2f입니다.\n", avg);

	return 0;

}