#include <stdio.h>

int sum(int n)
{
	if (n != 0)
		return n + sum(n - 1);		//n�� 0�� �ƴϸ� n+sum(n-1)��ȯ

	else
		return n;					//n�� 0�̸� n(0)��ȯ
}


int main(void)
{
	int n;
	printf("������ �Է��Ͻÿ� : ");					//ȭ�鿡 '������ �Է��Ͻÿ� : '���
	scanf_s("%d", &n);								//����ڷκ��� �Է� ���� ���� n�� ����

	int result;
	result = sum(n);								//result�� sum�� n������ �� ����

	printf("1���� %d������ �� = %d\n", n, result);	//��� ���
	return (0);
}