#include <stdio.h>

int max(int x, int y, int z)
{
	if (x > y)
	{
		if (x > z)
			printf("최대값은 %d입니다.\n", x);
		else
			printf("최대값은 %d입니다.\n", z);
	}
	else if (y > z)
		printf("최대값은 %d입니다.\n", y);
	else
		printf("최대값은 %d입니다.\n", z);
}

int main(void)
{
	int x, y, z;

	printf("세 개의 정수를 입력하시오 : ");
	scanf_s("%d %d %d", &x, &y, &z);

	max(x, y, z);

	return 0;
}