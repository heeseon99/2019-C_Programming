#include <stdio.h>

double square(double x)										//�־��� �Ǽ��� �����Ͽ� ��ȯ�ϴ� �Լ�
{
	return x = x * x;
}

int main(void)
{
	double x;
	printf("������ �Է��Ͻÿ� : ");							//ȭ�鿡 '������ �Է��Ͻÿ� : '���
	scanf_s("%lf", &x);										//�Է¹��� ���� x�� ����

	double z;
	z = square(x);											//z�� �Լ� square�� x�� ���� ��

	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.\n", x, z);	//ȭ�鿡 ��� ���

	return 0;
}