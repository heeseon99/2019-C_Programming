#include <stdio.h>
int check_alpha(char x)			//���ĺ����� Ȯ���ϴ� �Լ�	
{
	if (x >= 'a' && x <= 'z')	//x�� a~z�̸� 1(��)�� ��ȯ
		return 1;
	else
		return 0;				//x�� a~z�� �ƴϸ� 0(����)�� ��ȯ
}

int main(void)
{
	char x;
	printf("���ڸ� �Է��Ͻÿ� : ");	//ȭ�鿡 '���ڸ� �Է��Ͻÿ� : '���
	scanf_s("%c", &x);				// ����ڰ� �Է��� ������ x�� ����

	int z;
	z = check_alpha(x);				//z�� �Լ� check_alpha�� x�� ������ ��

	if (z == 1)						//z�� 1�̸�(x�� a~z�̸�) ȭ�鿡 (�Է¹��� ����)�� ���ĺ� �Դϴ�. ���
		printf("%c�� ���ĺ� �Դϴ�.\n", x);
	else
		printf("%c�� ���ĺ��� �ƴմϴ�.\n", x);	//z�� 0�̸�(x�� a~z�� �ƴϸ�) ȭ�鿡 (�Է¹��� ����)�� ���ĺ��� �ƴմϴ�. ���


	return 0;
}