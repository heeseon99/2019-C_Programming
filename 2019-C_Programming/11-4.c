#include <stdio.h>
void array_print(int* A, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		scanf_s("%d", &A[i]);
	}								//i�� �ʱⰪ 0, ����(i<size)�����ϸ� �Է� ���� ���� A[i]�� ������ �� i�� 1����

	printf("A[] = {");
	for (i = 0; i < size; i++)
	{
		printf(" %d", A[i]);		//i�� �ʱⰪ 0, ����(i<size) �����ϸ� A[i] ��� �� i�� 1����
	}

	printf(" }\n");					//' }'��� �� �ٹٲ�
}

int main(void)
{
	int data[10];					//����� ���� 10���� �迭 data

	array_print(data, 10);			//array_print�� (data, 10)����

	return 0;
}