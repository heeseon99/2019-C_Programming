//(3.32*10^-3)+(9.76*10^-8) 계산하여 화면에 출력하는 프로그램 작성

#include <stdio.h>

int main(void)
{
	double x;				//변수 x

	x = 3.32e-3 + 9.76E-8;		//x에 수식 값 저장

	printf("%lf", x);		//화면에 값 출력

	return 0;
}