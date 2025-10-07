#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int freq[10] = { 0 };
	int num[100];
	int i, n, max;
	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++)			//i를 0으로 초기화, 조건(i<100) 만족하면 반복 실행, 반복 1번 끝나면 i를 1증가
	{
		num[i] = rand() % 10;			//num[i]는 1~9사이의 난수
	}

	for (i = 0; i < 100; i++)			//i를 0으로 초기화, 조건(i<100) 만족하면 반복 실행, 반복 1번 끝나면 i를 1증가
	{
		n = num[i];						//n에 num[i]대입
		freq[n]++;						//freq[n]을 1증가
	}

	max = freq[0];					//max에 freq[0]넣음
	int max_index = 0;				//max_index를 0으로 초기화
	for (i = 1; i < 10; i++)
	{
		if (freq[i] > max)
		{
			max = freq[i];		//freq[i]가 max(freq[0])보다 크면 max = freq[i]
			max_index = i;										//max_index = i;
		}
	}
	printf("가장 많이 나온 수 : %d", max_index);	//가장 많이 생성된 수 출력

	return 0;

}