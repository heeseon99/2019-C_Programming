#include <stdio.h>

void show_digit(int x)
{
	if (x == 0)
		return;							//x�� ���̸� return
	show_digit(x / 10);					//x�� 10���� ����
	printf("%d ", x % 10);				//x�� 10���� �������� �� ������ ���
}

int main(void)
{
	int x;
	printf("������ �Է��Ͻÿ� : ");	//ȭ�鿡 '������ �Է��Ͻÿ� : '���
	scanf_s("%d", &x);				//�Է� ���� �� x�� ����

	show_digit(x);					//show_digit()�� x����

	return 0;
}