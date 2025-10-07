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

	printf("두 개의 정수를 입력하시오 : ");
	scanf_s("%d %d", &x, &y);

	get_lcm_gcd(x, y, &lcm, &gcd);

	printf("최소공배수는 %d입니다.\n", lcm);
	printf("최대공약수는 %d입니다.\n", gcd);

	return 0;
}