//�츮���󿡼� ���� ���Ǵ� ������ ������ ���� �������ͷ� ȯ���ϴ� ���α׷� �ۼ�
//1���� 3.3��������

#define _CRT_SECURE_NO_WARNINGS 
#define SQMETER_PER_PYEONG 3.3058	//��ȣ���
#include <stdio.h>

int main(void)
{
	double x, y;	//���� x, y

	printf("���� �Է��ϼ���:");	//ȭ�鿡 '���� �Է��ϼ���'���
	scanf("%lf", &x);			//����ڷκ��� �Է� ���� ���� x�� ����

	y = x * SQMETER_PER_PYEONG;		//���� �������ͷ� ȯ���ϴ� ��

	printf("%lf������ �Դϴ�.\n", y);		//��ȯ�� ���� ȭ�鿡 ���

	return 0;
}
