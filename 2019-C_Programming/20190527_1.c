#include  <stdio.h>

int testweight(double high, double weight)
{
	int standard;
	standard = (high - 100) * 0.9;

	if (weight > standard)
		return 1;
	else if (weight == standard)
		return 0;
	else if (weight < standard)
		return -1;
}

int main(void)
{
	double weight, high;
	int result;

	while (1)
	{
		printf("키와 몸무게를 입력하시오 : ");
		scanf_s("%lf %lf", &high, &weight);

		result = testweight(high, weight);

		if (result == -1)
			printf("저체중입니다.\n");
		else if (result == 0)
			printf("표준체중입니다.\n");
		else if (result == 1)
			printf("과체중입니다.\n");

		char ans;
		printf("계속하시겠습니까?(Y/N) : ");
		scanf_s(" %c", &ans, 1);

		if (ans == 'N')
			break;
	}
	return 0;
}