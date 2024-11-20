//상자의 부피(길이*너비*높이)를 구하는 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	double w, h, d;	//변수 w, h, d

	printf("상자의 가로 세로 높이를 한번에 입력 : ");	//화면에 '상자의 가로, 세로 높이를 한번에 입력'출력
	scanf("%lf %lf %lf", &w, &h, &d);					//사용자로부터 입력 받은 세 수를 각각 w, h, d에 저장

	double v;	//변수 v(부피)
	v = w * h * d;	//부피 계산하는 식

	printf("상자의 부피는 %lf입니다.\n", v);	//화면에 부피 출력

	return 0;
}