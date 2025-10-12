#include <stdio.h>

int main(void)
{
	char c;								//char형 변수 c
	printf("문자를 입력하시오 : ");		//화면에 '문자를 입력하시오 : '출력
	scanf_s("%c", &c);					//사용자로부터 입력 받은 문자를 c에 저장
	printf("아스키 코드값=%d", c);		//아스키 코드 값 출력
	return 0;
}