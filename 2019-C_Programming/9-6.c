#include <stdio.h>

int power(int base, int power_raised)
{
	if (power_raised == 0)								//������ 0�̸� 1��ȯ
		return 1;
	else
		return base * power(base, power_raised - 1);	//������ 0�� �ƴϸ� base * power(base, power_raised - 1) ��ȯ
}

int main(void)
{
	int b, p;								//�ؼ� ������ ���� b, ���� ������ ���� p

	printf("�ؼ� : ");						//ȭ�鿡 '�ؼ� : '���
	scanf_s("%d", &b);						//����ڷκ��� �Է� ���� ���� b�� ����
	printf("���� : ");						//ȭ�鿡 '���� : '���
	scanf_s("%d", &p);						//����ڷκ��� �Է� ���� ���� p�� ����
	int result;								//��� ������ ���� result
	result = power(b, p);					//power()�� b�� p�� ������ ���� result�� ����
	printf("%d^%d = %d", b, p, result);		//��� ���
	return 0;
}
