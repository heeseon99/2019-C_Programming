#include <stdio.h>
int is_leap(int year)											//�������� �ƴ��� �Ǵ��ϴ� �Լ�
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}

int main(void)
{
	int year;
	printf("������ �Է��Ͻÿ� : ");				//ȭ�鿡 '������ �Է��Ͻÿ� : '���
	scanf_s("%d", &year);							//�Է� ���� ���� ����

	int z;
	z = is_leap(year);							//z�� is_leap(year)�� �� ����
	if (z == 1)
		printf("%d���� 366�� �Դϴ�.\n", year);	//z�� ���� 1�̸�(�����̸�) ����ϴ� ����
	else
		printf("%d���� 365�� �Դϴ�.\n", year);	//z�� ���� 0�̸�(������ �ƴϸ�)����ϴ� ����

	return 0;
}