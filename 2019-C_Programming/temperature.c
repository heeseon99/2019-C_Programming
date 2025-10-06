#include <stdio.h>

void printoption()
{
	printf("'c' ¼·¾¾¿Âµµ¿¡¼­ È­¾¾¿Âµµ·Î º¯È¯\n");
	printf("'f'È­¾¾¿Âµµ¿¡¼­ ¼·¾¾¿Âµµ·Î º¯È¯\n");
	printf("'q'Á¾·á\n");
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
		printf("¸Þ´º¿¡¼­ ¼±ÅÃÇÏ¼¼¿ä");
		scanf_s("%c", &choice);
		if (choice == 'q')
			break;
		else if (choice == 'c')
		{
			printf("¼·¾¾¿Âµµ : ");
			scanf_s("%lf", &temperature);
			printf("È­¾¾¿Âµµ : %lf\n", C2F(temperature));
		}
		else if (choice == 'f')
		{
			printf("È­¾¾¿Âµµ : ");
			scanf_s("%lf", &temperature);
			printf("¼·¾¾¿Âµµ : %lf\n", F2C(temperature));
		}
		getchar();
	}
	return 0;

}