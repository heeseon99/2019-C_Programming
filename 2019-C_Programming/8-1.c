#include <stdio.h>

double square(double x)										//주어진 실수를 제곱하여 반환하는 함수
{
	return x = x * x;
}

int main(void)
{
	double x;
	printf("정수를 입력하시오 : ");							//화면에 '정수를 입력하시오 : '출력
	scanf_s("%lf", &x);										//입력받은 수를 x에 저장

	double z;
	z = square(x);											//z는 함수 square에 x를 넣은 값

	printf("주어진 정수 %lf의 제곱은 %lf입니다.\n", x, z);	//화면에 결과 출력

	return 0;
}