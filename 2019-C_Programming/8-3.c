#include <stdio.h>
#define pi 3.141592					//��ȣ ����� ������ ǥ��
double cal_area(double radius)		//���� ���� ���ϴ� �Լ�
{
	return radius * radius * pi;		//���� ����(������*������*������) ��ȯ
}

int main(void)
{
	double radius;

	printf("���� �������� �Է��Ͻÿ� : ");	//ȭ�鿡 '���� �������� �Է��Ͻÿ� : ' ���
	scanf_s("%lf", &radius);					//�Է� ���� ���� radius�� ����

	double x;
	x = cal_area(radius);					//x�� cal_area(radius)
	printf("���� ������ %lf�Դϴ�.\n", x);	//ȭ�鿡 ���� ���� ���

	return 0;
}