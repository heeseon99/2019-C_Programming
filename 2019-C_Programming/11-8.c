#include <stdio.h>

int array_sum(int* A, int size)		//ȸ�翡�� ������ ������ �Ѿ� ����ϴ� �Լ� array_sum
{
	int i, sum;
	sum = 0;						//sum�� 0���� �ʱ�ȭ

	printf("A[] = ");

	for (i = 0; i < size; i++)
	{
		scanf_s("%d", &A[i]);
		sum = sum + A[i];			//i�� �ʱⰪ 0, ����(i<size)�����ϸ� �Է¹��� ���� A[i]�� ����, sum = sum+A[i] ���� �� i�� 1����
	}
	return sum;						//sum�� ��ȯ

}

int main(void)
{
	int money[10];

	printf("������ �� = %d", array_sum(money, 10));		//��� ���
	return 0;
}

