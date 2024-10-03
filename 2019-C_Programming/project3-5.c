//다항식 계산하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x, y;							// 변수 x, y

	printf("실수를 입력하세요:");		//"실수를 입력하세요:"화면에 출력
	scanf("%f", &x);					// 사용자에게 입력받은 값 x에 저장

	y = 3 * x * x + 7 * x + 11;			//다항식의 값을 y에 저장

	printf("다항식의 값은 %f\n", y);	//결과를 화면에 출력

	return 0;
}