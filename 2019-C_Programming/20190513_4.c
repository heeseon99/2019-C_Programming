#include <stdio.h>

float sum(float x, float y, float z)
{
	return x + y + z;
}
float avg(float x, float y, float z)
{
	return (x + y + z) / 3.0;
}

int main(void)
{
	float x, y, z;

	printf("세 개의 실수를 입력하시오 : ");
	scanf_s("%f %f %f", &x, &y, &z);

	printf("합계 : %f", sum(x, y, z));
	printf("평균 : %f", avg(x, y, z));

	return 0;
}