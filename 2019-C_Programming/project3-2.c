//마일을 미터로 변환하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float mile;		// 변수 mile
	double meter;	//변수 meter

	printf("마일을 입력하시오:"); //화면에 마일을 입력하시오 출력
	scanf("%f", &mile);		//사용자로부터 입력받은 값을 mile에 저장

	meter = 1609.0 * mile;	//마일을 미터로 변경하는 식

	printf("%f마일은 %lf미터입니다.\n", mile, meter);	//마일을 미터로 변경한 값 화면에 출력

	return 0;
}