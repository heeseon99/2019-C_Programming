#include <stdio.h>
int check_alpha(char x)			//알파벳인지 확인하는 함수	
{
	if (x >= 'a' && x <= 'z')	//x가 a~z이면 1(참)을 반환
		return 1;
	else
		return 0;				//x가 a~z가 아니면 0(거짓)을 반환
}

int main(void)
{
	char x;
	printf("문자를 입력하시오 : ");	//화면에 '문자를 입력하시오 : '출력
	scanf_s("%c", &x);				// 사용자가 입력한 내용을 x에 저장

	int z;
	z = check_alpha(x);				//z는 함수 check_alpha에 x를 대입한 값

	if (z == 1)						//z가 1이면(x가 a~z이면) 화면에 (입력받은 문자)는 알파벳 입니다. 출력
		printf("%c는 알파벳 입니다.\n", x);
	else
		printf("%c는 알파벳이 아닙니다.\n", x);	//z가 0이면(x가 a~z가 아니면) 화면에 (입력받은 문자)는 알파벳이 아닙니다. 출력


	return 0;
}