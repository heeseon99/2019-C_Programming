//3���� ���� �Է� �޾�, 3���� ���� �� �� �ִ� �� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int x, y, z;							//3���� ���� ������ ����
	int max;								//�ִ밪 ������ ����

	printf("3���� ������ �Է��Ͻÿ� : ");	//ȭ�鿡 "3���� ���� �Է��Ͻÿ� : " ���
	scanf("%d %d %d", &x, &y, &z);			//�Է� ���� ���� �� �� x, y, z�� ����

	max = (x > y) ? x : y;					//x>y�� ���̸� max�� x����, �����̸� max�� y����
	max = (z > max) ? z : max;				//z>max�� ���̸� max�� z����

	printf("�ִ밪 : %d", max);				// ȭ�鿡 �ִ밪 ���

	return 0;
}