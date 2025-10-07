#include <stdio.h>

void conver(double* grades, double* scores, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		scores[i] = 100 * (grades[i] / 4.3);
	}
}

void print(double* a, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%6.2f ", a[i]);
	printf("\n");
}

int main(void)
{
	double grades[10] = { 0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3 };
	double scores[10] = { 0 };

	print(grades, 10);
	conver(grades, scores, 10);
	print(scores, 10);
	return 0;
}