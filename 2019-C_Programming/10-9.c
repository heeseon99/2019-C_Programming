#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int scores[10][3];					//크기가 10×3인 배열 scores
	int i, j, max, min;
	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
		for (j = 0; j < 3; j++)
			scores[i][j] = rand() % 101;	//각 요소에 1~100사이의 난수

	printf("학번\t시험#1\t시험#2\t시험#3\n");
	for (i = 0; i < 10; i++)								//i의 초기값0, 조건(i<10) 만족할 때 까지 반복, 반복 1번 끝나면 i를 1증가
	{
		printf(" %02d\t", i + 1);						//학번 출력
		for (j = 0; j < 3; j++)						//각 시험의 점수 출력
			printf("%02d\t ", scores[i][j]);		//배열 scores를 출력
		printf("\n");								//줄바꿈 문자 출력
	}

	for (i = 0; i < 3; i++)							//i의 초기값 0, 조건(i<3) 만족 할 때 까지 반복, 반복 1번 끝나면 i를 1증가
	{
		max = min = scores[0][i];					//max와 min에 scores[0][i]대입
		for (j = 0; j < 10; j++)					//j의 초기값0, 조건(j<10)만족할 때 까지 반복, 반복 1번 끝나면 j를 1증가
		{
			if (scores[j][i] < min)
				min = scores[j][i];					//scores[j][i]가 min보다 작으면 min은 scores[j][i]
			if (scores[j][i] > max)
				max = scores[j][i];					//scores[j][i]가 max보다 크면 max는 scores[j][i]
		}
		printf("시험 #%d의 최대점수 = %02d\n", i + 1, max);		//최대 점수 출력
		printf("시험 #%d의 최저점수 = %02d\n", i + 1, min);		//최저 점수 출력

	}

	return 0;
}