#include <stdio.h>
void is_prime()
{
	int x, y;

	for (x = 2; x <= 100; x++)			//x�� 2���� 100����
	{
		for (y = 2; y <= 100; y++)		//y�� 2���� 100����
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
	is_prime();			// is_prime �Լ� ����
	printf("\n");		//�ٹٲ�

	return 0;
}