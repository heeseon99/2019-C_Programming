#include <stdio.h>

#define SIZE 10										

int array_equal(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < SIZE; i++)		//i�� �ʱⰪ 0, i�� SIZE(10)���� ���� �� ���� �ݺ�, �ݺ� 1�� ������ i�� 1����
	{
		if (a[i] != b[i])
			return 0;				// a[i]�� b[i]�� ���� ������ 0��ȯ
	}
	return 1;				// a[i]�� b[i]�� ������ 1��ȯ
}


int main(void)
{
	int a[SIZE];
	int i;
	printf("�迭 a : ");			//ȭ�鿡 '�迭 a : '���
	for (i = 0; i < SIZE; i++)		//i�ʱⰪ 0, i�� size(10)���� ���� �� ����  �ݺ�, �ݺ� 1�� ������ i�� 1����
	{
		scanf_s("%d", &a[i]);			//�� �Է� �޾� a[i]�� ����
	}
	int b[SIZE];
	int e;
	printf("�迭 b : ");			//ȭ�鿡 '�迭 b : '���
	for (e = 0; e < SIZE; e++)		//e�ʱⰪ 0, e�� size(10)���� ���� �� ����  �ݺ�, �ݺ� 1�� ������ e�� 1����
	{
		scanf_s("%d", &b[e]);		//�� �Է� �޾� b[i]�� ����
	}

	if (array_equal(a, b, SIZE) == 1)
		printf("2���� �迭�� ����\n");		//arry_equal�� a, b, SIZE�� ������ ���� ����� 1�̸� ȭ�鿡 '2���� �迭�� ����' ��� �� ��ٲ�
	else
		printf("2���� �迭�� �ٸ�\n");		//arry_equal�� a, b, SIZE�� ������ ���� ����� 1�� �ƴϸ� ȭ�鿡 '2���� �迭�� �ٸ�'��� �� �ٹٲ�

	return 0;
}