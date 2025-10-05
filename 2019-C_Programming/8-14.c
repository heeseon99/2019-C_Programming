#include <stdio.h>
#include <math.h>												//sqrt()함수 사용 위해 필요
double get_distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));		//두 점 사이 거리 계산하는 함수 식, sqrt()는 제곱근 계산
}

int main(void)
{
	double x1, x2, y1, y2;

	printf("첫번째 점의 좌표를 입력하시오 (x, y) : ");			//화면에 '첫번째 점의 좌표를 입력하시오 (x, y) : '출력
	scanf_s("%lf %lf", &x1, &y1);									//입력받은 수를 각각 x1 y1에 저장

	printf("두번째 점의 좌표를 입력하시오 (x, y) : ");			//화면에 '두번째 점의 좌표를 입력하시오 (x, y) : '출력
	scanf_s("%lf %lf", &x2, &y2);									//입력받은 수를 각각 x2 y2에 저장

	printf("두점 사이의 거리는 %lf입니다.\n", get_distance(x1, y1, x2, y2));	//결과 출력

	return 0;
}