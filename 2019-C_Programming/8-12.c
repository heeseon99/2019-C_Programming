#include <stdio.h>
void print_value(int n)				//n�� ����ŭ *����ϴ� �Լ�
{
	for (int i = 0; i < n; i++)		//i�� �ʱⰪ 0, i<n�����ϸ� *�ϳ� ����� i�� 1���� ��Ų �� �ٽ� ���� �˻�
		printf("*");
}

int main(void)
{
	int n;

	while (1)
	{
		printf("���� �Է��Ͻÿ� (����� ����) : ");	//ȭ�鿡 '���� �Է��Ͻÿ� (����� ����) : ' ���
		scanf_s("%d", &n);							//����ڷκ��� �Է� ���� ���� n�� ����

		if (n < 0)
			break;									//n�� 0���� ������ ����
		else
		{
			print_value(n);							//n�� 0���� ũ�� print_value(n) ����

			printf("\n");							//�ٹٲ�
		}
	}
	return 0;
}