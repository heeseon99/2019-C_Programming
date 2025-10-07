#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int* A, int size)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < size; i++)
	{
		A[i] = rand();			//i의 초기값 0, 조건(i<size)만족하면 A[i]의 값을 난수로 채운 후 i를 1증가
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ", A[i]);	//i의 초기값0, 조건(i<size)만족하면 A[i]의 값 출력 후 i를 1증가
	}
	printf("\n");				//줄바꿈
}
int main(void)
{
	int data[10];
	array_fill(data, 10);

	return 0;
}