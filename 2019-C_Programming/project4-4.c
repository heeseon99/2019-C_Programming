//������ ����(����*�ʺ�*����)�� ���ϴ� ���α׷� �ۼ�

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	double w, h, d;	//���� w, h, d

	printf("������ ���� ���� ���̸� �ѹ��� �Է� : ");	//ȭ�鿡 '������ ����, ���� ���̸� �ѹ��� �Է�'���
	scanf("%lf %lf %lf", &w, &h, &d);					//����ڷκ��� �Է� ���� �� ���� ���� w, h, d�� ����

	double v;	//���� v(����)
	v = w * h * d;	//���� ����ϴ� ��

	printf("������ ���Ǵ� %lf�Դϴ�.\n", v);	//ȭ�鿡 ���� ���

	return 0;
}