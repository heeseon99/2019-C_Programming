#include <stdio.h>

//����ü book ����
struct book
{
	int id;				//id
	char title[100];	//����
	char author[20];	//�۰�
};

int main(void)
{
	struct book b1 = { 1, "�ٶ��� �Բ� �������", "������ ��ÿ" }; //����ü ������ �� ����

	printf("{%d, %s, %s}\n", b1.id, b1.title, b1.author);	//��� ���

	return 0;
}