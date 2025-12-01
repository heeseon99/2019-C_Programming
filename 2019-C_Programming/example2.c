#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int freq[10] = { 0 };
	int num[100];
	int i, n, max;
	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++)
	{
		num[i] = rand() % 10;	//num[i] = 1~9사이의 난수
	}

	for (i = 0; i < 100; i++)
	{
		n = num[i];
		++freq[n];
	}

	max = freq[0];
	int max_index = 0;
	for (i = 1; i < 10; i++)
	{
		if (freq[i] > max)		//freq[i]가 max보다 크면
		{
			max = freq[i];
			max_index = i;
		}
	}
	for (i = 0; i < 100; i++)
	{
		printf("%d  ", num[i]);
	}
	printf("\n가장 많이 나온 수 : %d\n", max_index);
	printf("%d가 나온 횟수 : %d", max_index, max);

	return 0;

}