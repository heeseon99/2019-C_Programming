#include <stdio.h>

void printoption()
{
	printf("'c' �����µ����� ȭ���µ��� ��ȯ\n");
	printf("'f'ȭ���µ����� �����µ��� ��ȯ\n");
	printf("'q'����\n");
}

double F2C(double F_temperature)
{
	return (F_temperature - 32) * 5.0 / 9.0;
}

double C2F(double C_temperature)
{
	return 9.0 / 5.0 * C_temperature + 32;
}

int main(void)
{
	char choice;
	double temperature;
	while (1)
	{
		printoption();
		printf("�޴����� �����ϼ���");
		scanf_s("%c", &choice);
		if (choice == 'q')
			break;
		else if (choice == 'c')
		{
			printf("�����µ� : ");
			scanf_s("%lf", &temperature);
			printf("ȭ���µ� : %lf\n", C2F(temperature));
		}
		else if (choice == 'f')
		{
			printf("ȭ���µ� : ");
			scanf_s("%lf", &temperature);
			printf("�����µ� : %lf\n", F2C(temperature));
		}
		getchar();
	}
	return 0;

}