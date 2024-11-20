//우리나라에서 많이 사용되는 면적의 단위인 평을 제곱미터로 환산하는 프로그램 작성
//1평은 3.3제곱미터

#define _CRT_SECURE_NO_WARNINGS 
#define SQMETER_PER_PYEONG 3.3058	//기호상수
#include <stdio.h>

int main(void)
{
	double x, y;	//변수 x, y

	printf("평을 입력하세요:");	//화면에 '평을 입력하세요'출력
	scanf("%lf", &x);			//사용자로부터 입력 받은 수를 x에 저장

	y = x * SQMETER_PER_PYEONG;		//평을 제곱미터로 환산하는 식

	printf("%lf평방미터 입니다.\n", y);		//변환한 값을 화면에 출력

	return 0;
}
