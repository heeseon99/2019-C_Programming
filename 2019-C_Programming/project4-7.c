//����ڷκ��� ������ �ӵ� �Է� �޾� � ������ ����ϴ� ���α׷�
//� ������ E=m(v^2)/2.0


#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	double m, v, E;		//���� ����

	printf("����(Kg) : ");	//ȭ�鿡 "����(Kg) : "���
	scanf("%lf", &m);		//����ڷκ��� �Է� ���� �� m�� ����

	printf("�ӵ�(m/s) : ");	//ȭ�鿡 "�ӵ�(m/s) : " ���
	scanf("%lf", &v);		//����ڷκ��� �Է� ���� �� v�� ����

	E = m * v * v / 2.0;		//������� ����ϴ� ��
	printf("�������(J): %lf\n", E);	//������� ���
	return 0;
}