//키보드에서 하나의 문자를 읽어서 모음과 자음을 구분하는 프로그램 작성
//switch문 사용

#include <stdio.h>

int main(void)
{
	char x;

	printf("문자를 입력하시오 : ");		//화면에 '문자를 입력하시오 : '출력
	scanf_s("%c", &x);					//사용자가 입력 한 수 x에 저장

	switch (x)
	{
	case 'a':
	case'A':
	case'e':
	case'E':
	case'i':
	case'I':
	case 'o':
	case'O':
	case'u':
	case'U':
		printf("모음입니다.\n");	//x가 'a,A,e,E,i,I,o,O,u,U'일 경우 '모음입니다.'출력
		break;

	default:
		printf("자음입니다.\n");	//x가 'a,A,e,E,i,I,o,O,u,U'가 아닐 경우 '자음입니다.'출력
		break;

		return 0;
	}
}