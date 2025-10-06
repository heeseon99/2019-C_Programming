#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x[10] = { 0 };
    int i, max, min;

    srand(time(NULL));

    printf("생성된 난수: ");
    for (i = 0; i < 10; i++) {
        x[i] = rand() % 100 + 1; // 1~100 범위의 난수
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

    printf("최대값은 %d\n", max);
    printf("최소값은 %d\n", min);

    return 0;
}