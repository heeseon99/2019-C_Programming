//화씨 온도를 섭씨 온도로 변환하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double c, f;		//변수 c(섭씨)와 f(화씨) 지정

	printf("화씨값을 입력하시오:");		//화면에 화씨값을 입력하시오: 출력
	scanf("%lf", &f);					// 사용자로부터 입력받은 값을 f에 저장

	c = (5.0 / 9.0) * (f - 32.0);			// 화씨 온도를 섭씨 온도로 변환하는 식

	printf("섭씨값은 %lf 입니다.\n", c);	// 화면에 섭씨 값 출력

	return 0;

}