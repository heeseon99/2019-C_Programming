//cm�� ǥ�õ� Ű�� �Է� �޾� ��Ʈ�� ��ġ�� ����

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int cm, ft;												//������ ����, cm, ft
	float inch;												//�Ǽ��� ����, inch

	printf("Ű�� �Է��Ͻÿ�(cm) : ");						//ȭ�鿡 "Ű�� �Է��Ͻÿ�(cm) : "���
	scanf("%d", &cm);										//�Է� ���� ���� cm�� ����

	ft = cm / (12 * 2.54);									//��Ʈ ���ϴ� ��
	inch = (cm - (ft * 12 * 2.54)) / 2.54;					//��ġ ���ϴ� ��

	printf("%dcm�� %d��Ʈ %f��ġ �Դϴ�.\n", cm, ft, inch);	//ȭ�鿡 ��� ���

	return 0;
}