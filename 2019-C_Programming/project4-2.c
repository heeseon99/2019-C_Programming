//사용자로부터 정수를 16진수로 입력 받아 8진수, 10진수, 16진수 형태로 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int x;

	printf("16진수 정수를 입력하시오:");	// 화면에"16진수 정수를 입력하시오"출력
	scanf("%x", &x);						// 사용자에게 입력 받은 수를 변수 x에 저장
	printf("8진수로는 %o입니다.\n", x);		// x를 8진수 형태로 출력
	printf("10진수로는 %d입니다.\n", x);	//x를 10진수 형태로 출력
	printf("16진수로는 %#x입니다.\n", x);	//x를 16진수 형태로 출력

	return 0;

}
