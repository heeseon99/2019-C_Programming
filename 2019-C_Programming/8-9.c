#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random()
{
    int x;
    x = rand() % 2;
    printf("%d ", x);
}

int main(void)
{
    int i;
    int check;

    srand((unsigned)time(NULL)); // seed는 한 번만 설정

    printf("반복 횟수를 입력하시오 : ");
    scanf_s("%d", &i);

    for (check = 0; check < i; check++) {
        random();
    }

    return 0;
}