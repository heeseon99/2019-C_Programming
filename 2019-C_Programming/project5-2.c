//2���� double �� �Ǽ��� �о� ��, ��, ��, �� ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	double x, y;											//���� ����

	printf("�Ǽ��� �Է��Ͻÿ� : ");							//ȭ�鿡 "�Ǽ��� �Է��Ͻÿ� : "���
	scanf("%lf %lf", &x, &y);								//�Է� ���� �Ǽ� �� �� x, y�� ����

	printf("%lf %lf %lf %lf", x + y, x - y, x * y, x / y);	//ȭ�鿡 �� ���� ��, ��, ��, �� ���

	return 0;
}