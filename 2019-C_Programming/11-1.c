#include <stdio.h>

int main(void)
{
	int x = 0x12345678;													//int�� ���� x, 0x12345678�� 16������ ǥ��, 12/34/56/78�� ������
	unsigned char* xp = (char*)&x;										//int�� ++���� �� 4����, �ڸ� �� ���ڸ��� 1�� ������ ����ϱ� ���� x�� char���� ����ȯ �ؼ� xp�� ����

	printf("����Ʈ ���� : %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);	//xp�� ���
	return 0;
}