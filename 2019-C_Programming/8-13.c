#include <stdio.h>
int is_multiple(int n, int m)
{
	if (m % n == 0)				//m ������ n�� �������� 0�̸� 1��ȯ
		return 1;
	else
		return 0;				//m������ n�� �������� 0�� �ƴϸ� 0��ȯ
}

int main(void)
{
	int n, m;

	printf("ù��° ������ �Է��Ͻÿ� : ");	//ȭ�鿡 'ù��° ������ �Է��Ͻÿ� : ' ���
	scanf_s("%d", &m);						// ����ڷκ��� �Է� ���� ����  m�� ����

	printf("�ι�° ������ �Է��Ͻÿ� : ");	//ȭ�鿡 '�ι�° ������ �Է��Ͻÿ� : ' ���
	scanf_s("%d", &n);						// ����ڷκ��� �Է� ���� ����  n�� ����

	int z;
	z = is_multiple(n, m);					//z�� is_multiple�� n, m�� ������ ��� ����

	if (z == 1)
	{
		printf("%d�� %d�� ����Դϴ�.\n", m, n);	//z�� 1�̸� ����� ���
	}
	else
	{
		printf("%d�� %d�� ����� �ƴմϴ�.\n", m, n);	//z�� 1�� �ƴϸ� ����� ���
	}
	return 0;
}
