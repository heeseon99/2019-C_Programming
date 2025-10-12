#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char x;

    while (1)
    {
        printf("문자를 입력하시오 : ");
        x = getchar();              // 문자 입력

        if (x == '.')               // 먼저 종료 조건 확인
            break;

        if (islower(x))
        {
            x = toupper(x);
            putchar(x);
            printf("\n");
        }
        else if (isupper(x))
        {
            x = tolower(x);
            putchar(x);
            printf("\n");
        }
        else if (!isalpha(x))
        {
            printf("경고\n");
        }

        while (getchar() != '\n');  // 버퍼 비우기 (Enter 제거)
    }

    printf("프로그램을 종료합니다.\n");
    return 0;
}
