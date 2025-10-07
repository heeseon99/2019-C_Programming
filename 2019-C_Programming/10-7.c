#include <stdio.h>
#define ROWS 3
#define COLS 10

int main(void)
{
	int s[ROWS][COLS] = {
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{1, 4, 9, 16, 25, 36, 49, 64, 81, 100},
		{1, 8, 27, 64, 125, 216, 343, 512, 729, 1000}
	};

	int x;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);

	int i, j;
	for (i = 1; i < COLS; i++)
	{
		if (s[1][i] == x)
			printf("%d의 제곱근은 %d", x, s[0][i]);
		else if (s[2][i] == x)
			printf("%d의 세제곱근은 %d", x, s[0][i]);
	}

	return 0;
}
