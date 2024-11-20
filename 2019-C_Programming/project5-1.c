//사용자로부터 2개의 정수 입력받아 첫번재 정수를 두번째 정수로 나누었을 때 얻게 되는 몫과 나머지 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("2개의 정수를 입력하시오: ");		//화면에 '2개의 정수를 입력하시오 : "출력
	scanf("%d %d", &x, &y);						//입력받은 수를 각각 x, y에 저장

	printf("몫: %d 나머지 : %d\n", x / y, x % y);	// 첫번째 정수를 두번째 정수로 나누었을때 얻는 몫과 나머지 출력

	return 0;
}