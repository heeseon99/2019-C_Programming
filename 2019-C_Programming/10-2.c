#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x[10];						//ũ�� 10�� �迭
	int i, max, min;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)	//i �ʱⰪ 0, i�� 10���� ������ ����, �ݺ� �ѹ� ������ i�� 1����
	{
		x[i] = rand();			//���� ����
	}

	max = x[0];					//max�� x[0]�� ����
	min = x[0];					//min�� x[0]�� ����

	for (i = 1; i < 10; i++)	//x�ʱⰪ 1, x�� 10���� ������ ����, �ݺ� �ѹ� ���� �� i�� 1����
	{
		if (x[i] < min)
		{
			min = x[i];			//x[i]�� min���� ������ min�� x[i] ����
		}
		if (x[i] > max)
		{
			max = x[i];			//x[i]�� max���� ũ�� max�� x[i]����
		}
	}
	printf("�ִ밪�� %d\n�ּҰ��� %d\n", max, min);	//���

	return 0;
}