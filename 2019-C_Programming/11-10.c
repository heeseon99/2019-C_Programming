#include <stdio.h>
#include <math.h>

void get_lcm_gcd(int a, int b, int* p_lcm, int* p_gcd)
{
	int n, x, y;
	x = a;
	y = b;

	while (y != 0)
	{
		n = x % y;
		x = y;
		y = n;
	}
	*p_gcd = x;

	*p_lcm = (a * b) / (*p_gcd);
}

int main(void)
{
	int x, y, lcm, gcd;

	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &x, &y);

	get_lcm_gcd(x, y, &lcm, &gcd);

	printf("�ּҰ������ %d�Դϴ�.\n", lcm);
	printf("�ִ������� %d�Դϴ�.\n", gcd);

	return 0;
}