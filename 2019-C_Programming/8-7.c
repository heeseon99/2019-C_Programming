#include <stdio.h>
int get_tax(int income)			//�ҵ漼 ����ϴ� �Լ�
{
	if (income <= 1000)
		return income * 0.08;	//�ҵ��� 1000���� ���ϸ� �ҵ漼�� �ҵ��� 8%
	else
		return income * 0.1;	//�ҵ��� 1000������ �ʰ��ϸ� �ҵ漼�� �ҵ��� 10%
}

int main(void)
{
	int income;								//�ҵ��� ������ ����
	printf("�ҵ漼�� �Է��Ͻÿ� (����) : ");	//ȭ�鿡 '�ҵ漼�� �Է��Ͻÿ� (����) : ' ���
	scanf_s("%d", &income);					//����ڷκ��� �Է¹��� ���� income�� ����

	int tax;								//������ ���� tax
	tax = get_tax(income);					//tax�� get_tax�Լ��� income�� ������ ��

	printf("�ҵ漼�� %d�Դϴ�.\n", tax);		//��� ���

	return 0;
}