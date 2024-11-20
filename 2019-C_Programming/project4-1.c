// 실수 입력 받아 소수점 표기 방법, 지수 표기 방법으로 동시에 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	double x;		//실수형 변수

	printf("실수를 입력하시오 : ");			//실수를 입력하시오 화면에 출력
	scanf("%lf", &x);						// 사용자로부터 입력 받은 수를 x에 저장
	printf("실수형식으로는 %f입니다.\n", x); // x를 실수형식으로 출력
	printf("지수형식으로는 %e입니다.\n", x); //x를 지수형식으로 출력

	return 0;
}