#include <stdio.h>
#include <string.h>

int str_chr(char* s, int c)				//������ �� ���ϴ� �Լ� 
{
	int i;
	int count = 0;						//int�� ���� count�� 0���� �ʱ�ȭ

	for (i = 0; i < strlen(s); i++)		//i�� 0���� �ʱ�ȭ, i�� s�� ���̺��� ������ �ݺ� ���� ��, i�� 1����
	{
		if (s[i] == c)
			count++;					//s[i]==c�����ϸ� count�� 1����
	}
	return count;						//count�� ��ȯ
}

int main(void)
{
	char str[100];						//���� �迭 str

	printf("���ڿ��� �Է��Ͻÿ� : ");	//ȭ�鿡 '���ڿ��� �Է��Ͻÿ�'���
	gets_s(str, 100);					//����ڷκ��� ���ڿ� �Է� ����, �ִ� �Է� ���� 100

	char ch;							//char�� ���� ch
	for (ch = 'a'; ch <= 'z'; ch++)		//ch�� �� �ʱⰪ 0, ����(ch�� z���� �۰ų� ����) �����ϸ� �ݺ� ���� �� ch�� 1����
	{
		printf("%c : %d\n", ch, str_chr(str, ch));		//ȭ�鿡 ��� ���
	}

	return 0;
}