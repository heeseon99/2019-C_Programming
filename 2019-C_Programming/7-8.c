//����ڷκ��� ���� �Է� �޾� ���ڸ�ŭ * ���

#include <stdio.h>

int main(void)
{
	int x, y;

	while (1)
	{
		printf("������ ����(���� : -1) : ");
		scanf_s("%d", &x);

		if (x != -1)					//x�� -1�� �ƴϸ� ����
			for (y = 0; y < x; y++)		//y�� 0���� x���� ���� �� ����, ���� �����ϸ� *����� 1����
				printf("*");
		printf("\n");

		if (x == -1)					//x�� -1�̸� �ݺ��� ���� ����
			break;
	}

	return 0;
}