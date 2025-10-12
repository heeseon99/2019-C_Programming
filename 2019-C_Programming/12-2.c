#include <stdio.h>
#include <string.h>

void del(char* s)
{
	char tmp[100];	//문자 배열 tmp

	int i, j = 0;	//int형 변수 i와 j를 0으로 초기화

	for (i = 0; i < strlen(s); i++)	//i를 0으로 초기화, i가 문자열 s의 길이보다 작으면 반복 실행 후 i를 1 증가
	{
		if (s[i] != ' ')
			tmp[j++] = s[i];		//s[i]가 공백이 아니면 tmp[j++]=s[i]
	}
	tmp[j] = 0;

	strcpy_s(s, 100, tmp);		//배열 tmp를 s에 복사
}

int main(void)
{
	char str[100];	//문자 배열 str

	printf("공백 문자가 있는 문자열을 입력하시오 : ");
	gets_s(str, 100); //사용자로부터 문자열 입력 받음, 최대 입력 개수 100

	del(str);		//del에 str대입
	puts(str);		//str에 저장된 문자열 출력

	return 0;
}