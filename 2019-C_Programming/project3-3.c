//�ﰢ�� ���� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float height, base, area; // ���� height(����), base(�غ�), area(����) ����

	printf("�ﰢ���� �غ�:");	// ȭ�鿡 �ﰢ���� �غ� ���
	scanf("%f", &base);			//����ڷκ��� �� �Է¹޾� base�� ����
	printf("�ﰢ���� ����:");	//ȭ�鿡 �ﰢ���� ���� ���
	scanf("%f", &height);		//����ڷ� ���� �� �Է¹޾� height�� ����

	area = 0.5 * height * base;		//�ﰢ���� ���� ����ϴ� ��

	printf("�ﰢ���� ����: %f \n", area);	//ȭ�鿡 �ﰢ���� ���� ���

	return 0;
}