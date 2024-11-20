//cm로 표시된 키를 입력 받아 피트와 인치로 변경

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int cm, ft;												//정수형 변수, cm, ft
	float inch;												//실수형 변수, inch

	printf("키를 입력하시오(cm) : ");						//화면에 "키를 입력하시오(cm) : "출력
	scanf("%d", &cm);										//입력 받은 수를 cm에 저장

	ft = cm / (12 * 2.54);									//피트 구하는 식
	inch = (cm - (ft * 12 * 2.54)) / 2.54;					//인치 구하는 식

	printf("%dcm는 %d피트 %f인치 입니다.\n", cm, ft, inch);	//화면에 결과 출력

	return 0;
}