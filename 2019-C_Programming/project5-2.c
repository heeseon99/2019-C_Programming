//2개의 double 형 실수를 읽어 합, 차, 곱, 몫 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	double x, y;											//변수 지정

	printf("실수를 입력하시오 : ");							//화면에 "실수를 입력하시오 : "출력
	scanf("%lf %lf", &x, &y);								//입력 받은 실수 각 각 x, y에 저장

	printf("%lf %lf %lf %lf", x + y, x - y, x * y, x / y);	//화면에 두 수의 합, 차, 곱, 몫 출력

	return 0;
}