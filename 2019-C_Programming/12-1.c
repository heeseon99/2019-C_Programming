#include <stdio.h>

int main(void)
{
	char c;								//char�� ���� c
	printf("���ڸ� �Է��Ͻÿ� : ");		//ȭ�鿡 '���ڸ� �Է��Ͻÿ� : '���
	scanf_s("%c", &c);					//����ڷκ��� �Է� ���� ���ڸ� c�� ����
	printf("�ƽ�Ű �ڵ尪=%d", c);		//�ƽ�Ű �ڵ� �� ���
	return 0;
}