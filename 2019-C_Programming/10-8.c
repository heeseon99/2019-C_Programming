#include <stdio.h>
#include <math.h>
#define SIZE 10

double M(int data[])
{
	int i;
	int sum = 0;
	for (i = 0; i < SIZE; i++)
		sum = sum + data[i];

	return (double)sum / SIZE;
}

double V(int data[], double m)
{
	int i;
	int sum = 00;
	for (i = 0; i < SIZE; i++)
	{
		double diff = data[i] - m;
		sum += diff * diff;
	}
	return sum / SIZE;
}

int main(void)
{
	int data[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("%i번째 데이터를 입력하시오 : ", i+1);
		scanf_s("%d", &data[i]);
	}

	double m = M(data);
	double v = V(data, m);
	double std_dev = sqrt(v);

	printf("평균값은 %.2lf입니다.\n", m);
	printf("분산은 %.2lf입니다.\n", v);
	printf("표준편차는 %.2lf입니다.\n", std_dev);

	return 0;
}