#include <stdio.h>
#include <math.h>
#define PI 3.1415926535

double sin_degree(double degree)
{
	double rad;
	rad = (PI * degree) / 180.0;

	double result;
	result = sin(rad);

	return result;
}

int main(void)
{
	double num;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &num);

	printf("sin(%lf)�� ���� %lf�Դϴ�.\n", num, sin_degree(num));

	return 0;
}