#include <stdio.h>

//������¸� ��Ÿ���� ����ü account
struct account
{
	int number;		//���¹�ȣ
	char name[20];	//�̸�
	int balance;	//�ܾ�
};

int main(void)
{
	struct account a1 = { 1, "ȫ�浿", 100000 };	//����ü ������ �� ����
	printf("{%d, %s, %d}\n", a1.number, a1.name, a1.balance);	//��� ���

	return 0;
}