#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char x;

    while (1)
    {
        printf("���ڸ� �Է��Ͻÿ� : ");
        x = getchar();              // ���� �Է�

        if (x == '.')               // ���� ���� ���� Ȯ��
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
            printf("���\n");
        }

        while (getchar() != '\n');  // ���� ���� (Enter ����)
    }

    printf("���α׷��� �����մϴ�.\n");
    return 0;
}
