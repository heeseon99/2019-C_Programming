#include <stdio.h>
#define pi 3.141592					//기호 상수로 원주율 표현
double cal_area(double radius)		//원의 면적 구하는 함수
{
	return radius * radius * pi;		//원의 면적(반지름*반지름*원주율) 반환
}

int main(void)
{
	double radius;

	printf("원의 반지름을 입력하시오 : ");	//화면에 '원의 반지름을 입력하시오 : ' 출력
	scanf_s("%lf", &radius);					//입력 받은 수를 radius에 저장

	double x;
	x = cal_area(radius);					//x는 cal_area(radius)
	printf("원의 면적은 %lf입니다.\n", x);	//화면에 원의 면적 출력

	return 0;
}