//사용자가 아스키 코드 값 입력하면, 사용자가 입력한 아스키 코드 값에 해당하는 문자 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int x;

	printf("아스키 코드값을 입력하시오 : ");
	scanf("%d", &x);

	printf("문자 ; %c 입니다.\n", x);

	return 0;
}