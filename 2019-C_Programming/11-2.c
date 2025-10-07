#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;			//정수를 가리키는 포인터 p_sum = x+y
	*p_diff = x - y;		//정수를 가리키는 포인터 p_diff = x-y
}

int main(void)
{
	int sum, diff;

	get_sum_diff(100, 200, &sum, &diff);					//get_sum_diff에 (100, 200, sum의 주소, diff의 주소) 대입

	printf("원소들의 합 = %d\n원소들의 차 = %d\n", sum, diff);	//결과 출력

	return 0;
}