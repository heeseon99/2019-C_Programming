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

    srand((unsigned)time(NULL)); // seed�� �� ���� ����

    printf("�ݺ� Ƚ���� �Է��Ͻÿ� : ");
    scanf_s("%d", &i);

    for (check = 0; check < i; check++) {
        random();
    }

    return 0;
}