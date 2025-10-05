#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random()
{
	srand((unsigned)time(NULL));
	int x;
	x = rand() % 2;
	return x;
}

int main(void)
{
	int user, computer;
	computer = random();
	char ans;

	while (1)
	{
		printf("앞면 또는 뒷면(1 또는 0) : ");
		scanf_s("%d", &user);

		if (user == computer)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");

		printf("계속하시겠습니까(y 또는 n) : ");
		scanf_s(" %c", &ans);

		if (ans == 'n')
			break;
	}
	return 0;
}