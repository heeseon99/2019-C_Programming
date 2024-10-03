//삼각형 넓이 계산하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float height, base, area; // 변수 height(높이), base(밑변), area(넓이) 지정

	printf("삼각형의 밑변:");	// 화면에 삼각형의 밑변 출력
	scanf("%f", &base);			//사용자로부터 값 입력받아 base에 저장
	printf("삼각형의 높이:");	//화면에 삼각형의 높이 출력
	scanf("%f", &height);		//사용자로 부터 값 입력받아 height에 저장

	area = 0.5 * height * base;		//삼각형의 넓이 계산하는 식

	printf("삼각형의 넓이: %f \n", area);	//화면에 삼각형의 넓이 출력

	return 0;
}