#include <stdio.h>

void array_add(int* A, int* B, int* C, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		C[i] = A[i] + B[i];
	}
}

void print(int* a, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d  ", a[i]);
	printf("\n");
}



int main(void)
{

	int a[10] = { 1,2,3,0,0,0,0,0,0,0 };
	int b[10] = { 0,0,0,0,0,0,0,0,0,1 };
	int c[10];
	printf("a[] = ");
	print(a, 10);
	printf("b[] = ");
	print(b, 10);
	array_add(a, b, c, 10);
	printf("c[] = ");
	print(c, 10);

	return 0;
}