#include <stdio.h>

int sum(int n)
{
	if (n != 1)
		return n + sum(n - 1);		//n이 0이 아니면 n+sum(n-1)반환

	else
		return 1;					//n이 1이면 1반환
}

int main(void)
{
	int n, result;
	result = 0;

	for (n = 1; n < 201; n++)
	{
		result = result + sum(n);
	}
	printf("%d", result);

	return 0;
}