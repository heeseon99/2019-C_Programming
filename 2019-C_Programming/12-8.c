#include <stdio.h>
#include <string.h>

int main(void)
{
    char seps[] = " ,\t\n";
    char* token;
    char str[100];
    char* context = NULL;   // strtok_s�� context ������ �ʿ�
    int count = 0;

    printf("���ڿ��� �Է��Ͻÿ� : ");
    gets_s(str, sizeof(str));   // ���ڿ� �Է� (C11 ���� �Լ�)

    token = strtok_s(str, seps, &context);  // ù ��° ��ū ����
    while (token != NULL)
    {
        count++;
        token = strtok_s(NULL, seps, &context);  // ���� ��ū ����
    }

    printf("�ܾ��� ���� %d�Դϴ�.\n", count);
    return 0;
}
