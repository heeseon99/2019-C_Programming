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
	char str[100];						//문자 배열 str

	printf("문자열을 입력하시오 : ");	//화면에 '문자열을 입력하시오'출력
	gets_s(str, 100);					//사용자로부터 문자열 입력 받음, 최대 입력 개수 100

	char ch;							//char형 변수 ch
	for (ch = 'a'; ch <= 'z'; ch++)		//ch가 의 초기값 0, 조건(ch가 z보다 작거나 같음) 만족하면 반복 실행 후 ch를 1증가
	{
		printf("%c : %d\n", ch, str_chr(str, ch));		//화면에 결과 출력
	}

	return 0;
}