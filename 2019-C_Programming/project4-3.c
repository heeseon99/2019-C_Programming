//int 형 변수 x, y 값을 서로 교환하는 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int x, y, tmp;	//정수형 변수 x, y, temp지정

	x = 10;		//x를 10으로 초기화
	y = 20;		//y를 20으로 초기화

	printf("x=%d y=%d\n", x, y);		//화면에 x, y값 출력

	tmp = x;		//tmp에 x값 저장
	x = y;			//x에 y값 저장
	y = tmp;		//y에 tmp 값 저장

	printf("x=%d y=%d", x, y);	//화면에 x, y값 출력

	return 0;
}