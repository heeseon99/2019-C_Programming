#include <stdio.h>

int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absolute(int n)
{
	if (n < 0)
		return -1 * n;
	else
		return n;
}

int sign(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 0;
	if (n > 0)
		return 1;
}

int main(void)
{
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);

	if (even(x) == 1)
		printf("even()�� ��� : ¦��\n");
	else
		printf("even()�� ��� : Ȧ��\n");


	printf("absolute()�� ��� : %d\n", absolute(x));

	if (sign(x) == -1)
		printf("sign()�� ��� : ����\n");
	else if (sign(x) == 0)
		printf("sign()�� ��� : 0\n");
	else if (sign(x) == 1)
		printf("sing()�� ��� : ���\n");

	return 0;
}