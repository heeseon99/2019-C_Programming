//3개의 정수 입력 받아, 3개의 정수 값 중 최대 값 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int x, y, z;							//3개의 정수 저장할 변수
	int max;								//최대값 저장할 변수

	printf("3개의 정수를 입력하시오 : ");	//화면에 "3개의 정수 입력하시오 : " 출력
	scanf("%d %d %d", &x, &y, &z);			//입력 받은 수를 각 각 x, y, z에 저장

	max = (x > y) ? x : y;					//x>y가 참이면 max에 x저장, 거짓이면 max에 y저장
	max = (z > max) ? z : max;				//z>max가 참이면 max에 z저장

	printf("최대값 : %d", max);				// 화면에 최대값 출력

	return 0;
}