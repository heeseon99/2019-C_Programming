//(1+2+3+...+n)�� ���� 1000���� �����鼭 ���� ū ���� �׶��� n

#include <stdio.h>

int main(void)
{
	int x = 1;
	int sum = 0;

	while (sum <= 10000)		//sum�� 10000���� ������ ����
	{
		x++;				//x�� 1����
		sum += x;			//sum = sum + x

	}
	//���� sum�� x�� 1������ 10000�� �Ѿ��� �� ��
	sum -= x;			//sum=sum-1
	x--;				//x 1����

	printf("1���� %d������ ���� %d�Դϴ�.\n", x, sum);	//sum�� 10000�� ���� �ʾ��� ���� x���� sum�� ���

	return 0;
}