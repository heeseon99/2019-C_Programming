//������ �ڸ��� �ݴ�� ���

#include <stdio.h>

int main(void)
{
	int num;
	int Rnum = 0;						//�ڸ��� �ݴ� �� �� ������ ����

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	while (num > 0)						//�Է��� ���� 0���� ũ��
	{
		Rnum = Rnum * 10 + num % 10;
		num = num / 10;
	}
	printf("%d", Rnum);

	return 0;
}