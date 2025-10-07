#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x[10];						//크기 10인 배열
	int i, max, min;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)	//i 초기값 0, i가 10보다 작으면 실행, 반복 한번 끝나면 i를 1증가
	{
		x[i] = rand();			//난수 생성
	}

	max = x[0];					//max에 x[0]값 저장
	min = x[0];					//min에 x[0]값 저장

	for (i = 1; i < 10; i++)	//x초기값 1, x가 10보다 작으면 실행, 반복 한번 끝난 후 i를 1증가
	{
		if (x[i] < min)
		{
			min = x[i];			//x[i]가 min보다 작으면 min에 x[i] 저장
		}
		if (x[i] > max)
		{
			max = x[i];			//x[i]가 max보다 크면 max에 x[i]저장
		}
	}
	printf("최대값은 %d\n최소값은 %d\n", max, min);	//출력

	return 0;
}