//Ű���忡�� �ϳ��� ���ڸ� �о ������ ������ �����ϴ� ���α׷� �ۼ�
//switch�� ���

#include <stdio.h>

int main(void)
{
	char x;

	printf("���ڸ� �Է��Ͻÿ� : ");		//ȭ�鿡 '���ڸ� �Է��Ͻÿ� : '���
	scanf_s("%c", &x);					//����ڰ� �Է� �� �� x�� ����

	switch (x)
	{
	case 'a':
	case'A':
	case'e':
	case'E':
	case'i':
	case'I':
	case 'o':
	case'O':
	case'u':
	case'U':
		printf("�����Դϴ�.\n");	//x�� 'a,A,e,E,i,I,o,O,u,U'�� ��� '�����Դϴ�.'���
		break;

	default:
		printf("�����Դϴ�.\n");	//x�� 'a,A,e,E,i,I,o,O,u,U'�� �ƴ� ��� '�����Դϴ�.'���
		break;

		return 0;
	}
}