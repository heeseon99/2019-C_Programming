#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double random()
{
	return printf("%lf ", rand() / (double)RAND_MAX);
}


int main(void)
{
	int i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 5; i++)
		random();

	printf("\n");

	return 0;
}
