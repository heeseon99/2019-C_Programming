//���׽� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x, y;							// ���� x, y

	printf("�Ǽ��� �Է��ϼ���:");		//"�Ǽ��� �Է��ϼ���:"ȭ�鿡 ���
	scanf("%f", &x);					// ����ڿ��� �Է¹��� �� x�� ����

	y = 3 * x * x + 7 * x + 11;			//���׽��� ���� y�� ����

	printf("���׽��� ���� %f\n", y);	//����� ȭ�鿡 ���

	return 0;
}