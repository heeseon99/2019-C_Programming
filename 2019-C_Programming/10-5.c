#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int freq[10] = { 0 };
	int num[100];
	int i, n, max;
	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++)			//i�� 0���� �ʱ�ȭ, ����(i<100) �����ϸ� �ݺ� ����, �ݺ� 1�� ������ i�� 1����
	{
		num[i] = rand() % 10;			//num[i]�� 1~9������ ����
	}

	for (i = 0; i < 100; i++)			//i�� 0���� �ʱ�ȭ, ����(i<100) �����ϸ� �ݺ� ����, �ݺ� 1�� ������ i�� 1����
	{
		n = num[i];						//n�� num[i]����
		freq[n]++;						//freq[n]�� 1����
	}

	max = freq[0];					//max�� freq[0]����
	int max_index = 0;				//max_index�� 0���� �ʱ�ȭ
	for (i = 1; i < 10; i++)
	{
		if (freq[i] > max)
		{
			max = freq[i];		//freq[i]�� max(freq[0])���� ũ�� max = freq[i]
			max_index = i;										//max_index = i;
		}
	}
	printf("���� ���� ���� �� : %d", max_index);	//���� ���� ������ �� ���

	return 0;

}