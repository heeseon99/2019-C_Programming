#include <stdio.h>
void is_prime(int n)
{
	int x, y;

	for (x = 2; x <= n; x++)			//x�� 2���� 100����
	{
		for (y = 2; y <= n; y++)		//y�� 2���� 100����
		{
			if (x % y == 0)				//x�� y�� ������ �� �������� 0�̸� �ݺ��� ���������� �ƴϸ� ���� ���ǽ� �˻�
				break;
		}
		if (x == y)						//x�� y�� ������ �� ������ 0�̰� x=y�̸� ȭ�鿡 ���

			printf("%d ", x);
	}

}

int main(void)
{
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	is_prime(x);			// is_prime �Լ� ����
	printf("\n");		//�ٹٲ�

	return 0;
}