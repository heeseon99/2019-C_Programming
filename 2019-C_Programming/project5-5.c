//100보다 작은 정수 입력 받아 10의 자리, 1의 자리로 분리해 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int x;

	printf("정수를 입력하시오 : ");		//화면에 "정수를 입력하시오 : "출력
	scanf("%d", &x);					//입력 받은 수를 x에 저장

	printf("십의 자리 : %d\n", x / 10);	//x의 십의 자리 출력(x를 10으로 나누었을 때 몫이 x의 십의 자리 수)
	printf("일의 자리 : %d\n", x % 10);	//x의 일의 자리 출력(x를 10으로 나누었을 때 나머지가 x의 일의 자리 수)

	return 0;
}