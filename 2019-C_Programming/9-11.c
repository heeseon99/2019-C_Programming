#include <stdio.h>

int recursive(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	else
		return recursive(n - 1, k - 1) + recursive(n - 1, k);
}

int main(void)
{
	printf("n=");
	int n;
	scanf_s("%d", &n);
	printf("k=");
	int k;
	scanf_s("%d", &k);
	printf("%d", recursive(n, k));

	return 0;
}