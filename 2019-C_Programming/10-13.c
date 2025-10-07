#include <stdio.h>

int main(void)
{
	int i, n;
	int binary[32];							//요소 개수 32개인 배열
	printf("10진수를 입력하시오 : ");		//화면에 '10진수를 입력하시오'출력
	scanf_s("%d", &n);						//입력 받은 수를 n에 저장

	for (i = 0; i < 32 && n>0; i++)			//i의 초기값 0, 조건(i가 32보다 작고 n이 0보다 큼) 만족하면 반복, 반복 1번 끝나면 i를 1증가
	{
		binary[i] = n % 2;					//n을 2로 나누었을 때 나머지를 binary[i]에 대입
		n = n / 2;							//n을 2로 나눈 값을 n에 저장
	}

	printf("이진수 : ");					//화면에 '이진수 : '출력

	for (i--; i >= 0; i--)						//i의 초기값은 i-1, 조건(i>=0)만족하는 동안 반복, 반복 1번 끝나면 i를 1감소
	{
		printf("%d", binary[i]);			//요소의 i번째 값을 출력
	}
	printf("\n");							//줄바꿈 	

	return 0;
}