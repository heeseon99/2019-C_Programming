#include <stdio.h>

int check()
{
	static int count = 1;					//���� ���� ���� count, �ʱⰪ 1
	int password;							//����ڷκ��� �Է� ���� ��й�ȣ ������ ����

	count++;								//count 1����

	printf("��й�ȣ : ");					//ȭ�鿡 '��й�ȣ : '���
	scanf_s("%d", &password);					//�Է� ���� ���� password�� ����

	if (count > 3)
	{
		printf("�α��� �õ� Ƚ�� �ʰ�\n");	//count�� 3���� ũ�� '�α��� �õ� Ƚ�� �ʰ�' ��� �� �ٹٲ�
		return 0;
	}
	else if (password == 1234)
	{
		printf("�α��� ����\n");				//����ڰ� �Է��� ������ 1234�� ��ġ�ϸ� '�α��� ����'��� �� �ٹٲ�
	}
}

int main(void)
{
	check();
	check();
	check();
	return 0;
}