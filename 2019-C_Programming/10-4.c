#include <stdio.h>

#define SIZE 10

int array_copy(int a[], int b[], int size)		//�迭 a�� ��Ҹ� �迭 b�� �����ϴ� �Լ�
{
	int i;
	for (i = 0; i < size; i++)			//i�ʱⰪ 0, i�� SIZE(10)���� ���� �� ���� �ݺ�, �ݺ� 1�� ������ i�� 1����
		b[i] = a[i];					//a[i]=b[i]
}

int main(void)
{
	int a[SIZE];
	int i;
	printf("�迭 a : ");				//ȭ�鿡 '�迭 : a' ���
	for (i = 0; i < SIZE; i++)			//i�ʱⰪ 0, i�� SIZE(10)���� ���� �� ���� �ݺ�, �ݺ� 1�� ������ i�� 1����
	{
		scanf_s("%d", &a[i]);				//�迭 a�Է�
	}
	int b[SIZE];

	array_copy(a, b, SIZE);				//array_copy�� a, b, SIZE�� ����

	printf("\n�迭 a�� ��Ҹ� �迭 b�� ���� \n-> �迭 b : ");

	int o;
	for (o = 0; o < SIZE; o++)			//o�� �ʱⰪ 0, o�� SIZE(10)���� ���� �� ���� �ݺ�, �ݺ� 1�� ������ o�� 1����
	{
		printf("%d ", b[o]);			//�迭 b ���
	}
	printf("\n");

	return 0;
}