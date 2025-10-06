#include <stdio.h>

int sum(int x, int y)
{
    static int count;
    count++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
    return x + y;
}

int sub(int x, int y)
{
    static int count;
    count++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
    return x - y;
}

int mul(int x, int y)
{
    static int count;
    count++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
    return x * y;
}

int divi(int x, int y)
{
    static int count;
    count++;
    printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);
    return x / y;
}

int main(void)
{
    int x, y;
    char op;

    printf("=== ��Ģ���� ���α׷� ===\n");
    printf("����: [����] [������] [����]\n");
    printf("����: 3 + 4\n");
    printf("�����Ϸ��� q �Է�\n\n");

    while (1)
    {
        printf("������ �Է��Ͻÿ� : ");

        // ���� ���� ���(q)�� Ȯ��
        if (scanf_s(" %c", &op, 1) != 1)
            break;

        if (op == 'q' || op == 'Q') {
            printf("���α׷��� �����մϴ�.\n");
            break;
        }

        // ������ �տ��� ���� ���ڰ� ������ �� �����Ƿ� ���� ���� ó��
        ungetc(op, stdin);

        // ��Ģ���� �Է� �ޱ�
        if (scanf_s("%d %c %d", &x, &op, 1, &y) != 3) {
            printf("�Է� ������ �ùٸ��� �ʽ��ϴ�. ��: 3 + 4\n");
            while (getchar() != '\n'); // �Է� ���� ����
            continue;
        }

        // ���� ����
        if (op == '+')
            printf("������ : %d\n", sum(x, y));
        else if (op == '-')
            printf("������ : %d\n", sub(x, y));
        else if (op == '*')
            printf("������ : %d\n", mul(x, y));
        else if (op == '/')
        {
            if (y == 0) {
                printf("0���� ���� �� �����ϴ�.\n");
                continue;
            }
            printf("������ : %d\n", divi(x, y));
        }
        else
            printf("�������� �ʴ� �������Դϴ�.\n");

        printf("\n");
    }

    return 0;
}
