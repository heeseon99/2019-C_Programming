#include <stdio.h>

void print_stars()
{
	for (int i = 0; i < 31; i++)
		printf("*");
}

int main(void)
{
	print_stars();
	printf("\n");
	printf("Hello World!\n");
	print_stars();
	printf("\n");
	return 0;
}