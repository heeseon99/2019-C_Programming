/* ��ø �ݺ��� ����� �Ʒ� ���� ����ϴ� ���α׷� �ۼ�
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
*/

#include <stdio.h>

int main(void)
{
	int x, i, j;

	printf("������ �Է��Ͻÿ� : ");	//ȭ�鿡 '������ �Է��Ͻÿ� ' ���
	scanf_s("%d", &x);				//�Է¹��� ���� x�� ����

	for (i = 1; i <= x; i++)				//i�� 1�� �ʱ�ȭ, i�� x���� �۰ų� ���� ��� ���� �ݺ��� ���� �� i 1����
	{
		for (j = 1; j <= i; j++)			//j�� 1�� �ʱ�ȭ, j�� i���� ���� ��� j��� �� j 1����
			printf("%d ", j);
		printf("\n");				//�ٹٲ�
	}

	return 0;
}