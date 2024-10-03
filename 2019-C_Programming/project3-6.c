//달에서의 몸무게 계산하는 프로그램

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	float earth, moon;		//변수 지정

	printf("몸무게를 입력하세요(단위 : kg) : ");	//화면에 몸무게를 입력하세요(단위:kg)출력
	scanf("%f", &earth);						//입력받은 값은 earth에 저장

	moon = earth * 0.17;					//달에서의 몸무게 구하는 식

	printf("달에서의 몸무게는 %f입니다.\n", moon);		//화면에 달에서의 몸무게 출력

	return 0;

}