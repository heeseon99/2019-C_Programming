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
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0) : ");
		scanf_s("%d", &user);

		if (user == computer)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");

		printf("����Ͻðڽ��ϱ�(y �Ǵ� n) : ");
		scanf_s(" %c", &ans);

		if (ans == 'n')
			break;
	}
	return 0;
}