#include <stdio.h>

int main(void)
{
	int seat[10] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 5 };
	int x;

	printf("��ǰ ��ȣ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	printf("��ǰ ��ȣ %d�� ��ġ�� %d�Դϴ�.\n", x, seat[x - 1]);

	return 0;
}