#include <stdio.h>

int main(void)
{
	char op;
	int x, y;
	printf("**********************\n");
	printf("A----Add\n");
	printf("S----Subtract\n");
	printf("M----Multiply\n");
	printf("D----Divide\n");
	printf("Q----Quit\n");
	printf("**********************\n");
	//�˹ٺ��� ���� ���� ����
	do {
		printf("������ �����Ͻÿ� : ");
		scanf_s("%c", &op);
		if (op == 'Q')	//Q �Է��� ��� ����
			break;
		switch (op) {
		case 'A':
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf_s("%d %d", &x, &y);
			printf("%d\n", x + y);
			break;		//A�Է��ϸ� ���� ����

		case 'S':
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf_s("%d %d", &x, &y);
			printf("%d\n", x - y);
			break;		//S�Է��ϸ� ����

		case 'M':
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf_s("%d %d", &x, &y);
			printf("%d\n", x * y);
			break;		//M�Է��ϸ� ���ϱ�

		case 'D':
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf_s("%d %d", &x, &y);
			printf("%d\n", x / y);
			break;	//D�Է��ϸ� ������

		default:
			continue;	//���� �ݺ�����
		}
	} while (1);
	return 0;
}