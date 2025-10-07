#include <stdio.h>

void array_copy(int* a, int* b, int size)
{
	int i;
	for (i = 0; i < size; i++)
		b[i] = a[i];
}

void print(int* a, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}



int main(void)
{
	int a[10] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int b[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

	printf("a[]=");
	print(a, 10);
	printf("b[]=");
	print(b, 10);
	array_copy(a, b, 10);
	printf("a[]=");
	print(a, 10);
	printf("b[]=");
	print(b, 10);

	return 0;
}