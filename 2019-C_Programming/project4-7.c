//사용자로부터 질량과 속도 입력 받아 운동 에너지 계산하는 프로그램
//운동 에너지 E=m(v^2)/2.0


#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	double m, v, E;		//변수 지정

	printf("질량(Kg) : ");	//화면에 "질량(Kg) : "출력
	scanf("%lf", &m);		//사용자로부터 입력 받은 수 m에 저장

	printf("속도(m/s) : ");	//화면에 "속도(m/s) : " 출력
	scanf("%lf", &v);		//사용자로부터 입력 받은 수 v에 저장

	E = m * v * v / 2.0;		//운동에너지 계산하는 식
	printf("운동에너지(J): %lf\n", E);	//운동에너지 출력
	return 0;
}