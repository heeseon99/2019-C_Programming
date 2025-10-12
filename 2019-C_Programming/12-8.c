#include <stdio.h>
#include <string.h>

int main(void)
{
    char seps[] = " ,\t\n";
    char* token;
    char str[100];
    char* context = NULL;   // strtok_s는 context 변수가 필요
    int count = 0;

    printf("문자열을 입력하시오 : ");
    gets_s(str, sizeof(str));   // 문자열 입력 (C11 안전 함수)

    token = strtok_s(str, seps, &context);  // 첫 번째 토큰 추출
    while (token != NULL)
    {
        count++;
        token = strtok_s(NULL, seps, &context);  // 다음 토큰 추출
    }

    printf("단어의 수는 %d입니다.\n", count);
    return 0;
}
