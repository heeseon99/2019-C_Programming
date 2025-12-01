#include <stdio.h>

int main(void)
{
	float C, F;

	printf("화씨 온도를 입력하시오 : ");
	scanf_s("%f", &F);

	C = 5.0 / 9.0 * (F - 32);

	printf("섭씨온도는 %f입니다.\n", C);

	return 0;
}