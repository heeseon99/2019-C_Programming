//���̰��� �����̿�� ���� ����ϴ� ���α׷�
//���� �ð��� ������� ���̸� �Է¹޾� �����Ͽ��� �ϴ� ��� ���

#include <stdio.h>

int main(void) {
	int time, age;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����) : ");
	scanf_s("%d %d", &time, &age);

	if (time < 17)
	{
		if (age >= 3 && age <= 12 || age >= 65)
			printf("����� 25000�Դϴ�.\n");
		else
			printf("����� 34000�� �Դϴ�.\n");
	}
	else
		printf("����� 10000�Դϴ�.\n");

	return 0;
}