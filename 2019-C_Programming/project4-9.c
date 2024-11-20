//'a'+1, 'a'+2, 'a'+3을 문자형식으로 출력하는 프로그램

#include <stdio.h>

int main(void)
{
	char coad = 'a';		//변수 지정

	printf("%c %c %c\n", coad + 1, coad + 2, coad + 3);		//화면에 'a'+1, 'a'+2, 'a'+3 값 출력

	return 0;

}