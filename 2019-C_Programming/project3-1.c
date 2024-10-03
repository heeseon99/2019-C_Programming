//세 실수의 합과 평균 계산하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x;	//첫번째 실수 저장할 변수
	float y;	//두번째 실수 저장할 변수
	float z;	//세번째 실수 저장할 변수
	float sum;	//세 실수의 합 저장할 변수
	float avg; // 세 실수의 평균 저장할 변수

	printf("실수를 입력하시오 : ");		//화면에 실수를 입력하시오 출력
	scanf("%f", &x);					// 사용자로부터 실수 입력받아 x에 저장
	printf("실수를 입력하시오 : ");		//화면에 실수를 입력하시오 출력
	scanf("%f", &y);					// 사용자로부터 실수 입력받아 y에 저장
	printf("실수를 입력하시오 : ");		//화면에 실수를 입력하시오 출력
	scanf("%f", &z);					// 사용자로부터 실수 입력받아 z에 저장

	sum = x + y + z;	//변수 sum에 (x+y+z)의 결과 저장
	avg = sum / 3.0;	//변수 avg에 (sum/3.0)의 결과 저장

	printf("합은 %f 이고, 평균은 %f입니다.\n", sum, avg);		//세 실수의 합과 평균이 화면에 출력

	return 0;
}