#include <stdio.h>
int round(double f)				//�Ǽ��� 0.5�� ���Ͽ� �Ҽ��� ���ϸ� ������ �ݿø� ���� �����ϴ� �Լ�
{
	return f + 0.5;
}

int main(void)
{
	double f;										//�Ǽ��� ���� f

	printf("�Ǽ��� �Է��Ͻÿ� : ");					//ȭ�鿡 '�Ǽ��� �Է��Ͻÿ� : ' ���
	scanf_s("%lf", &f);								//����ڷκ��� �Է� ���� ���� f�� ����

	int round_up;									//������ ���� round_up
	round_up = round(f);							//���� round_up�� �Լ�  round�� f������ �� ���� 

	printf("�ݿø��� ���� %d�Դϴ�.\n", round_up);	//����� ���

	return 0;
}