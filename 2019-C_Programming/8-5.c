#include <stdio.h>
int round(double f)				//실수에 0.5를 더하여 소수점 이하를 버리는 반올림 연산 수행하는 함수
{
	return f + 0.5;
}

int main(void)
{
	double f;										//실수형 변수 f

	printf("실수를 입력하시오 : ");					//화면에 '실수를 입력하시오 : ' 출력
	scanf_s("%lf", &f);								//사용자로부터 입력 받은 수를 f에 저장

	int round_up;									//정수형 변수 round_up
	round_up = round(f);							//변수 round_up에 함수  round에 f대입한 값 저장 

	printf("반올림한 값은 %d입니다.\n", round_up);	//결과값 출력

	return 0;
}