#include <stdio.h>

int main(void)
{
	float x, y, z;

	printf("세 개의 실수를 입력하시오 : ");
	scanf_s("%f %f %f", &x, &y, &z);

	float sum, avg;

	sum = x + y + z;
	avg = sum / 3.0;

	printf("합 : %f\n", sum);
	printf("평균 : %f\n", avg);

	return 0;
}