//int �� ���� x, y ���� ���� ��ȯ�ϴ� ���α׷� �ۼ�

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int x, y, tmp;	//������ ���� x, y, temp����

	x = 10;		//x�� 10���� �ʱ�ȭ
	y = 20;		//y�� 20���� �ʱ�ȭ

	printf("x=%d y=%d\n", x, y);		//ȭ�鿡 x, y�� ���

	tmp = x;		//tmp�� x�� ����
	x = y;			//x�� y�� ����
	y = tmp;		//y�� tmp �� ����

	printf("x=%d y=%d", x, y);	//ȭ�鿡 x, y�� ���

	return 0;
}