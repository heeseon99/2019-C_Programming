//�޿����� ������ ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	float earth, moon;		//���� ����

	printf("�����Ը� �Է��ϼ���(���� : kg) : ");	//ȭ�鿡 �����Ը� �Է��ϼ���(����:kg)���
	scanf("%f", &earth);						//�Է¹��� ���� earth�� ����

	moon = earth * 0.17;					//�޿����� ������ ���ϴ� ��

	printf("�޿����� �����Դ� %f�Դϴ�.\n", moon);		//ȭ�鿡 �޿����� ������ ���

	return 0;

}