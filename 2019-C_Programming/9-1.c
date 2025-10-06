#include <stdio.h>

int sum(int x, int y)
{
    static int count;
    count++;
    printf("덧셈은 총 %d번 실행되었습니다.\n", count);
    return x + y;
}

int sub(int x, int y)
{
    static int count;
    count++;
    printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
    return x - y;
}

int mul(int x, int y)
{
    static int count;
    count++;
    printf("곱셈은 총 %d번 실행되었습니다.\n", count);
    return x * y;
}

int divi(int x, int y)
{
    static int count;
    count++;
    printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
    return x / y;
}

int main(void)
{
    int x, y;
    char op;

    printf("=== 사칙연산 프로그램 ===\n");
    printf("형식: [정수] [연산자] [정수]\n");
    printf("예시: 3 + 4\n");
    printf("종료하려면 q 입력\n\n");

    while (1)
    {
        printf("연산을 입력하시오 : ");

        // 먼저 종료 명령(q)을 확인
        if (scanf_s(" %c", &op, 1) != 1)
            break;

        if (op == 'q' || op == 'Q') {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        // 연산자 앞에서 읽은 문자가 숫자일 수 있으므로 버퍼 복구 처리
        ungetc(op, stdin);

        // 사칙연산 입력 받기
        if (scanf_s("%d %c %d", &x, &op, 1, &y) != 3) {
            printf("입력 형식이 올바르지 않습니다. 예: 3 + 4\n");
            while (getchar() != '\n'); // 입력 버퍼 비우기
            continue;
        }

        // 연산 수행
        if (op == '+')
            printf("연산결과 : %d\n", sum(x, y));
        else if (op == '-')
            printf("연산결과 : %d\n", sub(x, y));
        else if (op == '*')
            printf("연산결과 : %d\n", mul(x, y));
        else if (op == '/')
        {
            if (y == 0) {
                printf("0으로 나눌 수 없습니다.\n");
                continue;
            }
            printf("연산결과 : %d\n", divi(x, y));
        }
        else
            printf("지원되지 않는 연산자입니다.\n");

        printf("\n");
    }

    return 0;
}
