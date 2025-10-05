#include <stdio.h>
#include <math.h>												//sqrt()�Լ� ��� ���� �ʿ�
double get_distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));		//�� �� ���� �Ÿ� ����ϴ� �Լ� ��, sqrt()�� ������ ���
}

int main(void)
{
	double x1, x2, y1, y2;

	printf("ù��° ���� ��ǥ�� �Է��Ͻÿ� (x, y) : ");			//ȭ�鿡 'ù��° ���� ��ǥ�� �Է��Ͻÿ� (x, y) : '���
	scanf_s("%lf %lf", &x1, &y1);									//�Է¹��� ���� ���� x1 y1�� ����

	printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ� (x, y) : ");			//ȭ�鿡 '�ι�° ���� ��ǥ�� �Է��Ͻÿ� (x, y) : '���
	scanf_s("%lf %lf", &x2, &y2);									//�Է¹��� ���� ���� x2 y2�� ����

	printf("���� ������ �Ÿ��� %lf�Դϴ�.\n", get_distance(x1, y1, x2, y2));	//��� ���

	return 0;
}