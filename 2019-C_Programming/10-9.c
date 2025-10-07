#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int scores[10][3];					//ũ�Ⱑ 10��3�� �迭 scores
	int i, j, max, min;
	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
		for (j = 0; j < 3; j++)
			scores[i][j] = rand() % 101;	//�� ��ҿ� 1~100������ ����

	printf("�й�\t����#1\t����#2\t����#3\n");
	for (i = 0; i < 10; i++)								//i�� �ʱⰪ0, ����(i<10) ������ �� ���� �ݺ�, �ݺ� 1�� ������ i�� 1����
	{
		printf(" %02d\t", i + 1);						//�й� ���
		for (j = 0; j < 3; j++)						//�� ������ ���� ���
			printf("%02d\t ", scores[i][j]);		//�迭 scores�� ���
		printf("\n");								//�ٹٲ� ���� ���
	}

	for (i = 0; i < 3; i++)							//i�� �ʱⰪ 0, ����(i<3) ���� �� �� ���� �ݺ�, �ݺ� 1�� ������ i�� 1����
	{
		max = min = scores[0][i];					//max�� min�� scores[0][i]����
		for (j = 0; j < 10; j++)					//j�� �ʱⰪ0, ����(j<10)������ �� ���� �ݺ�, �ݺ� 1�� ������ j�� 1����
		{
			if (scores[j][i] < min)
				min = scores[j][i];					//scores[j][i]�� min���� ������ min�� scores[j][i]
			if (scores[j][i] > max)
				max = scores[j][i];					//scores[j][i]�� max���� ũ�� max�� scores[j][i]
		}
		printf("���� #%d�� �ִ����� = %02d\n", i + 1, max);		//�ִ� ���� ���
		printf("���� #%d�� �������� = %02d\n", i + 1, min);		//���� ���� ���

	}

	return 0;
}