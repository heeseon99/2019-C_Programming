#include <stdio.h>

void happybirthday(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("생일축하합니다.\n");
	}
}

int main(void)
{
	happybirthday(5);

	return 0;
}