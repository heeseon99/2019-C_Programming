#include <stdio.h>

int main(void)
{
	int seat[10] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 5 };
	int x;

	printf("상품 번호를 입력하시오 : ");
	scanf_s("%d", &x);
	printf("상품 번호 %d의 위치는 %d입니다.\n", x, seat[x - 1]);

	return 0;
}