#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int* A, int size)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < size; i++)
	{
		A[i] = rand();			//i�� �ʱⰪ 0, ����(i<size)�����ϸ� A[i]�� ���� ������ ä�� �� i�� 1����
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ", A[i]);	//i�� �ʱⰪ0, ����(i<size)�����ϸ� A[i]�� �� ��� �� i�� 1����
	}
	printf("\n");				//�ٹٲ�
}
int main(void)
{
	int data[10];
	array_fill(data, 10);

	return 0;
}