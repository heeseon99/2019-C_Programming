#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;			//������ ����Ű�� ������ p_sum = x+y
	*p_diff = x - y;		//������ ����Ű�� ������ p_diff = x-y
}

int main(void)
{
	int sum, diff;

	get_sum_diff(100, 200, &sum, &diff);					//get_sum_diff�� (100, 200, sum�� �ּ�, diff�� �ּ�) ����

	printf("���ҵ��� �� = %d\n���ҵ��� �� = %d\n", sum, diff);	//��� ���

	return 0;
}