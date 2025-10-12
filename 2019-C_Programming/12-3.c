#include <stdio.h>
#include <string.h>

int str_chr(char* s, int c)				//문자의 빈도 구하는 함수 
{
	int i;
	int count = 0;						//int형 변수 count를 0으로 초기화

	for (i = 0; i < strlen(s); i++)		//i를 0으로 초기화, i가 s의 길이보다 작으면 반복 실행 후, i를 1증가
	{
		if (s[i] == c)
			count++;					//s[i]==c만족하면 count를 1증가
	}
	return count;						//count값 반환
}

int main(void)
{
	char str[100];						//문자 배열

	printf("문자열을 입력하시오 : ");	//화면에 '문자열을 입력하시오 : '출력
	gets_s(str, 100);					//사용자로부터 문자열 입력 받음, 최대 입력 개수 100

	char c;								//char형 변수 c

	printf("개수를 셀 문자를 입력하시오 : ");			//화면에 '개수를 셀 문자를 입력하시오'출력
	c = getchar();										//문자 입력 받아 c에 저장
	printf("%c의 개수 : %d\n", c, str_chr(str, c));		//결과 출력

	return 0;
}