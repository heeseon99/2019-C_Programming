//������ ���ͷ� ��ȯ�ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float mile;		// ���� mile
	double meter;	//���� meter

	printf("������ �Է��Ͻÿ�:"); //ȭ�鿡 ������ �Է��Ͻÿ� ���
	scanf("%f", &mile);		//����ڷκ��� �Է¹��� ���� mile�� ����

	meter = 1609.0 * mile;	//������ ���ͷ� �����ϴ� ��

	printf("%f������ %lf�����Դϴ�.\n", mile, meter);	//������ ���ͷ� ������ �� ȭ�鿡 ���

	return 0;
}