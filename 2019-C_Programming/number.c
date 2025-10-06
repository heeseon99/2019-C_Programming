#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x[10] = { 0 };
    int i, max, min;

    srand(time(NULL));

    printf("������ ����: ");
    for (i = 0; i < 10; i++) {
        x[i] = rand() % 100 + 1; // 1~100 ������ ����
        printf("%d ", x[i]);
    }
    printf("\n");

    max = min = x[0];

    for (i = 1; i < 10; i++) {
        if (x[i] > max)
            max = x[i];
        if (x[i] < min)
            min = x[i];
    }

    printf("�ִ밪�� %d\n", max);
    printf("�ּҰ��� %d\n", min);

    return 0;
}